#include <iostream>
using namespace std;
int main() {
string name[5]={"a","b","c","d","e"};
string zero[4]={"o","o","o","o"};
	
	
	for (int h=4;h>=0;h--)
	{
	for (int g=4-h;g>0;g--)
		cout << name[g];
	for (int y=h;y>0;y--){
		cout << zero[1];
	}	
	cout << endl;
	}
	return 0;
	}
