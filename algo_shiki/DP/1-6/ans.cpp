#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, M;
	vector<int> D(M);
	for (int i = 0; i < M; ++i) cin >> D[i];
	
	vector<bool> dp(N+1, false);
	
	dp[0] = true;
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < M; i++)
		{
			if (i - D[j] >= 0 && D[i - D[j]])
				dp[i] = true;
		}
	}
	cout << (dp[N] ? "Yes": "No");
}
