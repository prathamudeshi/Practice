def fact(num):
    if num<=1:
        return num
    else:
        return num*fact(num-1)

num=int(input())
print(fact(num))