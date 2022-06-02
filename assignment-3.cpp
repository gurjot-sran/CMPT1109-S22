//program to make a diamond using functions

#include <iostream>

using namespace std;

void draw_diamond;
void draw_triangle_left(int rows, char x)
{
	for ( int i = 0; i < 4; i++ ) 
	{
		for (int j = 0; j <= i; j++)
		{
			cout << "x";
		}
		cout << endl;

	}

	void draw_triangle_right (int rows, char x);
	{
		for (int i = 0; i < rows; i++)
		{
			for (int j = 0; j < (rows - i - 1 ); j++)
			{
				cout << ' ';
			}
			for (int j = 0; j <= i; j++)
			{
				cout << x;
			}
			cout << endl;

		}
		{
			int i, j, r;
			void draw_diamond(int rows, char x);
			for (i = 0; i <= r; i++)
			{
				for (j = 1; j <= r - i; j++)
					cout << " ";
				for (j = 1; j <= 2 * i - 1; j++)
					cout << "*";
				cout << endl;
			}
			for (i = r - 1; i >= 1; i--)
			{
				for (j = 1; j <= r - i; j++)
					cout << " ";
				for (j = 1; j <= 2 * i - 1; j++)
					cout << "*";
				cout << endl;;
			}
		}
	} 

	int main();
	{

		draw_triangle_left(4, '*');
		draw_triangle_right(4, '*'); 
		draw_diamond(4, '*');
	}
	return 0;

}