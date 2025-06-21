H, M = map(int, input().split())
square = [list(map(int, input().split())) for _ in range(H)]
Q = int(input())

prefix_sum_square = [0]
for vertical_values in square:
    # print("vertical_values", vertical_values)
    prefix_sum_list = [0]
    for index, value in enumerate(vertical_values, start=1):
        # print("prefix_sum_list[index - 1]", prefix_sum_list[index - 1], "value", value)
        prefix_sum_list.append(prefix_sum_list[index - 1] + value)
    prefix_sum_square.append(prefix_sum_list)


for _ in range(Q):
    A, B, C, D = map(int, input().split())
    sum_value = 0
    for i in range(B, D+1):
        # print("C", prefix_sum_square[i][C], "A-1", prefix_sum_square[i][A-1])
        sum_value += prefix_sum_square[i][C] - prefix_sum_square[i][A-1]
        print(i, sum_value)
    print(sum_value)
