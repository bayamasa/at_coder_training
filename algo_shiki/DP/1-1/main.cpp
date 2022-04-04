#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, X, Y;
	cin >> N >> X >> Y;
	vector<int> A(N);
	A[0] = X;
	A[1] = Y;
	for (int i = 2; i < N; ++i) {
		A[i] = (A[i - 2] + A[i - 1]) % 100;
	}
	std::cout << A[N - 1] << std::endl;
}
