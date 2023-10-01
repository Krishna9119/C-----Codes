#include<iostream>

using namespace std;
int main(){

    string str ="Hello World";
    //string s;
    int count;

    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]==' '){
            count++;
        }
    }
    char a[str.size()+3*count];
    int j = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if(str[i]  == ' '){
            a[j] = '@';
            j++;
            a[j]='4';
            j++;
            a[j]='0';
            j++;
        }
        else{
            a[j] = str[i];
            j++;
        }
    }
    string s = a;
    
    cout<<s;

}