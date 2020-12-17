n = int(input())
ans = ""
for i in range(n):
    s, t = input().split(" ")
    s, t = int(s), int(t)
    s = s*60/100
    print(int(s*t))

