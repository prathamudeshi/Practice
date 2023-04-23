x=int(input())
b=x
a=0
while(x>0):
    n=int(x%10)
    a=a+(n**3)
    x=int(x/10)
if(a==b):
    print("The number is Armstrong")
else:
    print("The number is not Armstrong")