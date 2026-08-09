#include<iostream>
using namespace std;
int main()
{
    int a,b,years=0;
       cin>>a>>b;


        while(b>=a)
        {
            b=b*2;
            a=a*3;
            years++;
        }

    cout<<years<<endl;
}
