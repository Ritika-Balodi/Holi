#include<iostream>
using namespace std;
int main()
{
    int i,j,a,b,c;
    cout<<"Enter the range";
    cin>>a>>b;
    cout<<"The print numbers from "<<a<<" to "<<b<<" are:\n";
    for(i=a;i<=b;i++)
    {
        c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
                c++;
        }
        if(c==2)
            cout<<i;
    }
}