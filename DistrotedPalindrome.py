while True:
    inp = str(input())
    if(inp == '0'):
        break
    mp = {a:0 for a in inp}
    for i in inp:
        mp[i] +=1
    swaps = 0
    print(inp)
    n = len(inp)//2
    k = len(inp) - 1
    for j in range(n):
        if mp[inp[j]] > 0:
            if inp[j] != inp[k]:
                mp[inp[j]] -= 1
                if inp[j] in mp:
                    swaps += 1
                
    print(swaps)


    