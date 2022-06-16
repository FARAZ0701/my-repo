#include <iostream>
using namespace std;
int main() {
int i,j,p;
string name[5]={"a","b","c","d","e"};
string zero[4]={"o","o","o","o"};
	
	for (i=0;i<=4;i++)
	{
	for (j=0;j<=i;j++)
	{
		cout << name[j];
	}	
	for (p=3;p>=i;p--){
		cout << zero[p];
	}
	cout << "\n";
	}	

	return 0;
}
