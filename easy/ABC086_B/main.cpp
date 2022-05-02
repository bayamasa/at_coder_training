#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	
	//桁数を計算
	int digit = 0;
	int tmp = b;
	while (tmp != 0)
	{
		tmp /= 10;
		digit++;
	}
	int a_digit = pow(10, digit);
	int ans = a * a_digit + b;
	for (int i = 1; i <= 320; i++)
	{
		if (pow(i, 2) == ans)
		{
			std::cout << "Yes" << std::endl;
			return 0;
		}
	}
	std::cout << "No" << std::endl;
	return 0;
	
}
