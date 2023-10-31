#Simple Calculator in Python
print("Enter the first number:")
a = input()
print("Enter the second number:")
b = input()

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