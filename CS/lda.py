import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import StandardScaler #feature scaling 
from sklearn.discriminant_analysis import LinearDiscriminantAnalysis as LDA
from sklearn.linear_model import LogisticRegression  
from sklearn.metrics import confusion_matrix
from sklearn.metrics import accuracy_score

dataset = pd.read_csv(r'C:\Users\Mrunmayee\Desktop\wine.csv')
print(dataset.head())

x = dataset.iloc[:, 0:13].values # 1 -row, 0:13 - 0 to 12 columns get printed
#print(x)
y = dataset.iloc[:, 13].values # : - All rows, 2 - column get printed
#print(y)

x_train, x_test, y_train, y_test = train_test_split(x, y, test_size= 0.2, random_state= 0) 
# 0.2 - 20% testing, rest 80% training 


sc = StandardScaler()
x_train = sc.fit_transform(x_train) #fit and transform data
x_test = sc.transform(x_test) #transform data

lda = LDA(n_components= 3) #number of features to be reduced to

x_train = lda.fit_transform(x_train, y_train)
x_test = lda.transform(x_test)

print(x_train)