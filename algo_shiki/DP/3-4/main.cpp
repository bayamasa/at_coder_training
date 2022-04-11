#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> W(N);
	vector<int> V(N);
	for (int i = 0; i < N; ++i) {
		cin >> W[i];
	}
	for (int i = 0; i < N; ++i) {
		cin >> V[i];
	}
	
	vector<vector<int> > dp(N+1, vector<int>(M+1, 0));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= M; ++j) {
			// -1で初期化して、0を初期値とすればjの条件は不要になる
			if (dp[i][j] == 0 && j != 0)
				continue;
			dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
			if (j + W[i] <= M+1)
			{
				dp[i+1][j + W[i]] = max(dp[i+1][j + W[i]], dp[i][j] + V[i]);
			}
				
		}
	}
	int max_v;
	max_v = 0;
	for (int i = 0; i <= M; ++i) {
		max_v = max(max_v, dp[N][i]);
	}
	std::cout << max_v << std::endl;
}
