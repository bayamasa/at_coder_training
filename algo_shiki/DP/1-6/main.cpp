#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M;
	cin >> N >>M;
	vector <int> A(M);
	for (int i = 0; i < M; ++i) cin >> A[i];
	vector <bool> B(N+1, false);
	B[0] = true;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
            if (B[i] == false)
                break;
			if (i + A[j] <= N)
			{
				B[i + A[j]] = true;
			}
		}
	}
	if (B[N]) 
		std::cout << "Yes" << std::endl;
	else
		std::cout << "No" << std::endl;
}
