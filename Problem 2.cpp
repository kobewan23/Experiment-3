#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tempA[7], tempB[7], tempC[7];
	int day, x;

cout << "Enter temperature for Province A for a week: "<< endl;
	for (x = 0; x < 7; x++)
		cin >> tempA[x];
			
cout << "Enter temperature for Province B for a week: "<< endl;
	for (x = 0; x < 7; x++)
		cin >> tempB[x];

cout << "Enter temperature for Province C for a week: "<< endl;
	for (x = 0; x < 7; x++)
		cin >> tempC[x];
			
		for (x = 0; x< 7; x++)
			cout << "Province A, Day " << x+1 << ": " <<tempA[x] << endl;
		for (x = 0; x< 7; x++)
			cout << "Province B, Day " << x+1 << ": " <<tempB[x] << endl;
		for (x= 0;  x< 7; x++)
			cout << "Province C, Day " << x+1 << ": " <<tempC[x] << endl;

				
	_getch();
	return 0;

}


