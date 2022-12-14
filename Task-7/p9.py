y = input()
for i in range(int(y)+1, 9012+1):
    if (len("".join(set(str(i))))==4):
        print(i)
        break