#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int N, X;
	cin >> N >> X;
    vector<vector<int> > A(2, vector<int>(N+1, 0));

    for (int i = 0; i < N; ++i) cin >> A[0][i] >> A[1][i];
	
	vector<bool> T(X + 1, false);
	int a = 0;
	int b = 1;
	T[0] = true;
	int next_a;
	for (int i = 0; i < N; ++i) {
		if (i == 0)
		{
			T[A[a][i]] = true;
			T[A[b][i]] = true;
		}
		else
		{
			T[A[a][i-1]]
		}
	}
	
	cout << (T[X] ? "Yes": "No") << endl;
}
