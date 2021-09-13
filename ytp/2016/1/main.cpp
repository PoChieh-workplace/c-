#include <iostream>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	int longth = ((-c)*(a*b))/(b-a);
	if (longth >= 0)
	{
		cout << longth;
	}
	else {
		cout << "None";
	}

}