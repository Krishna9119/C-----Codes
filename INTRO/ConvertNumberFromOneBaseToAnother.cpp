#include<iostream>

using namespace  std;

int main()
{
    

    int n;
    cout<<"Enter the number in base 10 : ";
    cin>>n;
    // int baseOfNumber;
    // cout<<"Enter the base of given number: ";
    // cin>>baseOfNumber;
    int base;
    cout<<"Enter the base to Convert given number into: ";
    cin>>base;
    int k = n;
    int count = 0;

    for (int i = 1; n>0; i = i*10)
    {
        count = (n%base)*i + count;
        n = n/base;
    }
    cout<<k << " in base "<< base << " will be: " << count;
    
} 

