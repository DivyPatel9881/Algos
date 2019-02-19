t = int(input())
for i in range(t):
	(a,b) = input().split()
	arev = int("".join(list(reversed(a))))
	brev = int("".join(list(reversed(b))))
	print(int("".join(list(reversed(str(arev+brev))))))
	
