#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	
	int tmp;
	for (int k = 1; k < N; ++k) {
		int pos = k;
		while (pos != 0 && A[pos - 1] > A[pos])
		{
			tmp = A[pos - 1];
			A[pos - 1] = A[pos];
			A[pos] = tmp;
			pos--;
		}
		for (int k = 0; k < N; ++k) 
		{
			std::cout << A[k] << " ";
		}
		cout << endl;
	}
}
