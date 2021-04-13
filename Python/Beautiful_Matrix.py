br_flag = 0
for i in range(0,5):
    a = list(input().split(" "))
    for j in range(0, 5):
        if(int(a[j])):
            br_flag = 1
            break
    if(br_flag):
        break

res = abs(i-2)+abs(j-2)
print(res)