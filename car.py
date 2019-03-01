def uniqueChars(string):
    # Please add your code here
    hashmap={}
    res =[]
    for i in string:
      	if i in hashmap:
        		continue
      	else:
        	hashmap[i] = 1
        	res.append(i)
    return ''.join(res)
# Main
string = input()

print(uniqueChars(string))
