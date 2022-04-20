#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	string s;
	cin >> s;
	
	s.pop_back();

	for (int i = s.length(); i > 1; i--)
	{

		if (s.length() % 2 == 0)
		{
			string s2 = s.substr(s.length() / 2);
			string s1 = s.substr(0, s.length() / 2);
			if (s1 == s2)
			{
				std::cout << s.length() << std::endl;
				return (0);
			}
		}
		
		s.pop_back();
		}
}
