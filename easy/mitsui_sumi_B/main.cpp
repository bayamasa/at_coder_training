#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int a;
	for (int i = 0; i < 50000; i++)
	{
		a = i * 1.08;
		if (a == n)
		{
			std::cout << i << std::endl;
			return (0);
		}
	}
	std::cout << ":(" << std::endl;
	
}
