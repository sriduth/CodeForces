n = int(input())

if n == 1:
    print(-1)
else:
    points = []
    for _ in range(0, n):
        x, y = list(map(lambda l: int(l), input().split(' ')))
        points.append((x, y))

    x, y = points.pop(0)

    for x1, y1 in points:
        if x != x1 and y != y1:
            print(abs(x - x1) * abs(y - y1))
            exit()

    print(-1)