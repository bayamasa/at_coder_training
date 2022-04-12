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
	vector<vector<int> > dp(N+1, vector<int>(M+1, 100000));
	
	dp[0][0] = 0;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= M; ++j) {
			if (dp[i][j] == 100000)
				continue;
			dp[i+1][j] = min(dp[i+1][j], dp[i][j]);
			if (j + W[i] <= M)
			{
				dp[i+1][j+W[i]] = min(dp[i+1][j+W[i]], dp[i][j] + 1);
			}
		}
	}
	if (dp[N][M] == 100000)
		std::cout << -1 << std::endl;
	else
		std::cout << dp[N][M] << std::endl;
}
