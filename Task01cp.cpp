#include<iostream>
using namespace std;
void checkEqual(int num1,int num2);
int main()
{ 
  int num1,num2;
  cout<<"Enter the first number: ";
  cin>>num1;
  cout<<"Enter the second number: ";
  cin>>num2;
  checkEqual(num1,num2);
}
void checkEqual(int num1,int num2)
{
    if(num1==num2)
    {
        cout<<"True.";
    }
    else
    {
    cout<<"False";
    }
}
