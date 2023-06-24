def ispalindrome(n):
    if len(n)<1:
        return 1
    else:
        if n[0]==n[-1]:
            return ispalindrome(n[1:-1])
        else:
            return False

n=str(input())
if ispalindrome(n):
    print("YES")
else:
    print("NO")