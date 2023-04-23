def add(num):
    if num<=1:
        return num
    else:
        return num+add(num-1)

num=int(input())
print(add(num))