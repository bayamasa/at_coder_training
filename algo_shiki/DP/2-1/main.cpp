#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int A0, A1, A2, A3;
	cin >> A0 >> A1 >> A2 >> A3;
	
	vector<vector<int>> data(4, vector<int>(4));
	data[0][0] = A0;
	data[0][1] = A1;
	data[0][2] = A2;
	data[0][3] = A3;
	for (int i = 1; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			
			if (j == 0)
				data[i][j] = data[i - 1][j] + data[i - 1][j + 1];
			else if (j == 3)
			{
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j];
			}
			else
				data[i][j] = data[i - 1][j - 1] + data[i - 1][j] + data[i - 1][j + 1];
		}
	}
	std::cout << data[3][3] << std::endl;
}
