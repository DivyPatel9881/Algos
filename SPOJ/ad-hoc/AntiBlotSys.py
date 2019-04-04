#Anti Blot System.
k = int(input())
for i in range(k):
	input()
	st = input()
	l = st.split()
	if  not l[0].isdigit():
		l[0] = str(int(l[4])-int(l[2]))
	elif not l[2].isdigit():
		l[2] = str(int(l[4])-int(l[0]))
	elif not l[4].isdigit():
		l[4] = str(int(l[2])+int(l[0]))
	print(" ".join(l))
		
