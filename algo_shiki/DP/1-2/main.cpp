#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> A(N);
	for (int i = 0; i < N; ++i) {
		cin >> A[i];
	}
	vector <int> B(N);
	B[0] = 0;
	B[1] = A[1];
	for (int i = 2; i < N; i++)
	{
		B[i] = min(A[i] + B[i - 1], (A[i] * 2) + B[i - 2]);
	}
	std::cout << B[N - 1] << std::endl; 
}
