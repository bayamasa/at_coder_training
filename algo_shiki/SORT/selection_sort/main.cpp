#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	
	vector<int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	
	int min;
	int tmp;
	for (int i = 0; i < N - 1; ++i) {
		min = i;
		for (int j = i + 1; j < N; ++j) {
			if (A[min] > A[j])
				min = j;
		}
		tmp = A[i];
		A[i] = A[min];
		A[min] = tmp;
		for (int k = 0; k < N; ++k) 
		{
			std::cout << A[k] << " ";
		}
		cout << endl;
	}
}
