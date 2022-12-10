from random import *
import random

def authors():
     print('Разработчик алгоритма замены: Никитин Павел')
     print('Разработчик-конструктор: Тимур Бакеев')
     print('Разработчик алгоритма добавления окончаний: Вячеслав Воронин')
     print('Тестировщик: Максим Вайс')
     print('Программист-консультант: Кирилл Малахов')
flag = False
consonants = ['Б', 'В', 'Г', 'Д', 'Ж', 'З', 'К', 'Л', 'М', 'Н', 'П', 'Р', 'С', 'Т', 'Ф', 'Х', 'Ч', 'Ш']
def mainP(inputName):
    mainOrder = []
    k = 0
    endName = ''

    Name = list(inputName.upper())
    nameLen = len(Name)

    for i in Name:
        for c in consonants:
            if i == c:
                mainOrder.append(k)
        k += 1

    if mainOrder == []:
        print('Изменение невозможно, нажмите Enter')
        input()
        Start()
        
        
        

    for i in range(randint(1, len(mainOrder))):
        Name[mainOrder[randint(0, (len(mainOrder))-1)]] = random.choice(consonants)

    for i in range(nameLen):
        endName += Name[i]
    return endName



sufW = ["она", "еньк", "ишк", "иньк", "оньк", "ечк", "инк"]
sufM = ["он", "ик", "ек", "ен", "ок", "нок", "ник", "вик"]

def Suf(_gen):
    if _gen[0] == "м":
        return random.choice(sufM)
    else:
        return random.choice(sufW)
   
def Start():    
    if flag == False:
        qq = input("Вы хотите посмотреть авторов? Если да, напишите да, если нет, нажмите Enter: ")
        flag = True
        if qq == "да":
           authors()
    while True:
        gg = input("если вы хотите выйти напишите exit, если нет, то нажмите Enter: ")
        if gg == "exit":
            quit()
        print("Введите свое имя: ")
        name = input()
        
        print("Введите свой гендер (муж, жен): ")
        gen = input()
        res = mainP(name).lower() + Suf(gen)
        print(res.title())
    
Start()

