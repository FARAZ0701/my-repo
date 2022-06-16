#include <iostream>
using namespace std;
int main() {
string team1,team2;
double overs;
//int tover=30;
double pace;
int splayer1,splayer2,splayer3,splayer4,splayer5,splayer6,splayer7,splayer8,splayer9,splayer10,splayer11;
string player1,player2,player3,player4,player5,player6,player7,player8,player9,player10,player11;

string tplayer1,tplayer2,tplayer3,tplayer4,tplayer5,tplayer6,tplayer7,tplayer8,tplayer9,tplayer10,tplayer11;
int stplayer1,stplayer2,stplayer3,stplayer4,stplayer5,stplayer6,stplayer7,stplayer8,stplayer9,stplayer10,stplayer11;
int wkts2;
double pace2,overs2;
string bowler2;
//tscore=splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;
int wkts;
string bowler;
	cout << "first team: ";
	cin >> team1;
	cout << "second team: ";
	cin >> team2;
	cout << team1<<" players list:\n\t";
	cout << team1<<" player 1  ";
	cin >> player1;
	cout << team1<<" player 2  ";
	cin >> player2;
	cout << team1<<" player 3  ";
	cin >> player3;
	cout << team1<<" player 4  ";
	cin >> player4;
	cout << team1<<" player 5  ";
	cin >> player5;
	cout << team1<<" player 6  ";
	cin >> player6;
	cout << team1<<" player 7  ";
	cin >> player7;
	cout << team1<<" player 8  ";
	cin >> player8;
	cout << team1<<" player 9  ";
	cin >> player9;
	cout << team1<<" player 10  ";
	cin >> player10;
	cout << team1<<" player 11  ";
	cin >> player11;
	//
	
	cout << team2<<"player list: \n\t";
	cout << team2<<" player 1	";
	cin >> tplayer1;
	cout << team2<<" player 2	";
	cin >> tplayer2;
	cout << team2<<" player 3	";
	cin >> 	tplayer3;
	cout << team2<<" player 4	";
	cin >> tplayer4;
	cout << team2<<" player 5	";
	cin >> tplayer5;
	cout << team2<<" player 6	";
	cin >> tplayer6;
	cout << team2<<" player 7	";
	cin >> tplayer7;
	cout << team2<<" player 8	";
	cin >> tplayer8;
	cout << team2<<" player 9	";
	cin >> tplayer9;
	cout << team2<<" player 10	";
	cin >> tplayer10;
	cout << team2<<" player 11	";
	cin >> tplayer11;
	
	for (int i=0;i<=2;i++){
		
	
	cout << "\nbowler: ";
	cin >> bowler;
	cout<< "\n";
	
	
	
	for (int j=0;j<=12;j++){
	
	cout << bowler <<"\nbowlers pace";
	cin >> pace;
	cout << "\n Enter over"<< 2 << "/";
	cin >> overs;
	cout << "\nwicket : ";
	cin >> wkts;
	if (wkts==10){
		i=3;
	}
	else if (wkts==0) {
	cout << player1<<" : ";
	cin >> splayer1;
	cout << player2<< " : ";
	cin >>	splayer2;
	
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2<<"	(" <<2 << "/" << overs <<")" << player1<<" : " << splayer1 << player2 << " : " << splayer2 << endl << bowler << "     "<<pace<<"      "<< team1<< "  vs  " << team2;
	}
	else if (wkts==1) {
	cout << "\n\n"<<player3<<" : ";
	cin >> splayer3;
	cout << player2<< " : ";
	cin >>	splayer2;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3<<"("<< 2 << "/" << overs <<")" << player3<<" : " << splayer3 << player2 << " : " << splayer2 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==2) {
	cout <<"\n\n"<< player3<<" : ";
	cin >> splayer3;
	cout << player4<< " : ";
	cin >>	splayer4;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4<<"("<< 2 << "/" << overs <<")" << player3<<" : " << splayer3 << player4 << " : " << splayer4 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==3) {
	cout <<"\n\n"<< player5<<" : ";
	cin >> splayer5;
	cout << player4<< " : ";
	cin >>	splayer4;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5<<"(" <<2 << "/" << overs <<")" << player5<<" : " << splayer5 << player4 << " : " << splayer4 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==4) {
	cout <<"\n\n"<< player5<<" : ";
	cin >> splayer5;
	cout << player6<< " : ";
	cin >>	splayer6;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6<<"("<< 2 << "/" << overs <<")" << player5<<" : " << splayer5 << player6 << " : " << splayer6 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==5) {
	cout << "\n\n"<<player7<<" : ";
	cin >> splayer7;
	cout << player6<< " : ";
	cin >>	splayer6;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7<<"("<< 2 << "/" << overs <<")" << player7<<" : " << splayer7 << player6 << " : " << splayer6 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==6) {
	cout << "\n\n"<<player7<<" : ";
	cin >> splayer7;
	cout << player8<< " : ";
	cin >>	splayer8;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8<<"(" <<2 << "/" << overs <<")" << player7<<" : " << splayer7 << player8 << " : " << splayer8 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==7) {
	cout <<"\n\n"<< player9<<" : ";
	cin >> splayer9;
	cout << player8<< " : ";
	cin >>	splayer8;
	
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9<<"(" <<2 << "/" << overs <<")" << player9<<" : " << splayer9 << player8 << " : " << splayer8 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==8) {
	cout <<"\n\n"<< player9<<" : ";
	cin >> splayer9;
	cout << player10<< " : ";
	cin >>	splayer10;
		cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10<<"(" <<2 << "/" << overs <<")" << player9<<" : " << splayer9 << player10 << " : " << splayer10 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;

	}
	else if (wkts==9) {
	cout << "\n\n"<<player11<<" : ";
	cin >> splayer11;
	cout << player10<< " : ";
	cin >>	splayer10;
	cout << "\n\n"<<team1<<"  "<<splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11<<"(" <<2 << "/" << overs <<")" << player11<<" : " << splayer11 << player10 << " : " << splayer10 << endl << bowler << "     "<<pace<<"                "<< team1<< "vs" << team2;
	}
//	else if (wk)
	}	
	}
	
	
	
//	SECOND TEAM;	
//	SECOND TEAM;	
//	SECOND TEAM;	
	
	for (int N=0;N<2;N++){
		
	
	cout << "\nbowler: ";
	cin >> bowler2;
	cout<< "\n";
	for (int B=0;B<=6;B++){
	
	cout << bowler2 <<"\nbowlers pace";
	cin >> pace2;
	cout << "\n Enter over"<< 2 << "/";
	cin >> overs2;
	cout << "\nwicket : ";
	cin >> wkts2;
	if (wkts2==0) {
	cout << "\n\n"<<tplayer1<<" : ";
	cin >> stplayer1;
	cout << tplayer2<< " : ";
	cin >>	stplayer2;
	
	
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2<<"	(" <<2 << "/" << overs2 <<")" << tplayer1<<" : " << stplayer1 << tplayer2 << " : " << stplayer2 << endl << bowler2 << "     "<<pace2<<"      "<<"TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;
	}
	else if (wkts2==1) {
	cout << "\n\n"<<tplayer3<<" : ";
	cin >> stplayer3;
	cout << tplayer2<< " : ";
	cin >>	stplayer2;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3<<"("<< 2 << "/" << overs2 <<")" << tplayer3<<" : " << stplayer3 << tplayer2 << " : " << stplayer2 << endl << bowler2 << "     "<<pace2<<"          "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==2) {
	cout <<"\n\n"<< tplayer3<<" : ";
	cin >> stplayer3;
	cout << tplayer4<< " : ";
	cin >>	stplayer4;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4<<"("<< 2 << "/" << overs2 <<")" << tplayer3<<" : " << stplayer3 << tplayer4 << " : " << stplayer4 << endl << bowler2 << "     "<<pace2<<"       "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==3) {
	cout <<"\n\n"<< tplayer5<<" : ";
	cin >> stplayer5;
	cout << tplayer4<< " : ";
	cin >>	stplayer4;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5<<"(" <<2 << "/" << overs2 <<")" << tplayer5<<" : " << stplayer5 << tplayer4 << " : " << stplayer4 << endl << bowler2 << "     "<<pace2<<"       "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==4) {
	cout <<"\n\n"<< tplayer5<<" : ";
	cin >> stplayer5;
	cout << tplayer6<< " : ";
	cin >>	stplayer6;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6<<"("<< 2 << "/" << overs2 <<")" << tplayer5<<" : " << stplayer5 << tplayer6 << " : " << stplayer6 << endl << bowler2 << "     "<<pace2<<"          "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==5) {
	cout << "\n\n"<<tplayer7<<" : ";
	cin >> stplayer7;
	cout << tplayer6<< " : ";
	cin >>	stplayer6;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6+stplayer7<<"("<< 2 << "/" << overs2 <<")" << tplayer7<<" : " << stplayer7 << tplayer6 << " : " << stplayer6 << endl << bowler2 << "     "<<pace2<<"         "<<"TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11; 

	}
	else if (wkts2==6) {
	cout << "\n\n"<<tplayer7<<" : ";
	cin >> stplayer7;
	cout << tplayer8<< " : ";
	cin >>	stplayer8;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6+stplayer7+stplayer8<<"(" <<2 << "/" << overs2 <<")" << tplayer7<<" : " << stplayer7 << tplayer8 << " : " << stplayer8 << endl << bowler2 << "     "<<pace2<<"       "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==7) {
	cout <<"\n\n"<< tplayer9<<" : ";
	cin >> stplayer9;
	cout << tplayer8<< " : ";
	cin >>	stplayer8;
	
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6+stplayer7+stplayer8+stplayer9<<"(" <<2 << "/" << overs2 <<")" << tplayer9<<" : " << stplayer9 << tplayer8 << " : " << stplayer8 << endl << bowler2 << "     "<<pace2<<"        "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11;

	}
	else if (wkts2==8) {
	cout <<"\n\n"<< tplayer9<<" : ";
	cin >> stplayer9;
	cout << tplayer10<< " : ";
	cin >>	stplayer10;
		cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6+stplayer7+stplayer8+stplayer9+stplayer10<<"(" <<2 << "/" << overs2 <<")" << tplayer9<<" : " << stplayer9 << tplayer10 << " : " << stplayer10 << endl << bowler2 << "     "<<pace2<<"         "<<"TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11; 

	}
	else if (wkts2==9) {
	cout << "\n\n"<<tplayer11<<" : ";
	cin >> stplayer11;
	cout << tplayer10<< " : ";
	cin >>	stplayer10;
	cout << "\n\n"<<team2<<"  "<<stplayer1+stplayer2+stplayer3+stplayer4+stplayer5+stplayer6+stplayer7+stplayer8+stplayer9+stplayer10+stplayer11<<"(" <<2 << "/" << overs2 <<")" << tplayer11<<" : " << stplayer11 << tplayer10 << " : " << stplayer10 << endl << bowler2 << "     "<<pace2<<"         "<< "TARGET : "<< splayer1+splayer2+splayer3+splayer4+splayer5+splayer6+splayer7+splayer8+splayer9+splayer10+splayer11; 
	
	}
		else if (wkts2==10) {
			N=2;
	}
		
	}
	
	}
	

	
	
	return 0;
}
