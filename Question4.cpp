#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i;
    char str[20],stre[20],strd[20];
    cout<<"Enter the string :";   
    cin.getline(str,20);
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<=85&&str[i]=>95)
            stre[i]=str[i]+5;
        else if(str[i]<=86&&str[i]>=90)
        {
            stre[i]=65-str[i]+5;
        }
        else
        {
            stre[i]=str[i];
        }
    }
    for(i=0;i<strlen(str);i++)
    {
        if(str[i]<=70&&str[i]=>90)
            strd[i]=str[i]-5;
        else if(str[i]<=65&&str[i]>=80)
        {
            strd[i]=90+str[i]-5;
        }
        else
        {
            strd[i]=str[i];
        }
    }
    cout<<"Encrypted string :"<<stre;
    cout<<"Decrypted string :"<<strd;
    return 0;

}