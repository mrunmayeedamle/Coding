import numpy as np
import matplotlib.pyplot as plt
import pandas as pd
from matplotlib import pyplot as mtp
from sklearn.cluster import KMeans

df = pd.read_csv(r'C:\Users\Mrunmayee\Desktop\wine.csv')
print(df.head())

x = df.iloc[:, [2,3]].values
print(x)

wcss_list = []

for i in range(1,11):
    kmeans = KMeans(n_clusters=i, init= 'k-means++', random_state=42)
    kmeans.fit(x)
    wcss_list.append(kmeans.inertia_)

mtp.plot(range(1, 11), wcss_list)
mtp.title('Elbow method graph')
mtp.xlabel('No. of clusters(k)')
mtp.ylabel('wcss_list')
mtp.show()

kmeans = KMeans(n_clusters=6, init= 'k-means++', random_state=42)
y_predict = kmeans.fit_predict(x)

mtp.scatter(x[y_predict == 0,0], x[y_predict == 0, 1], s = 100, c = 'blue')
mtp.scatter(x[y_predict == 1,0], x[y_predict == 1, 1], s = 100, c = 'blue')
mtp.scatter(x[y_predict == 2,0], x[y_predict == 2, 1], s = 100, c = 'blue')
mtp.scatter(x[y_predict == 3,0], x[y_predict == 3, 1], s = 100, c = 'blue')
mtp.scatter(x[y_predict == 4,0], x[y_predict == 4, 1], s = 100, c = 'blue')
mtp.scatter(x[y_predict == 5,0], x[y_predict == 5, 1], s = 100, c = 'blue')
mtp.scatter(kmeans.cluster_centers_[:, 0], kmeans.cluster_centers_[:, 1], s = 300)
mtp.legend()
mtp.show()