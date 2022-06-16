#include <iostream>
using namespace std;
int main() 
{
	int num2, num1, i, j;
	cout <<"enter a first number: \n";
	cin >> num1 ;
	cout <<"enter a second number : \n";
	cin >> num2;
	if (num1<=num2) {
		for (i=num1;i<=num2;i++) {
		
			cout << i;
			cout << endl;
		}
	}
	else {
		cout << "invalid number nn";
	}
	
return 0;
}
