// codetry.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>
#include <string>
using namespace std;

class Clothes {
	string color;
	char size;
};

int main()
{
Start:
	int a, b;
	cin >> a >> b;
	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\t";
		}
		cout << "\n";
	}
	cout << endl;
	cout << "\n" << "retry?(y/n)";
	string c;
	cin >> c;
	if (c=="y")
	{
		goto Start;
	}
}
