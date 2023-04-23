sample=input()
freq={}
for i in sample:
    if i in freq:
        freq[i]+=1
    else:
        freq[i]=1
print(freq)