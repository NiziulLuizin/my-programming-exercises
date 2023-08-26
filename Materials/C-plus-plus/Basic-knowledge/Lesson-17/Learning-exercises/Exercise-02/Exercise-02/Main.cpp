/*
	[ description of the second learning exercise ] :
		- Ask the user: "You want me to count from 1 to what number?". Use multiple
		for loops to generate the output below, with each line generated by a different loop.

		]
			You want me to count from 1 to what number? 10

			1 2 3 4 5 6 7 8 9 10
			10 9 8 7 6 5 4 3 2 1
			
			1 3 5 7 9
			9 7 5 3 1

			2 4 6 8 10
			10 8 6 4 2
		]

	[ output ] :
		```
			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>

			You want me to count from 1 to what number?
			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
			: 10

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			- '1 2 3 4 5 6 7 8 9 10 ';
			- '10 9 8 7 6 5 4 3 2 1 ';


			- '1 3 5 7 9 ';
			- '9 7 5 3 1 ';


			- '2 4 6 8 10 ';
			- '10 8 6 4 2 ';

			- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

			<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>
		```
*/

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	auto amount
		= new int;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	cout << endl;
	
	cout << "You want me to count from 1 to what number?" << endl;
	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	cout << ": ";
	cin >> *amount;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;
	
	cout << "- \'";
	for (auto i = 1; i <= *amount; ++i)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << "- \'";
	for (auto i = *amount; i > 0; --i)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << endl;
	cout << endl;
	
	cout << "- \'";
	for (auto i = 1; i <= *amount; i += 2)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << "- \'";
	for (auto i = *amount - 1; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << endl;
	cout << endl;

	cout << "- \'";
	for (auto i = 2; i <= *amount; i += 2)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << "- \'";
	for (auto i = *amount; i > 0; i -= 2)
	{
		cout << i << " ";
	}
	cout << "\';" << endl;

	cout << endl;

	cout << "- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -" << endl;
	
	cout << endl;

	cout << "<@> - - - - - - - - - - - - - - - - - - - - - - - - - - - - <@>" << endl;

	delete amount;

	system("pause");
}