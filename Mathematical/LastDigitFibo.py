#Last Digit of a nth Fibonacci number.
fibo={}
def Fibo(n):
	if n in fibo.keys():
		return fibo[n]
	else:
		if n==0:
			fibo[0]=0
			return 0
		elif n==1:
			fibo[1]=1
			return 1
		else:
			fibo[n]=Fibo(n-1)+Fibo(n-2)
			return fibo[n]

def LastDigitFibo(n):
	return fibo[n%60]%10

Fibo(59)
i = int(input())
print(LastDigitFibo(i))
	

	