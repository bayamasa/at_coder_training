#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N-1);
	vector<int> B(N-1);
	
	for (int i = 0; i < N-1; ++i) {
		cin >> A[i];
	}
	for (int i = 0; i < N-1; ++i) {
		cin >> B[i];
	}
	vector<vector<int> > dp(N, vector<int>(M, 0));
	dp[1][A[0]] = B[0];
	for (int i = 0; i < N-1; ++i) {
		for (int j = 0; j < M; ++j) {
			if (dp[i][j] == 0 && j != 0) 
				continue;
			// 真下に動かす場合はポイント加算がない
			dp[i+1][j] = max(dp[i][j], dp[i+1][j]);
			if (j + A[i] <= M -1)
			{
				dp[i+1][j + A[i]] = max(dp[i][j] + B[i], dp[i+1][j + A[i]]);
			}
		}
	}
	if (dp[N-1][M-1] == 0)
		std::cout << -1 << std::endl;
	else
		std::cout << dp[N-1][M-1] << std::endl;
}
