a=[x for x in range(0,1000)]  
ma=[]
l=len(a)
ser=len(a)//2 
interval = 50
index = 0
maxi = 0
nach = 0
kon = 1000
while True:
    for i in range(nach,kon,interval):
        if maxi < a[i]:
            maxi = a[i]
            index = i
    nach = index - interval
    kon  = index + interval
    interval = interval//10
    if interval == 0: 
        interval = 1
    print(a[i])
