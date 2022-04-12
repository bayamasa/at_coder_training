#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N, M, C;
	cin >> N >> M >> C;
	vector<int> B(M);
	for (int i = 0; i < M; ++i) {
		cin >> B[i];
	}
	vector<vector<int> > A(N, vector<int>(M));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < M; ++j) {
			cin >> A[i][j];
		}
	}
	int count = 0;
	int sum;
	for (int i = 0; i < N; ++i) {
		sum = 0;
		for (int j = 0; j < M; ++j) {
			sum += A[i][j] * B[j];
		}
		sum += C;
		if (sum > 0)
			count++;
	}
	std::cout << count << std::endl;
}
