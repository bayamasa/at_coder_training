#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	double i, A, B, C;
	cin >> A >> B >> C;
	
	i = 0;
	while (i < 10000000.0)
	{
		if (fmod((B * i + C), A) == 0.0)
		{
			std::cout << "YES" << std::endl;
			// std::cout << i << std::endl;
			return 0;
		}
		i++;
	}
	std::cout << "NO" << std::endl;
}
