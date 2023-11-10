from matplotlib import pyplot as plt
import numpy as np
from scipy.stats import norm


#print(dir(plt))

x = [1000,2000,3000,4000,5000,6000,7000,8000,9000]
y = [200000,400000,600000,800000,300000,500000,700000,900000,600000]

plt.plot(x, y)
plt.show()
plt.scatter(x, y)
plt.show()
plt.pie(x)
plt.show()
plt.pie(y)
plt.show()
plt.boxplot(x, y)
plt.show()
plt.boxplot(x)
plt.show()
plt.boxplot(y)
plt.show() 


'''plt.subplot(1,3,1)
plt.plot(x ,y , color="pink")
plt.subplot(1,3,2)
plt.plot(x ,y , color="blue")'''


mean=np.mean(x)
print(mean)
stand=np.std(x)
print(stand)

print(np.mean(y))

plt.plot(x,norm.pdf(x,mean,stand))
plt.show()