inp = input()
t = int(inp)
while (t != 0):
    t = t-1
    inp = input()
    n = int(inp)
    if (n%3 == 0):
        print("Second")
    else:
        print("First")