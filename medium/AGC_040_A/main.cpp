#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	string S;
	cin >> S;
	long sum = 0;
	for (int i = 0; i < S.length(); i++)
	{
		if (S[i] == '<')
		{
			int j = 0;
			while (S[i] == '<')
			{
				sum += j;
				j++;
				i++;
			}
		}
		if (S[i] == '>')
		{
			int j = 0;
			while (S[i] == '>')
			{
				j++;
				sum += j;
				i++;
			}
		}
	}
	std::cout << sum << std::endl;
}
