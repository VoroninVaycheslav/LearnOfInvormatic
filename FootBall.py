namecomand = ["Катар","Эквадор", "Синегал","Нидерланды"]
scorecomand = [["one","0:2","1:3","0:2","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"],
               ["2:0","one","1:2","1:1","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"],
               ["3:1","2:1","one","0:2","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"],
               ["2:0","1:1","1:3","one","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-","-"]]
arrSum = []
arrBed =[]
Liderspis = {}
set = input("1.Посмотреть рейтинг\n2.Посмотреть забитые мячи определенной команды\n3.Посмотреть результаты матча для одной команды\nВведите ваш выбор: ")
for i in range(0,len(namecomand)):
        for j in range(0,len(scorecomand[i])):
            arrSum.append(0)
            arrBed.append(0)
            if scorecomand[i][j][0] != "o" and scorecomand[i][j][0] != "-":
                arrSum[i] += int((scorecomand[i][j][0]))
                arrBed[i] += int((scorecomand[i][j][2]))  
      
                

if set == "2":
    com = input("Введите срану команды: ")
    res = 0
    for i in range(len(namecomand)):
        if com == namecomand[i]:
            res = i
    
    print(f"Команда забила: {arrSum[res]} Команде забили: {arrBed[res]}")   
if set == "3":
    com = input("Введите срану команды: ")
    print("Команда сыграла 3 матча:")
    res = 0
    for i in range(len(namecomand)):
        if com == namecomand[i]:
            res = i
    for i in range(len(scorecomand[res])):
        if scorecomand[res][i] !="one"and scorecomand[res][i] !="-":
            print(f"{namecomand[res]}:{namecomand[i]} счет {scorecomand[res][i]}")
        
