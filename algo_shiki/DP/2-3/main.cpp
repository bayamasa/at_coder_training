#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<vector<int> > data(N, vector<int>(3));
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> data[i][j];
		}
	}
	// Nを3回のループにわける
	int loop = N / 3;
	
	int mod = N % 3;
	int ind;
	int total = 0;
	for (int i = 0; i < loop; ++i) {
		// 6この総当りでmaxを出す
		ind = i * 3;
		int p1 = data[ind][0] + data[ind + 1][1] + data[ind + 2][2];
		int p2 = data[ind][0] + data[ind + 1][2] + data[ind + 2][1];
		int p3 = data[ind][1] + data[ind + 1][0] + data[ind + 2][2];
		int p4 = data[ind][1] + data[ind + 1][2] + data[ind + 2][0];
		int p5 = data[ind][2] + data[ind + 1][0] + data[ind + 2][1];
		int p6 = data[ind][2] + data[ind + 1][2] + data[ind + 2][0];
		int m = max(p1, p2);
		m = max(m, p3);
		m = max(m, p4);
		m = max(m, p5);
		m = max(m, p6);
		total += m;
	}
	if (mod == 1)
	{
		int p1 = data[loop * 3][0];
		int p2 = data[loop * 3][1];
		int p3 = data[loop * 3][2];
		int m = max(p1, p2);
		m = max(m, p3);
		total += m;
	}
	else if (mod == 2)
	{
		ind = loop * 3;
		int p1 = data[ind][0] + data[ind + 1][1];
		int p2 = data[ind][0] + data[ind + 1][2];
		int p3 = data[ind][1] + data[ind + 1][0];
		int p4 = data[ind][1] + data[ind + 1][2];
		int p5 = data[ind][2] + data[ind + 1][0];
		int p6 = data[ind][2] + data[ind + 1][1];
		int m = max(p1, p2);
		m = max(m, p3);
		m = max(m, p4);
		m = max(m, p5);
		m = max(m, p6);
		total += m;
	}
	std::cout << total << std::endl;
}
