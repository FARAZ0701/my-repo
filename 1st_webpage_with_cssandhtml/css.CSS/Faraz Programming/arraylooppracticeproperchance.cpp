#include <iostream>
using namespace std;
int main() {
	int g;
string name[5]={"a","b","c","d","e"};
string zero[4]={"o","o","o","o"};
	
		
	for (int h=0;h<=4;h++)
	{
	for (int g=0;g<=h;g++){
			cout << name[g];
	}
	
	for (int y=3;y>=h;y--){
		cout << zero[y];
	}	
	cout << endl;
	}
	return 0;
	}
