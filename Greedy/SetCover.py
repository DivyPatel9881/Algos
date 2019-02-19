def Compare(a):
	return (a[1]/len(a))
	
U = set(input("Enter Universal Set : ").split())
k = int(input("Enter a number : "))

l=[]

for i in range(k):
	l.append((set(input("Enter a set : ").split()),int(input("Enter cost : "))))

l.sort(key=Compare)

u=set()

for k in l:
	l = k[0].difference(u)
	if(len(l)==0):
		continue
	else:
		cost = k[1]/len(l)
	

