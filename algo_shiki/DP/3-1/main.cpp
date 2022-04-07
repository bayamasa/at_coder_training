#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> A(N - 1);
	for (int i = 0; i < N - 1; ++i) {
		cin >> A[i];
	}
	vector<vector<int> > dp(N, vector<int>(M, 0));
	dp[0][0] = 1;
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			if (dp[i-1][j - A[i-1]] != 0 && j - A[i-1] >= 0)
				dp[i][j] = 1;
			if (dp[i-1][j] != 0)
			{
				dp[i][j] = 1;
			}
		}
	}
	long long total = 0;
	for (int i = 0; i < M; ++i) {
		total += dp[N-1][i];
	}
	std::cout << total << std::endl;
}
