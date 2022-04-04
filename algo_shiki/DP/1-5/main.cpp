#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	vector <int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	vector <int> B(N);
	B[0] = 0;
	B[1] = A[1];
	for (int i = 2; i < N; i++)
	{
		int cmin = INT32_MAX;
		for (int j = 1; j <= i; ++j) {
			if (j > M)
				break;
            cmin = min(cmin, (A[i] * j) + B[i - j]);
		}
        B[i] = cmin;
	}
	std::cout << B[N - 1] << std::endl;
}
