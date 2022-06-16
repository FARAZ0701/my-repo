#include<iostream>
using namespace std;
int main()
{
    int factorial=1;
    for(int i=1;i<=6;i++)
    {
     factorial=factorial*i;
    }
	cout<<"Factorial of Given Number is ="<<factorial<<endl;
    return 0;
}
