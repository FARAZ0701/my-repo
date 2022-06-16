#include<iostream>
using namespace std;
int main()
{ // TRYANGLE;
    int i, j, k=7, p=1;
    p = k-1;
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=p; j++)
            cout<<" ";
        p--;
        for(j=1; j<=(2*i-1); j++)
            cout<<j;
        cout<<endl;
    }
   // SECOND TRYANGLE
    for(i=1; i<=(k-1); i++)
    {
        for(j=1; j<=p; j++)
            cout<<" ";
        p++;
        for(j=1; j<=(2*(k-i)-1); j++)
           cout<<p;
        cout<<endl;
   }
    cout<<endl;
    return 0;
}
