import random
sufW = ["она", "еньк", "ишк", "иньк", "оньк", "ечк", "инк"]
sufM = ["он", "ик", "ек", "ен", "ок", "нок", "ник", "вик"]
anlf = ["Б", "В", "Г", "Д", "Ж", "З", "Й", "К", "Л", "М", "Н", "П", "Р", "С", "Т", "Ф", "Х", "Ц", "Ч", "Ш", "Щ"]
def newName(_name):
    pos = []
    for i in range(0, len(_name)):
        for j in range(0,len(anlf)):
            if _name[i] == anlf[j]:
                pos.append(i)
    c = random.random(0,len(pos))
    
    for i in range(0,c-1):
        _name[pos[i]] == random.choice(anlf)
        
    return _name
def Suf(_gen):
    if _gen[0] == "м":
        return random.choice(sufM)
    else:
        return random.choice(sufW)
    
while True:
    print("Введите свое имя: ")
    name = input()
    print("Введите свой гендер (муж, жен): ")
    gen = input()
    res = newName(name) + Suf(gen)
