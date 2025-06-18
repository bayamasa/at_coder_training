T = int(input())
N = int(input())
employee_shift_list = []
for i in range(N):
    l, r = map(int, input().split())
    employee_shift_list.append([l, r])

time_shift = {}
for l, r in employee_shift_list:
    time_shift[l] = time_shift.get(l, 0) + 1
    time_shift[r] = time_shift.get(r, 0) - 1

prefix_sum = {}
prefix_sum[0] = time_shift[0]
print(prefix_sum[0])
for i in range(1, T):
    prefix_sum[i] = prefix_sum[i-1] + time_shift.get(i, 0)
    print(prefix_sum[i])

