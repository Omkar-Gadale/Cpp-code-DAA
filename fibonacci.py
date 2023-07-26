a=0
b=1
n=int(input("Enter the number of terms needed: "))
print(a,b,end=" ")
while(n-2):
    c=a+b
    a=b
    b=c
    print(c,end=" ")
    n=n-1
    
#Enter the number of terms needed: 10
#0 1 1 2 3 5 8 13 21 34 