#include <iostream>
using namespace std;
int main()
{
	int x ;
	cout << "enter x";
	cin >> x;
	for (int i = 1; i <=x; i++)
	{
		for (int j = 1; j <= x-i; j++)
		{
			cout << " ";
		}
		for (int j = 1; j<= x; j++)
		{
			if ( i == 1 || i == x || j== 1 || j==x)
				cout << "*";
			else
				cout << " ";

		}
		cout << endl;
	}

	system("pause");
	return 0;
}