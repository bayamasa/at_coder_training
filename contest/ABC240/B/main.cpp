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
	
	vector<int> B(N);
	for (int i = 0; i < N; ++i) B[i] = 0;
	
	bool flag = true;
	for (int i = 0; i < N; ++i) {
		flag = true;
		for (int j = 0; j < N; ++j) {
			
			if (B[j] == A[i])
			{
				flag = false;
			}
		}
		if (flag)
		{
			B[i] = A[i];
		}
	}
	int count = 0;
	for (int i = 0; i < N; ++i){
		if (B[i] != 0)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
}
