import math
x=[94,88,71,75,71,68,73,57,59,65]
y=[80,60,56,47,43,40,67,16,21,54]
n=len(x)

def cov(l):
    sum=0
    b=0
    for i in l:
        sum=sum+i
    avg=sum/n
    for i in l:
        a=i-avg
        b=b+a
    return b


def std(k):
    sum=0
    b=0
    for i in k:
        sum=sum+i
    avg=sum/n
    for i in k:
        a=(i-avg)**2
        b=b+a
    std_of_k=math.sqrt(b/n)
    return std_of_k

def corre():
    r=(cov (x)*cov(y))/std(x)*std(y)
    return r

m = cov(x)
n = cov(y)
print("Covariance of x is: ",m)
print("Covariance of y is", n)

corr = corre()
print("Correlation coefficient is: ", corr)
