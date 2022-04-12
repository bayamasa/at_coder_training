#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, A, B;
	cin >> N >> A >> B;
	vector<long> X(N);
	for (int i = 0; i < N; ++i) {
		cin >> X[i];
	}
	vector<vector <bool> > dp(N+1, vector<bool>(A, false));
	dp[0][0] = true;
	for (int i = 0; i < N; ++i) {
		for (long  j = 0; j < A; ++j) {
			if (dp[i][j] == false)
				continue;
			dp[i+1][j] = true;
			dp[i+1][(j + X[i])%A] = true;
		}
	}
	if (dp[N][B])
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}
