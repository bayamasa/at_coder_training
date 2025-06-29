N = int(input())
left = 0
right = N
while left <= right:
    middle = (right + left) / 2
    ans = middle + (middle ** 3)
    if N - 0.001 <= ans and ans <= N + 0.001:
        print(middle)
        exit()
    elif ans < N:
        right = middle - 1
    elif ans > N:
        left = middle + 1    
        