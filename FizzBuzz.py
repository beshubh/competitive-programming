class Solution:
	# @param A : integer
	# @return a list of strings
	def fizzBuzz(self, A):
	    res = []
	    for i in range(1,A+1):
	        if i%5==0 and i%3==0:res.append('FizzBuzz')
	        elif i%3==0:
	            res.append('Fizz')
	        elif i%5==0:
	            res.append('Buzz')
	        else:
	            res.append(i)
	    return res
