#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int> &array)
{
    int size;
    int mid;
    size = array.size();

    vector<int> L;
    vector<int> R;
    if (size == 1 || size == 0)
        return ;
	if (size == 2)
	{
		if (array.at(0) > array.at(1))
		{
			swap(array.at(0), array.at(1));
		}
		return ;
	}
	if (size == 3)
	{
		if (array.at(0) > array.at(1))
		{
			swap(array.at(0), array.at(1));	
		}
		if (array.at(0) > array.at(2))
		{
			swap(array.at(0), array.at(2));
		}
		if (array.at(1) > array.at(2))
		{
			swap(array.at(1), array.at(2));
		}
		return ;
	}
	mid = array[size / 2];
    for (int i = 0; i < size; i++)
    {
        if (array[i] < mid)
        {
            L.push_back(array[i]);
        }
        else
            R.push_back(array[i]);
    }
    sort(L);
    sort(R);
    for(int i = 0; i < L.size(); i++)
    {
        array[i] = L[i];
    }
    for (int j = L.size(); j < L.size() + R.size(); j++)
    {
        array[j] = R[j - L.size()];
    }
}


int main() {
    int N;
    cin >> N;
    vector <int> A(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    sort(A);
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << endl;
    }
	return 0;
}
