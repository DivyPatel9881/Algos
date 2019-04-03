#Small Factorial
fact={0:1,}
def Fact(n):
	if n in fact.keys():
		return fact[n]
	else:
		if n==0:
			fact[n]=1
			return 1
		else:
			fact[n]=n*Fact(n-1)
			return fact[n]
t = int(input())
for i in range(t):
	k = int(input())
	print(Fact(k))