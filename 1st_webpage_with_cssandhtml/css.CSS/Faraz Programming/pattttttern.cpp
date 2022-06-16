#include <iostream>
using namespace std;
int main(){
int i,j;
	for (i=0;i<3;i++)
	{
	for (j=3;j>i;j--)
	{
		cout <<" ";
	}
	for (int k=1;k<=(2*i-1);k++)
	{
		cout << "*";
	}
		cout << "\n";
	}
	return 0;
}
