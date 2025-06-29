N, K = map(int, input().split())
A_list = [0] + list(map(int, input().split()))

prefix_sum = [0]
for i in range(1, N+1):
    prefix_sum.append(prefix_sum[i - 1] + A_list[i])
count = 0
for i in range(1, N+1):
    # if K >= prefix_sum[i]:
    # 1, 2, 3, 4, 5 34を取り出したいときはどうすればよい？
    # 1, 2, 3, 4の累積和から、1, 2を引く
    # これをやるには全探索が必要
    for j in range(i):
        if prefix_sum[i] - prefix_sum[j] <= K:
            count += 1
        # 1, 2, 3, 4からデクリメントしていけば早期breakができるが・・
        # そもそもO(N^2)なので破綻していそう
print(count)
            

