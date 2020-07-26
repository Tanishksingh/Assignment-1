#include<iostream>
using namespace std;
int main()
{
    int i,n,flag=0;
    cout<<"enter the number";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            flag=flag+1;
        }
        }
if(flag==2)
{
    cout<<"the number is prime";
    
}
else
{
    cout<<" the number is not prime";
    
}
        return 0;
    
}
