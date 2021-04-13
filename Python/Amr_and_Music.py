n, k = input().split(" ")
n = int(n)
k = int(k)

d = list(map(int, input().split()))

a = [(d[i], i + 1) for i in range(len(d))]
s_a = sorted(a)

i = 0
sum1 = 0
while (sum1 <= k) and (i < len(a)):
    sum1 += s_a[i][0]
    i+=1

if(sum1 > k):
    i-=1

print(i)
for iter1 in range(i):
    print(s_a[iter1][1], end = " ")
