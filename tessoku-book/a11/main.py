import bisect
N, X = map(int, input().split())
A_list = list(map(int, input().split()))

midlle = N//2

while midlle > 0 and midlle < N:
    if A_list[midlle] < X:
        midlle = midlle + (N - midlle) // 2
    elif A_list[midlle] > X:
        midlle = midlle // 2
    else:
        print(midlle + 1)
        exit()
print(-1) 

