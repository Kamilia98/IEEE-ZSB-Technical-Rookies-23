p = int(input())
q = int(input())
flag = False;
for i in range(p, q+1):
    temp = str(i**2)
    length = int(len(temp)/2)
    if (length == 0 and i == 1):
        print(i,end=' ')
        flag = True
    elif (length > 0 and sum([int(temp[0:length]), int(temp[length:])]) == i):
        print(i,end=' ')
        flag = True
if(not flag):
    print("INVALID RANGE") 