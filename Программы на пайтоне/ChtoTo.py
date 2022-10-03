def chet():
    print("Hello World")
    count = 0
    summa = 0
    n = int(input())
    i = 0
    while i < n:
        reader = int(input())
        if reader % 2 == 0:
            count += 1
        else:
            summa+=reader;    
        i += 1
    
    print(count, "/",summa)
    

def Zadachi():
    print("Введите количество символов в алфавите")
    N = int(input())
    step = 2
    i = 1;
    while step < N:
        i+= 1
        step * 2;
        
    print(i-1)
    
Zadachi();