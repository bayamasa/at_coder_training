N, S = map(int, input().split())
A = list(map(int, input().split()))

dp = [[None] * (S+1) for i in range(N+1)]
dp[0][0] = True
for i in range(1, N+1):
    for j in range(0, S+1):
        dp[i][j] = dp[i-1][j]

        if j >= A[i-1] and dp[i-1][j-A[i-1]]:
            dp[i][j] = True

if not dp[N][S]:
    print(-1)
else:
    result_list = []
    i = N
    j = S
    # 今回は一経路だけ判定すればよい
    while i > 0 and j >= 0:
        # カードiを使った場合
        if dp[i][j] and not dp[i-1][j]:
            result_list.append(i)
            j -= A[i-1]
        elif dp[i][j] and dp[i-1][j]:
            if j >= A[i-1] and dp[i-1][j-A[i-1]]:
                result_list.append(i)
        i = i - 1

reversed(result_list)
print(len(result_list))
print(' '.join(result_list))


