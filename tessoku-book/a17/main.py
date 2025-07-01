N = int(input())
a_list = [0, 0] + list(map(int, input().split()))
b_list = [0, 0, 0] + list(map(int, input().split()))

# リストに前の部屋番号(最短で来れる部屋の番号)を入れる
dp = {}
dp[1] = 0
dp[2] = a_list[2]
for i in range(3, N+1):
    dp[i] = min(dp[i-1] + a_list[i], dp[i-2] + b_list[i])

place = N
place_list = []
while True:
    place_list.append(place)
    if place == 1:
        break
    if dp[place-1] + a_list[place] == dp[place]:
        place -= 1
    else:
        place -= 2

place_list.reverse()
print(len(place_list))
print(' '.join(map(str, place_list)))

    
