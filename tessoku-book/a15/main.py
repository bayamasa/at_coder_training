import bisect
N = int(input())
A_list = list(map(int, input().split()))

A_list_sorted = sorted(set(A_list))
result = []
for i in range(N):
    result.append(bisect.bisect_left(A_list_sorted, A_list[i]) + 1)

print(' '.join(map(str, result)))