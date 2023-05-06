a = [1,2,3,4,6,7]
list(map(print, list(c for c in a)))
for i in a:
    print(i)
for i in range(len(a)):
    print(a[i])
print(*a, sep = '\n')
print(list(c for c in a))
[print(i) for i in a]
list(map(print,a))
