N = int(input())
A_list = list(map(int, input().split()))
Q = int(input())
A_list.sort()

for _ in range(Q):
    x = int(input())
    
    # 二分探索でxより小さい要素の個数を求める
    left = 0
    right = N
    
    while left < right:
        middle = (left + right) // 2
        if A_list[middle] < x:
            left = middle + 1
        else:
            right = middle
    
    print(left)