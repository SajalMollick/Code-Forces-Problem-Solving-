#include<iostream>
#include<string>
using namespace std;
int main()
{
    int Size,Count=0;
    cout<<"Enter Size:";
    cin>>Size;
    string s[Size];
    cout<<"Enter String:";

    for(int i=0;i<Size;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<Size;i++)
    {
        for(int j=i+1;j<Size;j++){
        if(s[i]==s[j])
        {
            s[j]="";
        }
    }

    }

    for(int i = 0; i < Size; i++) {
        if(s[i] != "") {
            Count++;
        }
    }

    if(Count%2==0)
    {
        cout<<"CHAT WITH HER!";

    }
    else{
        cout<<"IGNORE HIM!";
    }




}
