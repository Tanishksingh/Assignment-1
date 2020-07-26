#include<iostream>
using namespace std;
int main()
{
int num1,num2,num3;
    cout<<"enter the three number:";
    cin>>num1>>num2>>num3;
    
    if( num1>=num2 && num1>=num3)
    {
        cout<<"the largest number is number 1"<<num1;
    }

   if (num2>=num1 && num2>=num3)
   {
       cout<<"the largest number is number 2"<<num2;
       
   }
    if(num3>=num1 && num3>=num2)
    {
        cout<<"the largest number is number 3"<<n3;
        
    }
    return 0;
}
