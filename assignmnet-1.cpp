#include <iostream>

using namespace std;

int main()
{
	int choice, arr[20], sum_even = 0, sum_odd = 0, sum, next_10th, check_digit;
	cout << "Check Digit Calculator\n";
	cout << "----------------------\n";
	cout << "EAN-8\n";
	cout << "UPC-A\n";
	cout << "EAN-13\n";
	cout << "EAN-14\n";
	cout << "SSCC\n";
	cout << "Choose your product code type : ";
	cin >> choice;
	switch (choice)
	{
	case 1: cout << "Enter first 7 digits of your product code\n";
		arr[7];
		for (int i = 0; i < 7; i++)
			cin >> arr[i];
		for (int i = 6; i >= 0; i--)
		{
			if (arr[i] == '.')
				cout << "Required digits not entered";
		}
		for (int i = 0; i < 7; i++)
		{
			if (i % 2 == 0)
			{
				sum_even = sum_even + arr[i];
			}
			else
			{
				sum_odd = sum_odd + arr[i];
			}
		}
		sum_odd = sum_odd * 3;
		sum = sum_odd + sum_even;
		for (int i = sum;; i++)
		{
			if (i % 10 == 0)
			{
				next_10th = i;
				break;
			}
		}
		check_digit = next_10th - sum;
		cout << "The product code is : ";
		for (int i = 0; i < 7; i++)
		{
			cout << arr[i];
		}
		cout << check_digit;
		break;

	case 2: cout << "Enter first 11 digits of your product code\n";
		arr[11];
		for (int i = 0; i < 11; i++)
			cin >> arr[i];
		for (int i = 10; i >= 0; i--)
		{
			if (arr[i] == '.')
				cout << "Required digits not entered";
		}
		for (int i = 0; i < 11; i++)
		{
			if (i % 2 == 0)
			{
				sum_even = sum_even + arr[i];
			}
			else
			{
				sum_odd = sum_odd + arr[i];
			}
		}
		sum_odd = sum_odd * 3;
		sum = sum_odd + sum_even;
		for (int i = sum;; i++)
		{
			if (i % 10 == 0)
			{
				next_10th = i;
				break;
			}
		}
		check_digit = next_10th - sum;
		cout << "The product code is : ";
		for (int i = 0; i < 11; i++)
		{
			cout << arr[i];
		}
		cout << check_digit;
		break;

	case 3: cout << "Enter first 12 digits of your product code\n";
		arr[12];
		for (int i = 0; i < 12; i++)
			cin >> arr[i];
		for (int i = 11; i >= 0; i--)
		{
			if (arr[i] == '.')
				cout << "Required digits not entered";
		}
		for (int i = 0; i < 12; i++)
		{
			if (i % 2 == 0)
			{
				sum_even = sum_even + arr[i];
			}
			else
			{
				sum_odd = sum_odd + arr[i];
			}
		}
		sum_odd = sum_odd * 3;
		sum = sum_odd + sum_even;
		for (int i = sum;; i++)
		{
			if (i % 10 == 0)
			{
				next_10th = i;
				break;
			}
		}
		check_digit = next_10th - sum;
		cout << "The product code is : ";
		for (int i = 0; i < 12; i++)
		{
			cout << arr[i];
		}
		cout << check_digit;
		break;

	case 4: cout << "Enter first 13 digits of your product code\n";
		arr[13];
		for (int i = 0; i < 13; i++)
			cin >> arr[i];
		for (int i = 12; i >= 0; i--)
		{
			if (arr[i] == '.')
				cout << "Required digits not entered";
		}
		for (int i = 0; i < 13; i++)
		{
			if (i % 2 == 0)
			{
				sum_even = sum_even + arr[i];
			}
			else
			{
				sum_odd = sum_odd + arr[i];
			}
		}
		sum_odd = sum_odd * 3;
		sum = sum_odd + sum_even;
		for (int i = sum;; i++)
		{
			if (i % 10 == 0)
			{
				next_10th = i;
				break;
			}
		}
		check_digit = next_10th - sum;
		cout << "The product code is : ";
		for (int i = 0; i < 13; i++)
		{
			cout << arr[i];
		}
		cout << check_digit;
		break;

	case 5: cout << "Enter first 17 digits of your product code\n";
		arr[17];
		for (int i = 0; i < 17; i++)
			cin >> arr[i];
		for (int i = 16; i >= 0; i--)
		{
			if (arr[i] == '.')
				cout << "Required digits not entered";
		}
		for (int i = 0; i < 17; i++)
		{
			if (i % 2 == 0)
			{
				sum_even = sum_even + arr[i];
			}
			else
			{
				sum_odd = sum_odd + arr[i];
			}
		}
		sum_odd = sum_odd * 3;
		sum = sum_odd + sum_even;
		for (int i = sum;; i++)
		{
			if (i % 10 == 0)
			{
				next_10th = i;
				break;
			}
		}
		check_digit = next_10th - sum;
		cout << "The product code is : ";
		for (int i = 0; i < 17; i++)
		{
			cout << arr[i];
		}
		cout << check_digit;
		break;

	default: cout << "Invalid menu choice\n";
		break;
	}

	return 0;
}