#include<iostream>
using namespace std;
int main()
{
    int x;
    int totalStep=0;
    cin>>x;
    for(int i=5;i>=1;i--)
    {
       if(x>=i){
        int step=x/i;
       int mod=x%i;
       totalStep=totalStep+step;
       x=mod;
       }

    }
    cout<<totalStep;
}
