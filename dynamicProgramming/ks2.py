def KS(w,v,n,c):
    if n is 0 or c is 0:
        return 0
    elif w[n]>c:
        return KS(w,v,n-1,c)
    else:
        t1=KS(w,v,n-1,c)
        t2=v[n]+KS(w,v,n-1,c-w[n])
        result=max(t1,t2)
    return result
w=[0,2,5,9,8]
v=[0,16,45,90,77]
n=len(w)-1
c=10
print(KS(w,v,n,c))