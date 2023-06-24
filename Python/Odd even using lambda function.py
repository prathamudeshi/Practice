n=int(input('Enter the number of elements: '))
ori=[]
for i in range(n):
    e=int(input())
    ori.append(e)
eve=[]
odd=[]

a=lambda x: x%2
for j in ori:
    if(a(j)==0):
        eve.append(j)
    else:
        odd.append(j)

print("The given list is: \n",n,"\n\n")
print('The list of even numbers is: \n',eve,'\n\n')
print('The lis of odd numbers is: \n',odd,'\n\n')
