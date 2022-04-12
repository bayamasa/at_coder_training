#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> A(N);
	for (int i = 0; i < N; ++i) cin >> A[i];
	int max_w = 0;
	for (int i = 0; i < N; ++i) {
		max_w += A[i];
	}
	vector <vector<bool> > box_1(N+1, vector<bool>(max_w, false));
	box_1[0][0] = true;
	
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j < N; ++j) {
			// i = 1のとき	
			box_1[i+1][A[j]] = true;
			// i = 2
			if(box_1[i+1][j])
			{
				
			}
		}
	}
	const int INF = INT32_MAX;
	int min_diff = INF;
	for (int i = 0; i <= N; ++i) {
			if (box_1[N][i])
			{
				if (box_1[N][N - i])
			}
	}

}
