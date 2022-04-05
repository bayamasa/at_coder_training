#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int>> data(N, vector<int>(N));
	for (int i = 0; i < N; ++i) {
		cin >> data[0][i];
	}
	for (int i = 1; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			
			if (j == 0)
				data[i][j] = (data[i - 1][j] + data[i - 1][j + 1]) % 100;
			else if (j == N - 1)
			{
				data[i][j] = (data[i - 1][j - 1] + data[i - 1][j]) % 100;
			}
			else
				data[i][j] = (data[i - 1][j - 1] + data[i - 1][j] + data[i - 1][j + 1]) % 100;
		}
	}
	std::cout << data[N - 1][N - 1] << std::endl;
}
