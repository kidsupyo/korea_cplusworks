# include <iostream>
using namespace std;
# include <string>

int main()
{
	int customer, column, row;
	cin >> customer;
	cin >> column;

	if (customer % column != 0)
	{
		row = customer / column + 1;
	}
	else
	{
		row = customer / column;
	}
	cout << row << endl;




	return 0;
}