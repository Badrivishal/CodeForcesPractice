a, b, c = input().split(" ")
a = int(a)
b = int(b)
c = int(c)

min_val = min(a, b)

out = c*2 + min(a, b)*2

a -= min_val
b -= min_val

if a or b:
    out += 1
print(out)
