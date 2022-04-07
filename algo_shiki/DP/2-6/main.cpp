#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int> > dp(N, vector<int>(N, 0));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			cin >> dp[i][j];
		}
	}
	vector<vector<int> > dp_1(N, vector<int>(N, 0));

	dp_1[0][N-1] = dp[0][N-1];
	for (int i = N-2; i >= 0; --i) {
		dp_1[0][i] = dp_1[0][i + 1] + dp[0][i];
	}
	for (int i = 1; i < N; ++i) {
		dp_1[i][N-1] += dp_1[i - 1][N-1] + dp[i][N-1];
	}
	
	for (int i = 1; i < N; ++i) {
		for (int j = N-2; j >= 0; --j) {
			dp_1[i][j] = min(dp_1[i - 1][j],dp_1[i][j + 1]) + dp[i][j];
		}
	}
	std::cout << dp_1[N-1][0] << std::endl;
}
