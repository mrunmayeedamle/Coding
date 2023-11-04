# Day 7 -
# Simple Calculator in Python
print("Enter the first number:")
a = int(input())
print("Enter the second number:")
b = int(input())

print("Enter the operation you want to perform: ")
ch = input()

if(ch == '+'):
    print(a,"+", b,"= ", a+b)

elif(ch == '-'):
    print(a,"-", b,"= ", a-b)

elif(ch == '*'):
    print(a,"*", b,"= ", a*b)

elif(ch == '/'):
    print(a,"/", b,"= ", a/b)

elif(ch == '%'):
    print(a,"%", b,"= ", a%b)

elif(ch == '**'):
    print(a,"**", b,"= ", a**b)

elif(ch == '//'):
    print(a,"//", b,"= ", a//b)
else:
    print("Error")