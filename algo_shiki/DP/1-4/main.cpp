#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N+1);
	A[0] = 0;
	A[1] = 1;
	A[2] = 2;
	A[3] = 4;
	for (int i = 4; i < N+1; i++)
	{
		A[i] = A[i - 1] + A[i - 2] + A[i - 3];
	}
	std::cout << A[N] << std::endl;
}
