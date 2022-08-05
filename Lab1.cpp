// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int numSuccess(int num)
{
	while (!num)
	{
		cout << "Error: Enter a number ";
		cin.clear();
		cin.ignore();
	}
	return num;
}

int main()
{
	short min = SHRT_MIN;
	short y = SHRT_MAX;
}
 int lab1()
{
	 cout << "Please enter your initials:\t";
	 char user[3];
	 cin >> user;

	 cout << "Please enter your age \t";

	 int age;
	 cin >> age;

	 int num = numSuccess(age);

	 int daysOld = (num * 365);

	 cout << user << " did you know you are:  " << daysOld << " days old?";

	 return 0;
}

 int lab2()
{
	 int arr[5]{};
	 int size = 5;

	 for (int i = 0; i < size; i++)
	 {
		 cout << "Pleae enter a number: ";
		 cin >> arr[i];
		 int num = numSuccess(arr[i]);
	 }
	 cout << "You entered: ";
	 for (int j = 0; j < size; j++)
	 {
		 cout << arr[j];
	 }
	 return 0;
}

 void lab4()
{
	 int a;
	 int b;
	 int c;

	 cout << "Please enter 3 numbers" << endl;

	 cout << "Enter a value for a: ";
	 cin >> a;

	 cout << "Enter a value for b: ";
	 cin >> b;

	 cout << "Enter a value for c: ";
	 cin >> c;

	 int equation1 = a + 1 * b + 2 - c;
	 int equation2 = (a + 1) * (b + 2) - c;

	 cout << equation1 << endl << equation2;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
