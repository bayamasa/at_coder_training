#include <iostream>
#include <vector>
#include <math.h>
#include <cmath>
#include <limits>
#include <algorithm>

using namespace std;
# define NMAX 1000000000000000000

int main()
{
	double N;
	cin >> N;

	int cbrt = (int)pow(N, 1.0 / 3.0);
	long long ans = N;
	// 半分にわって一個ずつためしてみるか
	int a, b;
	a = cbrt;
	b = 0;
	long long min = NMAX;
	while (true)
	{
		ans = (a + b) * (a * a + b * b);
		if (ans >= N && ans < min)
		{
			min = ans;
		}
		a--;
		b++;
		if (a == 0)
			break;
	}
	cout << min << endl;
}
