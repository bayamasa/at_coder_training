#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int> > A(N, vector<int>(3));
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> A[i][j];
		}
	}
	
	vector<vector<int> > data(N, vector<int>(3));
	data[0][0] = A[0][0];
	data[0][1] = A[0][1];
	data[0][2] = A[0][2];
	for (int i = 1; i < N; ++i) {
		data[i][0] = max(data[i - 1][1], data[i - 1][2]) + A[i][0];
		data[i][1] = max(data[i - 1][0], data[i - 1][2]) + A[i][1];
		data[i][2] = max(data[i - 1][0], data[i - 1][1]) + A[i][2];
	}
	
	std::cout << max(data[N-1][0], max(data[N-1][1], data[N-1][2])) << std::endl;
}
