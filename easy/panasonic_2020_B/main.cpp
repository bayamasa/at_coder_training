#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	long long H, W;
	cin >> H >> W;
	
	if (H == 1 or W == 1) {
		cout << 1 << endl;
		return 0;
	}
	
	long long ans;
	ans = (H * W)/ (long)2;
	if (((H * W) % 2) == 1)
		ans += 1;
	std::cout << ans << std::endl;
}
