#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

int main ()
{

	int size, a, b;
	char before[100], after[100];
	cout << "Enter elements (characters only please):";
	cin >> before;
	size = strlen(before);
	

for (a=0, b=size; a<=size; a++, b--)
	{
		after[b]=before[a];
	}
 	cout << "\n";	
for (a=0 ; a<= size ; a++)
	{
		cout << after[a] << ' ';
	}
cout << "\nArray size: " << size;
    
	getch();
	return 0;	
}
