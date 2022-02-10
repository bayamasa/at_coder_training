#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	char S[100000];
	cin >> n >> a >> b;
	for (int i = 0; i < n; i++)
	{
		cin >> S[i];
	}
	int x = 0; 
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		if (S[i] == 'a')
		{
			if (x < a + b - y)
			{
				std::cout << "Yes" << std::endl;
				x++;
			}
			else
				std::cout << "No" << std::endl;
		}
		if (S[i] == 'b')
		{
			if (y < a + b - x && y < b)
			{
				std::cout << "Yes" << std::endl;
				y++;
			}
			else
				std::cout << "No" << std::endl;
		}
		if (S[i] == 'c')
			std::cout << "No" << std::endl;
	}
	
}
