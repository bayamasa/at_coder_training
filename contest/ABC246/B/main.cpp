#include <iostream>
#include <vector>
#include <math.h>
#include <iomanip>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	double rad = atan2(B, A);
	double x = cos(rad);
	double y = sin(rad);
	cout << setprecision(12) << x << " " << y << endl;
}
