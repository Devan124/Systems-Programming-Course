// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

enum popcicle {
	Red = 1,
	Blue,
	Green,
	Yellow
};
enum dificulty {Easy = 1, Medium, Hard, Soulsborne};
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
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
}

int program1()
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

 int program2()
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

 void program3()
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
 void program4()
 {
	 short unsigned ushortmin = 0;
	 short unsigned ushortmax = USHRT_MAX;

	 short shortMin = SHRT_MIN;
	 short shortMax = SHRT_MAX;

	 int unsigned uintmin = 0;
	 int unsigned uintmax = UINT32_MAX;

	 int intmin = INT_MIN;
	 int intmax = INT_MAX;

	 long unsigned ulongmin = 0;
	 long unsigned ulongmax = ULLONG_MAX;

	 long longmin = LLONG_MIN;
	 long longmax = LLONG_MAX;

	 cout << "type             range\n";
	 cout << "------------------------------\n\n";

	 cout << "ushort\t\t" << setw(12) << left << ushortmin << " to " << ushortmax << endl;
	 cout << "short\t\t" << setw(12) << left << shortMin << " to " << shortMax << endl;

	 cout << "uint\t\t" << setw(12) << left << uintmin << " to " << uintmax << endl;
	 cout << "int\t\t" << setw(12) << left << intmin << " to " << intmax << endl;

	 cout << "ulonglong\t" << setw(12) << left << ulongmin << " to " << ulongmax << endl;
	 cout << "longlong\t" << setw(12) << left << longmin << " to " << longmax << endl;
}

 void program5()
 {
	 cout << "Please enter your full name:  ";
	 int usernameLength = 32;
	 char username[32];
	 cin.getline(username, usernameLength);

	 cout << "\n\nHey " << username << " did you know that it is illegal to ride a horse above 10 MPH in Indiana?\n" << endl;
	 cout << "The more you know right?";

 }
 void program6()
 {
	 int userage;
	 cout << "Please enter your age:  ";
	 cin >> userage;

	 if (userage < 16)
	 {
		 cout << "Sorry!  You reposted in the wrong neighborhood!";
		 exit(EXIT_SUCCESS);
	 }
	 else if (userage == 21)
	 {
		 cout << "Livin young, and wild, and free!";
	 }
	 else if (userage == 22)
	 {
		 cout << "I don't know about you, but I'm feelin 22!";
	 }
	 else if (userage < 70)
	 {
		 cout << "When your legs don't work like they used to before...";
	 }
	 else
	 {
		 cout << "Welp, I ran out of song ideas or your age just didn't interest me :/";
	 }
 }

 void program7()
 {
	 int evenNum;
	 cout << "Please enter an even number: ";
	 cin >> evenNum;

	 if (evenNum % 2 == 0)
	 {
		 cout << "Congratulations human, you understand basic arithmetic.";
	 }
	 else
	 {
		 cout << "You have doomed the humans, prepare to face the wrath of machines!";
	 }
 }

 void program8()
 {
	 int divisor;
	 srand((unsigned)time(0));

	 cout << "Please enter a divisior:  ";
	 cin >> divisor;
	 for (int i = 0; i < 4; i++)
	 {
		 int random = rand();

		 if (random % divisor == 0)
		 {
			 cout << random << "\t\tYou have succeeded young padawan" << endl;
		 }
		 else
		 {
			 cout << random << "\t\tYou have turned to the darkside" << endl;
		 }
	 }
 }
 void program9()
 {
	 cout << "What color ice pop do you want?";
	 int userInput = -1;

	 cout << "\n1) Red" << endl << "2)  Blue" << endl << "3) Green" << endl << "4) Yellow" << endl;
	 do
	 {
		 cin >> userInput;
		 switch (userInput)
		 {
		 case Red:
			 cout << "Cherry?  Stickin with the classics!";
			 break;
		 case Blue:
			 cout << "BLAST-phemous";
			 break;
		 case Green:
			 cout << "Lemon-Lime.  Kinda tastes like Sprite";
			 break;
		 case Yellow:
			 cout << "If you like pina colda...";
			 break;
		 default:
			 cout << "That ice pop flavor doesn't exist.  Try again.";
		 }
	 } while (userInput >= 5);
 }

 void program10()
 {
	 srand((unsigned)time(0));

	 cout << "Select your dificulty";
	 int level = -1;
	 int enemies;

	 cout << "\n1)  Easy" << endl << "2)  Medium" << endl << "3)  Hard" << endl << "4)  Soulsborne" << endl;

	 cin >> level;

	 switch (level)
	 {
	 case Easy:
		 enemies = rand() % 3 + 7;
		 cout << "You'll be facing " << enemies << " enemies";
		 break;
	 case Medium:
		 enemies = rand() % 5 + 10;
		 cout << "You'll be facing " << enemies << " enemies";
		 break;
	 case Hard:
		 enemies = rand() % 20 + 30;
		 cout << "You'll be facing " << enemies << " enemies";
		 break;
	 case Soulsborne:
		 enemies = rand() % 50 + 50;
		 cout << "You'll be facing " << enemies << " enemies";
		 break;
	 default:
		 break;
	 }
 }