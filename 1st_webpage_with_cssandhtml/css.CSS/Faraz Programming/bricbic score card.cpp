#include <iostream>
#include <string>
#include<cstdlib>
#include <time.h>

using namespace std;
int main(){
// toss variables
int coin_value;





int wkts;
int wktso;
int totalscore;
int totalscoreo;

string bowlern;
string bowler;
string bowlerno;
string bowlero;
string pacer="pacer";
string spinner="spinner";
string pacero="pacer";
string spinnero="spinner";
string yourteam;
string oppoteam;
string yourteamplayer[11];
string oppoteamplayer[11];
string coin;
string head="head";
string tail="tail";	

	cout << "nter your team : ";
	cin >> yourteam;
	cout << "\nEnter opponent team : ";
	cin >> oppoteam;
	
		
	//0 to 5 kay player batsman;

	
	for (int i=0;i<=5;i++)
	{
		cout << endl <<endl << yourteam << " player : ";
		cin >> yourteamplayer[i];
		cout << "\n("<< yourteamplayer[i]<<")BAT\n";
	}
	
	// 6th player batsman or wicket keeper hai;
	
	for (int p=6;p<=6;p++)
	{
		cout << endl<<endl << yourteam << " player : ";
		cin >> yourteamplayer[p];
		cout << "\n("<< yourteamplayer[p]<<")BAT\\WK\n";
	}
	
	// 7 to 11 kay player bowler hai;
	
	
	for (int j=7;j<=10;j++)
	{
		cout << endl<<endl << yourteam << " player :";
		cin  >> yourteamplayer[j];
		cout << "\n("<< yourteamplayer[j]<<")BOWL\n";
	}
	
	//////\\\\\////\\\///\\\///\\\///\\\;
	
	
	
	for (int h=0;h<=5;h++)
	{
		cout << endl <<endl << oppoteam << " player : ";
		cin >> oppoteamplayer[h];
		cout << "\n("<< oppoteamplayer[h]<<")BAT";
	}
	
	// 6th player batsman or wicket keeper hai;
	
	for (int w=6;w<=6;w++)
	{
		cout << endl<<endl << oppoteam << " player : ";
		cin >> oppoteamplayer[w];
		cout << "\n("<< oppoteamplayer[w]<<")BAT\\WK";
	}
	
	// 7 to 11 kay player bowler hai;
	
	
	for (int r=7;r<=10;r++)
	{
		cout << endl<<endl << oppoteam << " player : ";
		cin  >> oppoteamplayer[r];
		cout << "\n("<< oppoteamplayer[r]<<")BOWL";
	}
	
	
	//coin toss random;
	
	cout << "\ntossing coin chose : head OR tail : ";
	cin >> coin;
	
	if (coin == "Head" || coin == "head"){
		coin_value = 1;
	}
	elseif (coin == "Tail" || coin == "tail" || coin == "Tails" || coin == "tails"){
		coin_value = 0;
	}
	
	
	if(coin_value == rand()%static_cast<int>(2) ){
		
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	if (coin==tail){
		srand(time(NULL));
		 
		if (1+rand()%static_cast<int>(2-1-1)<=1){
			cout << endl <<yourteam<<"WON! THE TOSS "<<yourteam<< " is batting\n";
			
			for(int z=0;z<2;z++){
				cout << "\nbowler name : ";
				cin >> bowlern;
				if (bowlern!=yourteamplayer[11]){
					break;
					cout << "\ninvalid player";
				}
				cout << "\nbowler : spinner OR pacer : ";
				cin >>  bowler;

			for(int f=1;f<=6;f++){
				cout << "\nEnter score of "<< z <<"."<< f << "bowl 'WARNING : BOWL '"<<z<<"."<<f<<" SCORE SHOULD BE SMALLER THAN "<<f*6<<endl; 
				cin >> totalscore;
				
				if (totalscore<=f*6){
				cout << "----------------------------------------------";	
				}
				else {
					break;
					cout << "\ninvalid score";
				}
				cout <<endl<< bowlern <<" pace :";
				
				cout << "Enter number of wickets";
				cin >> wkts;
				if (wkts>10){
					break;
					cout << "\nA11 0UT";
					
				}
				cout <<"\n\n\n5C0RE CARD\n\n\n";
				if (bowler==spinner){
				srand(time(NULL));
				cout << endl<<yourteam << "___"<<totalscore<<"/"<<wkts<<" | "<<yourteamplayer[1]<<"___"<<totalscore<<yourteamplayer[wkts]<<"___"<<0<<endl<<bowlern<<"	 "<<70 + rand()%static_cast<int>(105-70-70);
			}else if(bowler==pacer){
					srand(time(NULL));
					cout << endl<<yourteam << "___"<<totalscore<<"/"<<wkts<<" | "<<yourteamplayer[1]<<"___"<<totalscore<<yourteamplayer[wkts]<<"___"<<0<<endl<<bowlern<<"	 "<<130 + rand()%static_cast<int>(150-130-130);
				}
				
			}
			}
			
			
		   if (1+rand()%static_cast<int>(2-1-1)>=2){
			cout << oppoteam<<" WON! THE TOSS "<<oppoteam<<" is batting\n";
			
				for(int d=0;d<2;d++){
				cout << "\nbowler name : ";
				cin >> bowlerno;
				if (bowlerno!=oppoteamplayer[11]){
					break;
					cout << "\ninvalid player";
				}
				cout << "\nbowler : spinner OR pacer : ";
				cin >>  bowlero;

			for(int g=1;g<=6;g++){
				cout << "\nEnter score of "<< d <<"."<< g << "bowl 'WARNING : BOWL '"<<d<<"."<<g<<" SCORE SHOULD BE SMALLER THAN "<<d*6<<endl; 
				cin >> totalscoreo;
				
				if (totalscoreo<=g*6){
				cout << "----------------------------------------------";	
				}
				else {
					break;
					cout << "\ninvalid score";
				}

				cout << "\nEnter number of wickets";
				cin >> wktso;
				if (wktso>10){
					break;
					cout << "\nA11 0UT";
					
				}
				cout << "\n\n\n5C0RE CARD\n\n\n";
				if (bowlero==spinnero){
				    srand(time(NULL));
				cout << endl<<oppoteam << "___"<<totalscoreo<<"/"<<wktso<<" | "<<oppoteamplayer[1]<<"___"<<totalscoreo<<oppoteamplayer[wktso]<<"___"<<0<<endl<<bowlerno<<"	 "<<70 + rand()%static_cast<int>(105-70-70);
			}else if(bowlero==pacero){
			    srand(time(NULL));
					cout << endl<<oppoteam << "___"<<totalscoreo<<"/"<<wktso<<" | "<<oppoteamplayer[1]<<"___"<<totalscoreo<<oppoteamplayer[wktso]<<"___"<<0<<endl<<bowlerno<<"	 "<<130 + rand()%static_cast<int>(150-130-130);
}
}
}
}
}
		
} else if (coin=="Head" || coin == "head"){
		srand(time(NULL));
		 
		if (1+(rand()+0.000001)%static_cast<int>(2-1-1)<=1){
			cout << yourteam<<"WON! THE TOSS "<<yourteam<< " is batting\n";
			
				for(int x=0;x<2;x++){
				cout << "\nbowler name : ";
				cin >> bowlern;
				if (bowlern!=yourteamplayer[11]){
					break;
					cout << "\ninvalid player";
				}
				cout << "\nbowler : spinner OR pacer : ";
				cin >>  bowler;

			for(int l=1;l<=6;l++){
				cout << "\nEnter score of "<< x <<"."<< l << "bowl 'WARNING : BOWL '"<<x<<"."<<l<<" SCORE SHOULD BE SMALLER THAN "<<l*6<<endl; 
				cin >> totalscore;
				
				if (totalscore<=l*6){
				cout << "----------------------------------------------";	
				}
				else {
					break;
					cout << "\ninvalid score";
				}
				
				
				cout << "\nEnter number of wickets";
				cin >> wkts;
				if (wkts>10){
					break;
					cout << "\nA11 0UT";
				}
				cout << "\n\n\n5C0RE CARD\n\n\n";
				if (bowler==spinner){
				srand(time(NULL));
				cout << endl<<yourteam << "___"<<totalscore<<"/"<<wkts<<" | "<<yourteamplayer[1]<<"___"<<totalscore<<yourteamplayer[wkts]<<"___"<<0<<endl<<bowlern<<"	 "<<70 + rand()%static_cast<int>(105-70-70);
			}else if(bowler==pacer){
					srand(time(NULL));
					cout << endl<<yourteam << "___"<<totalscore<<"/"<<wkts<<" | "<<yourteamplayer[1]<<"___"<<totalscore<<yourteamplayer[wkts]<<"___"<<0<<endl<<bowlern<<"	 "<<130 + rand()%static_cast<int>(150-130-130);
				}
				
			}
			}
			
			
        }else if (1+rand()%static_cast<int>(2-1-1)>=2){
			cout << oppoteam<<" WON! THE TOSS "<<oppoteam<<" is batting\n";
				for(int y=0;y<2;y++){
				cout << "\nbowler name : ";
				cin >> bowlerno;
				if (bowlerno!=oppoteamplayer[11]){
					break;
					cout << "\ninvalid player";
				}
				cout << "\nbowler : spinner OR pacer : ";
				cin >>  bowlero;

			for(int e=1;e<=6;e++){
				cout << "\nEnter score of "<< y <<"."<< e << "bowl 'WARNING : BOWL '"<<y<<"."<<e<<" SCORE SHOULD BE SMALLER THAN "<<y*6<<endl; 
				cin >> totalscoreo;
				
				if (totalscoreo<=e*6){
				cout << "----------------------------------------------";	
				}
				else {
					break;
					cout << "\ninvalid score";
				}
				
				
				cout << "\nEnter number of wickets";
				cin >> wktso;
				if (wktso>10){
					break;
					cout << "\nA11 0UT";
					
				}
				cout << "\n\n\n5C0RE CARD\n\n\n";
				if (bowlero==spinnero){
				cout << endl<<oppoteam << "___"<<totalscoreo<<"/"<<wktso<<" | "<<oppoteamplayer[1]<<"___"<<totalscoreo<<oppoteamplayer[wktso]<<"___"<<0<<endl<<bowlerno<<"	 "<<70 + rand()%static_cast<int>(105-70-70);
}
				else if(bowlero==pacero){
					cout << endl<<oppoteam << "___"<<totalscoreo<<"/"<<wktso<<" | "<<oppoteamplayer[1]<<"___"<<totalscoreo<<oppoteamplayer[wktso]<<"___"<<0<<endl<<bowlerno<<"	 "<<130 + rand()%static_cast<int>(150-130-130);
}
}
}
}
}
	return 0;
}
