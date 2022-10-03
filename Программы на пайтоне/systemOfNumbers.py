def perevodVDes():
	N10 = 0
	k = 1
	print("p=")
	p = int(input())
	print("N", p, "=")
	Np = int(input())
	while not Np ==0:
		N10 = N10+(Np%10)*k
		k*=p
		Np = Np // 10
	print("N10=", N10)
	
def perevodIsDesyatichnoy():
	print("Вdедите Число")
	N10 = int(input())
	print("Куда")
	p = int(input())
	k = 1
	Np = 0
	flag = True
		
	while flag == True:
		Np = Np + (N10 %p)*k
		k=k*10
		N10 = N10 // p
		if N10 == 0: 
		    flag = False
    print(Np)


def Tabliza():
	print("ведите основание сисетмы")
	p = int(input())
	X = 1
	Y = 1
	for X in range(X,p):
		for Y in range(Y,p):
			Z = (X*Y //p)*10 + (X*Y)%p
			print(Z, end=" ")
		print()
		Y = 1
