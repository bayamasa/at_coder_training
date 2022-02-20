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
	int count = 0;
	bool flag = true;
	for (int i = 0; i < N; ++i) {
		flag = true;
		// その値から前の領域に同じ数値があるか判定すれば、被りなしで判定できる
		for (int j = 0; j < i; ++j) {
			
			if (B[j] == A[i])
			{
				flag = false;
			}
		}
		if (flag)
		{
			count++;
		}
	}
	std::cout << count << std::endl;
}
