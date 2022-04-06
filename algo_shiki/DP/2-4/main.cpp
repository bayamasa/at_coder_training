#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int> > data(N, vector<int>(N));
	
	for (int i = 0; i < N; ++i) {
		data[0][i] = 1;
	}
	for (int i = 0; i < N; ++i) {
		data[i][0] = 1;
	}
	
	for (int i = 1; i < N; ++i) {
		for (int j = 1; j < N; ++j) {
				data[i][j] = data[i - 1][j] + data[i][j - 1];
		}
	}
	std::cout << data[N-1][N-1] << std::endl;
	
}
