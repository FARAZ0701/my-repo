#include <iostream>
using namespace std;
int main() {
int i,j,k;
	for (i=0;i<=6;i++)
	{
	for (int j=6;j>=i;j--)
	{
		cout << " ";
	}
	for (k=1;k<=(2*i-1);k++)
	{
		cout << k;
	}
	cout << "\n";
	}	
	
	
	
	
	
	return 0;
}
