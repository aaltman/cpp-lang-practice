#include <iostream>

using namespace std;

void offbyone()
{
	int i;
	
	cout << "For loop using postfix operator from 0 to 5: " << endl;
	for (i = 0; i < 5; i++) {
		cout << i << endl;
	}
	
	cout << "For loop using prefix operator from 0 to 5: " << endl;
	for (i = 0; i < 5; ++i) {
		cout << i << endl;
	}
	
	int arr[5] = { 0, 1, 2, 3, 4, 5 };

	i = 0;
	cout << "arr[i++] with i = 0: " << arr[i++] << endl;
	cout << "resulting i: " << i << endl;
	
	i = 0;
	cout << "arr[++i] with i = 0: " << arr[++i] << endl;
	cout << "resulting i: " << i << endl;
	
	cout << "Testing exceptional access of i++ with i = 5 on array of length 5: " << endl;
	i = 5;
	cout << arr[i++];
	
	
	cout << "Testing exceptional access of ++i with i = 5 on array of length 5: " << endl;
	i = 5;
	cout << arr[++i];
}