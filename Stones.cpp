#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,total=0;
    string str;
    cin>>n>>str;

    for(int i=1;i<=n;i++)
    {
        if(str[i]==str[i-1])
        {
           total++;
        }
    }
    cout<<total<<endl;

}
