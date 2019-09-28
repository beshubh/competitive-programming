n,arr = int(input()),list(map(int, input().split()))
 
newarr = [(arr[i], i + 1) for i in range(len(arr))]
newarr = sorted(newarr,key = lambda x:x[0],reverse = True)
cost = 0
x = 0
for i in range(len(newarr)):
    cost += newarr[i][0]*x + 1
    x+=1
 
print(cost)
# print(' '.join([str(x) for x[1] in newarr]))
print(*[x[1] for x in newarr])