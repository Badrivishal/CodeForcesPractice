s = ""
n = int(input());
for i in range(n):
    #print(i)
    if i%2 == 0:
        s = s + "I hate "
    else:
        s = s + "I love "
    if i<n-1:
        s = s + "that "

print(s+"it")