N = int(input())
a_list = list(map(int, input().split()))
b_list = list(map(int, input().split()))

dp = {}

a_list.insert(0, 0)
b_list.insert(0, 0)
b_list.insert(0, 0)

dp[0] = 0
dp[1] = a_list[1]
if a_list[1] + a_list[2] > b_list[2]:
    dp[2] = b_list[0]
else:
    dp[2] = a_list[0] + a_list[1]


for i in range(3, N):
    # print("i", i)
    previous = dp.get(i - 1)
    before_previous = dp.get(i - 2, 0)
    # print("previous", previous, "before_previous", before_previous)
    if previous + a_list[i] > before_previous + b_list[i]:
        dp[i] = before_previous + b_list[i]
    else:
        dp[i] = previous + a_list[i]
    # print("i", i, "dp[i]", dp[i])

print(dp[N-1])