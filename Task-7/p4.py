l = []
n = int(input())
grade = []
for i in range(n):
    l.append([input(), float(input())])
    grade.append(l[i][1])
grade = sorted(set(grade))
target = grade[1]
names = []
for i in l:
    if target == i[1]:
        names.append(i[0])
names = sorted(names)
for i in names:
    print(i)