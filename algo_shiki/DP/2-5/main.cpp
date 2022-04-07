#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<string> data(N);
	for (int i = 0; i < N; ++i) {
		cin >> data[i];
	}
	vector<vector<int> > dp(N, vector<int>(N, 0));
	if (data[0][0] == '.')
		dp[0][0] = 1;
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			if (data[i][j] != '.')
				continue;
			if (i - 1 >= 0)
			{
				dp[i][j] += dp[i - 1][j];
			}
			if (j - 1 >= 0)
			{
				dp[i][j] += dp[i][j - 1];
			}
		}
	}
	std::cout << dp[N-1][N-1] << std::endl;
}
