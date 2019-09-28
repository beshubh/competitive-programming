n, s = int(input()), list(input())
ans = 0
for i in range(0, n, 2):
    if (s[i] == s[i + 1]):
        # a = 1 - ord(s[i]) + 2 * ord('a')
        # print('ord(s[i]: {} and ord(a) {}'.format(ord(s[i]), ord('a')))
        # b = chr(1 - ord(s[i]) + 2 * ord('a'))
        s[i] = chr(1 - ord(s[i]) + 2 * ord('a'))
        # print('a : {}, b :{}, s[i] : {}'.format(a,b,s[i]))
        ans += 1
print(ans)
print(''.join(s))
