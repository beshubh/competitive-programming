def check(string):
    res = True
    if string[0] is not 'a':
        return False
    for i in range(1,len(string)):
        if i + 1 < len(string):
            if (string[i - 1] is 'a' and ( (string[i] is 'a') or (string[i] is 'b' and string[i + 1] is 'b') )):
                res = True
            if not (string[i - 1] is 'b' and string[i] is 'b' and string[i + 1] is 'a'):
                res = True
            else:
                res = False
    return res
inp = input()       
if check(inp):
    print('true')
elif not check(inp):
    print('false')
        
        