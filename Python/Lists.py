mylist=input().split()
mylist2=[]
for x in mylist:
    if x not in mylist2:
        mylist2.append(x)
print(mylist2)
