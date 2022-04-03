#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	
	if (x1 == x2)
	{
		if (y1 == y3)
		{
			cout << x3 << " " << y2 << endl;
			return 0;
		}
		if (y2 == y3)
		{
			cout << x3 << " " << y1 << endl;
			return 0;
		}
	}
	if (x1 == x3)
	{
		if (y1 == y2)
		{
			cout << x2 << " " << y3 << endl;
			return 0;
		}
		if (y2 == y3)
		{
			cout << x2 << " " << y1 << endl;
			return 0;
		}
	}
	if (x2 == x3)
	{
		if (y2 == y1)
		{
			cout << x1 << " " << y3 << endl;
			return 0;
		}
		if (y1 == y3)
		{
			cout << x1 << " " << y2 << endl;
			return 0;
		}
	}
}
