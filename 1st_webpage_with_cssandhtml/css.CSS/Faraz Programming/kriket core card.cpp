#include <iostream>
using namespace std;
int main(){
string yourteam;
string oppoteam;
int yourteamplayer[11];
int oppoteamplayer[11];	
	cout << "Enter your team : ";
	cin >> yourteam;
	cout << "\nEnter opponent team : ";
	cin >> oppoteam;
	
	
	//0 to 5 kay player batsman;
	
	
	for (int i=0;i<=5;i++)
	{
		cout << endl<<endl << yourteam << " player"<<i<<":\n(";
		cin >> yourteamplayer[i];
		cout << ")BAT;";
	}
	
	// 6th player batsman or wicket keeper hai;
	
	for (int p=6;p==6;p++){
	cout << endl<<endl << yourteam << " player"<<":\n(";
	cin >> yourteamplayer[p];
	cout << ")BAT/WK;";
	}
	
	// 7 to 11 kay player bowler hai;
	
	
	for (int j=7;j<=10;j++)
	{
		cout << endl<<endl << yourteam << " player"<<j<<":\n(";
		cin >> yourteamplayer[j];
		cout << ")bowl;";
	}
	return 0;
}
