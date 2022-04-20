#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

void	yes(bool flag)
{
	if (flag)
	{
		std::cout << "Yes" << std::endl;
		exit(0);
	}
}

int main()
{
	vector<vector <int> > bingo(3, vector <int> (3));
	for (int i = 0; i < 3; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> bingo[i][j];
		}
	}
	vector<vector <bool> > is_got(3, vector<bool>(3, false));
	int N;
	cin >> N;
	vector <int> b(N);
	for (int i = 0; i < N; ++i) {
		cin >> b[i];
	}
	for (int a = 0; a < N; ++a) {
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				if (bingo[i][j] == b[a])
				{
					is_got[i][j] = true;
				}
			}
		}
	}
	if (is_got[0][0] == true && is_got[0][1] == true && is_got[0][2] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[1][0] == true && is_got[1][1] == true && is_got[1][2] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[2][0] == true && is_got[2][1] == true && is_got[2][2] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[0][0] == true && is_got[1][0] == true && is_got[2][0] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[0][1] == true && is_got[1][1] == true && is_got[2][1] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[0][2] == true && is_got[1][2] == true && is_got[2][2] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[0][0] == true && is_got[1][1] == true && is_got[2][2] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	if (is_got[0][2] == true && is_got[1][1] == true && is_got[2][0] == true)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	std::cout << "No" << std::endl;	
}
