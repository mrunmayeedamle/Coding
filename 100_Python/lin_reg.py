x = [20,30,40,45,25]
y = [10000,13000,20000,22000,12000]

m_x = sum(x) / len(x)
m_y = sum(y) / len(y)

num =0
den =0

for i in range (len(x)):
    num += (x[i] - m_x) * (y[i] - m_y)
    den += (x[i] - m_x) ** 2
    
m = num / den
c = m_y - ( m * m_x)

print("Line of regression for y on x: y =", m, "x +", c)