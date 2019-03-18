def bla(D, S):
    n = (S+7)//9
    sl = 9*n - 7
    c = 10**(n-1)
    b = 10**(D-1)
    p = int((2+S-sl)*c - 1)
    return p+b
