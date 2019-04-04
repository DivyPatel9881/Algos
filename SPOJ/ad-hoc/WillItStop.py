//Will it ever stop
n = int(input())
dict={}
flag=0
dict[n] = 1
while n>1:
	if n%2==0:
		n/=2
	else:
		n=n*3+3
	if n in dict.keys():
		flag=1
		break
	dict[n] = 1
if flag==1:
	print("NIE")
else:
	print("TAK")