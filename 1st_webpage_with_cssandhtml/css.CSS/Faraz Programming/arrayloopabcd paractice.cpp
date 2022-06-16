#include <iostream>
using namespace std;
int main() {
int j;
string Name[5]={"a","b","c","d","e"};
string zero[4]={"o","o","o","o"};
	for (int h=0;h<=(5-1);h++)
	{
	for (int b=0;b<=h;b++){
		cout << Name[b];
	}

	for (j=3;j>=h;j--){
		cout << zero[j];
	
		}	
	
		cout << "\n";
	}
	
	return 0;
}	
