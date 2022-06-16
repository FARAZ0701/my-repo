#include <iostream>
#include <string>
#include<cstdlib>
#include <time.h>
using namespace std;
int main() {
	
	string coin;
	int coin_value;
	int rand_fn_var = rand()%static_cast<int>(2);
	srand(time(NULL));
	cout << "\ntossing coin chose : head OR tail : ";
	cin >> coin;
	
	if (coin == "Head"){
		coin_value = 1;
	}
	else if (coin == "Tail"){
		coin_value = 0;
	}
	
	
	if(coin_value){
		cout << rand_fn_var;
		if(rand_fn_var){
			cout << "You have won the toss";
		}
//		else if(!rand()%static_cast<int>(2)){
//			cout << "You have lost the toss";
//		}
	}
	else if (!coin_value){
		cout <<"kk";
//		if(!rand()%static_cast<int>(2)){
//			cout << "You have won the toss";
//		}
//		else if (rand()%static_cast<int>(2)){
//			cout << "You have lost the toss";
//		}
		
	}
	return 0;
}
