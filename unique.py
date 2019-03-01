def FindUnique(arr):
    freq = {}
    for i in arr:
        if i in freq:
            freq[i]+=1
        else:
            freq[i] = 1
    for k,v in freq.items():
        if v is 1:
            return k


# Main
n=int(input())
arr=list(int(i) for i in input().strip().split(' '))
unique=FindUnique(arr)
print(unique)
