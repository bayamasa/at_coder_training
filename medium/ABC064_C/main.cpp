#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	vector <int> a(N);
	for (int i = 0; i < N; ++i) {
		cin >> a[i];
	}
	bool has_gray = false;
	bool has_brown = false;
	bool has_green = false;
	bool has_skyblue = false; 
	bool has_blue = false;
	bool has_yellow = false;
	bool has_orange = false;
	bool has_red = false;
	int count_min = 0;
	int count_max = 0;
	int count_other_color = 0;
	for (int i = 0; i < N; ++i) {
		
		if (a[i] >= 1 && a[i] <= 399)
		{
			if (has_gray)
				continue;
			has_gray = true;
			count_min++;
			count_max++;
		} else if (a[i] >= 400 && a[i] <= 799)
		{
			if (has_brown)
				continue;
			has_brown = true;
			count_min++;
			count_max++;
		} else if (a[i] >= 800 && a[i] <= 1199)
		{
			if (has_green)
				continue;
			has_green = true;
			count_min++;
			count_max++;
		} else if (a[i] >= 1200 && a[i] <= 1599)
		{
			if (has_skyblue)
				continue;
			has_skyblue = true;
			count_min++;
			count_max++;
			
		} else if (a[i] >= 1600 && a[i] <= 1999)
		{
			if (has_blue)
				continue;
			has_blue = true;
			count_min++;
			count_max++;	
		} else if (a[i] >= 2000 && a[i] <= 2399)
		{
			if (has_yellow)
				continue;
			has_yellow = true;
			count_min++;
			count_max++;
		} else if (a[i] >= 2400 && a[i] <= 2799)
		{
			if (has_orange)
				continue;
			has_orange = true;
			count_min++;
			count_max++;
		} else if (a[i] >= 2800 && a[i] <= 3199)
		{
			if (has_red)
				continue;
			has_red = true;
			count_min++;
			count_max++;
		} else 
		{
			count_max++;
			count_other_color++;
		}
	}
	if (count_other_color) {
		if (has_gray || has_brown || has_green || has_skyblue || has_blue || has_orange || has_red)
		{
			//nothing
		}
		else
			count_min++;
	}
	std::cout << count_min << " " << count_max << std::endl;
}
