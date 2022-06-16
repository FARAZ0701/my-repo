#include <iostream>
using namespace std;
int main() {
int i,j,k;
int num[6]={1,2,3,4,5,6};
string num2[6]={"a","b","c","d","e","f"};
	for (i=0;i<=5;i++)
	{
	for (j=0;j<=i;j++)
	{
		cout << num2[j];
	}
	for (k=0;k<=i;k++)
	{
		cout << num[i];
	}
	cout << endl;
	}
	
	return 0;
}
