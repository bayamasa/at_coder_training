#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;

	// modの最大値
	// 数列が並んでいるということが大事
	long sum = 0;
	for (int i = 1; i < N; ++i) {
		sum += i;
	}
	std::cout << sum << std::endl;
}
