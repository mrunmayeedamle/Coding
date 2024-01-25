x = [1,2,3,4,5]

n = len(x)

def mean(l):
    s,m = 0,0
    for i in l:
        s = s + i
        mean = s/n
    return mean

print("Mean: " ,mean(x))

