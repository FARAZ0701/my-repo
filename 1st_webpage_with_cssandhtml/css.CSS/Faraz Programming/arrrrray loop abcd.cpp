#include <iostream>
using namespace std;
int main() {
	int j;
string Name[5]={"a","b","c","d","e"};
string zero[4]={"o","o","o","o"};
	for (int i=0;i<=(5-1);i++)
	{
	for (int j=0;j<=i;j++)
	{
		cout << Name[j];
	}
	cout << "\n";
	}
//	for (int h=0;h<=(4-1);h++)
//	{
//	for (int b=(4-1);b>=h;b++){
//		cout << zero[b];
//	}
//		cout << "\n";
//	}

	
	return 0;
}
