#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int arr[10];
	int x, sum, largest, smallest, max;
	float ave;

	cout << "Enter 10 integers: " << endl;
	
	for (x = 0; x < 10; x++)
		arr[x] = 0;
	for (x = 0; x < 10; x++)
		cin >> arr[x];
	for (x = 0; x < 10; x++)
		cout << arr[x] << " " << endl;
	sum = 0;
	for (x = 0; x < 10; x++)
		sum = sum + arr[x];
	cout << "The sum of the entered integers is:  " << sum << endl;
	ave = sum/10;
	cout << "The average of the entered integers is: " << ave << endl;

	
	max = 0;
	for (x = 0; x < 10; x++)
		if (arr[max]< arr[x])
			max = x;
	largest = arr[max];
	cout << "The largest integer from the entered set of integers is: " << largest << endl;
	max = 0;
	for (x = 0; x < 10; x++)
		if (arr[max] > arr[x])
			max = x;
	smallest = arr[max];
	cout << "The smallest integer from the entered set of integers is: " << smallest << endl;

	_getch();
	return 0;

}


