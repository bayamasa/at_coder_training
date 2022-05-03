#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	string S;
	cin >> N >> S;
	int max = 0;
	vector<char> count;
	for (int i = 1; i < N; ++i) {
		count.clear();
		for (int j = 0; j < i; ++j) {
			for (int k = i; k < N; ++k) {
				if (S[j] == S[k])
				{
					// std::cout << "S[j]: " << S[j] << std::endl;
					// std::cout << "S[k]: " << S[k] << std::endl;
					// std::cout << "j: " << j << std::endl;
					// std::cout << "k: " << k << std::endl;
					bool flag = false;
					for (int a = 0; a < count.size(); ++a) {
						if (count[a] == S[j])
							flag = true;
					}
					if (flag)
						break;
					count.push_back(S[j]);
					break;
				}
			}
			if (count.size() > max)
				max = count.size();
		}
	}
	std::cout << max << std::endl;
}
