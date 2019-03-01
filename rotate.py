def Rotate(arr, d):
    temp = arr[2:]+arr[:2]
    arr = temp
    print(arr)
    print(temp)
# Main
n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
d=int(input())
temp = arr[2:]+arr[:2]
print(*temp)
