#include <iostream>
using namespace std;

int main()
{
	int n, a[100000], value;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	value = a[0];
	int c = 1;
	int new_index;
	while (true)
	{
		if (value == 2)
		{
			cout << c << endl;
			return 0;
		}
		value = a[value - 1];
		c++;
		if (c > 1000000)
		{
			cout << -1 << endl;
			return 0;
		}
	}
	return 0;
}
