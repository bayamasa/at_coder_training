#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a - b == 1 || a - b == -1 || a - b == 9 || a - b == -9)
	{
		std::cout << "Yes" << std::endl;
		return 0;
	}
	std::cout << "No" << std::endl;
}
