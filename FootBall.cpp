#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>> str;
    int check=0;

    for(int i=0;i<str.size();i++)
    {
        int count=0;
        if(str[i]=='0')
        {
            while(str[i]=='0' && i<str.size())
            {
                count++;
                i++;
            }
        }
        else if(str[i]=='1')
        {
            while(str[i]=='1' && i<str.size())
            {
                count++;
                i++;
            }
        }

        if(count>=7)
        {
            check=1;
        }
        i--;


    }

    if(check==1)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }





}
