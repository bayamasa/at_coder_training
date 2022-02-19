#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	
	int tmp;
	bool flag = true;
	// 無限ループ回避のため、N回で打ち切り
	// N回bubbleソートを行うと、右端の値が左端まで移動できるので、これが最大値
	for (int i=0; i<N; i++) {
		flag = false;
		for (int j = 0; j < N - 1; j++)
		{
			if (A[j] > A[j + 1])
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
				flag = true;
			}
		}
		if (flag)
		{
			for (int i = 0; i < N; ++i) 
			{
				std::cout << A[i] << " ";
			}
			cout << endl;
		}
		else
			break;
	}
	
}
