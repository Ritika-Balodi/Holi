#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n;
    string str[30];
    cout<<"Enter the string";
    cin>>str;
    for(i=0;str[i]!='\0';i++)
    {
        n=str[i];
        if(i%2==0)
        {
            for(j=0;j<n;i++)
            {
                cout<<"#";
            }
        }
        else 
        {
            for(j=0;j<n;i++)
            {
                cout<<"$";
            }
        } 
    }
    return 0;
}