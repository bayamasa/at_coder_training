#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int count;
	string S;

	cin >> S;
	count = 0;
	vector <char> R(S.length());
	
	for (int i = 0; i < S.length(); ++i) {
		R[i] = S.at(i);
	}
	int num = 0;
	for (int i = 0; i < S.length(); ++i) {
			if (R[i] == 'W')
			{
				count += num;
			}
			else
				num++;
	}
	std::cout << count << std::endl;
}
