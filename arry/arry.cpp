
#include <iostream>
using namespace std;
int main()
{

	const int row =4, col =5;
	int v = 0;
	int x[row][col];

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			cin >> x[i][j];



		}
		cout << endl;
	}


	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{

			cout << x[i][j] << " ";

			v += x[i][j];

		}
		cout << endl;
	}
	cout << " the sum is " << v/(row*col) << endl;
	return 0;
}