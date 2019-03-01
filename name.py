import operator
n = int(input())
hashmap = {}
student =[]
scrlist =[]
cur_rank = 0
cur_score = 0
r = 1
for i in range(n):
    a = str(input())
    student.append(a)
for i in student:
    a = i.split(" ")
    scores  = int(a[1]) + int(a[2]) + int(a[3])
    roll_no = r
    hashmap[roll_no] = [a[0],scores]
    if cur_score < scores:cur_score = scores
    r+=1
for i,j in hashmap.items():


print(hashmap)
print(hashmap['Avinash'][0])
for i in range(len(scrlist)):

# new_hash =  sorted(hashmap.items(),key = operator.itemgetter(1),reverse = True)
# new_hash.append(('',1))
# for i in range(len(new_hash)-1):
#     print(str(cur_rank) +" "+ new_hash[i][0])
#     cur_rank+=1