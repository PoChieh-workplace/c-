// 2020-1-2.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include<iostream>
using namespace std;

int a[999999];

bool function2(int i, int j, int k) {
	int text = (i + j + k) % 2;
	if (text == 0)
	{
		return true;
	}
	else {
		return false;
	}
}
bool functionTop(int i, int j, int k) {
	if (j > i and j > k) {
		return true;
	}
	else {
		return false;
	}
}
int main()
{
	int count = 0;
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	for (int u = 0; u < n - 2; u++) {
		for (int o = u + 1; o < n - 1; o++)
		{
			for (int p = o + 1; p < n; p++)
			{
				if (function2(a[u], a[o], a[p]) and functionTop(a[u], a[o], a[p]))
				{
					count += 1;
				}
			}
		}
	}
	cout << count << endl;
	return 0;
}