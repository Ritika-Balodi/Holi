#include<iostream>
using namespace std;
int main()
{
    int i,j,num,n,no;
    cout<<"Enter line command argument :";
    cin>>n;
    for(i=0;i<n;i++)
    {
        lnum=1000000;
        cour<<"Enter the no. of numbers";
        cin>>no;
        for(i=0;i<no;i++)
        {
            cin>>num;
            if(num<lnum)
                lnum=num;
        }
        cout<<"The least no. is :"<<lnum;
    }
    return 0;
}