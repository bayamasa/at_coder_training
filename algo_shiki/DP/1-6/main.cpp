#include <iostream>
#include <vector>
using namespace std;

void recursive(int ans, int i, int M, vector<int> D, int N)
{
	ans += D[i];
	
	if (ans == N)
	{
		std::cout << "Yes" << std::endl;
		exit(0);
	}
	if (ans > N)
	{
		return ;
	}
	for (int j = i; j < M; j++)
	{
		recursive(ans, j, M, D, N);
	}
	
}

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> D(N);
	for (int i = 0; i < M; i++) cin >> D[i];
	
	int ans = 0;
	for (int i = 0; i < M; i++)
	{
		recursive(ans, i, M, D, N);
	}
	std::cout << "No" << std::endl;
}
