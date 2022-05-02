#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int H, W;
	cin >> H >> W;
	vector<string> S(H);
	for (int i = 0; i < H; ++i) {
		cin >> S[i];
	}
	
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (S[i][j] == '#')
				continue;
			int count = 0;
			for (int a = -1; a <= 1; ++a) {
				if (j + a < 0 || j + a == W)
					continue;
				if (i != 0) {
					if (S[i-1][j + a] == '#')
						count++;
				}
				if (S[i][j + a] == '#')
					count++;
				if (i != H - 1)
				{
					if (S[i + 1][j + a] == '#')
						count++;
				}
			}
			S[i][j] = (count + 48);
		}
	}
	for (int i = 0; i < H; ++i) {
		std::cout << S[i] << std::endl;
	}
}
