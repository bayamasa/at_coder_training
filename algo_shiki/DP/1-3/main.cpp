#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N + 1);
	A[0] = 1;
	A[1] = 1;
	for (int i = 2; i < N + 1; ++i) {
		A[i] = A[i - 2] + A[i - 1];
	}
	std::cout << A[N] << std::endl;
}
