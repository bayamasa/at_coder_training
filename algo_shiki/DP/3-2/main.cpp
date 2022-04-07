#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> W(N);
	for (int i = 0; i < N; ++i) {
		cin >> W[i];
	}
	vector<vector<bool> > dp(N + 1, vector<bool>(M + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= M; ++j) {
			if (dp[i][j] == false)
				continue;
			// 足し算形式でやっていく
			dp[i+1][j] = true;
			if (j + W[i] <= M)
				dp[i+1][j + W[i]] = true;
		}
	}
	if (dp[N][M])
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}
