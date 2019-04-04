def NCards(k):
	c=1
	n=1
	d=2
	sum = 1/2
	while k>sum:
		c+=1
		n = d + (n*(c+1))
		d = d*(c+1)
		sum = n/d
	return c

k = float(input())
if k==0.00:
	print()
else:
	while k:
		print(str(NCards(k))+" card(s)")
		k = float(input())
