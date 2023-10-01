#include<iostream>

using namespace std;

int getmaxofArr(int a[26]){
    int count = a[0];
    int m=0;
    for(int i =0 ; i<26 ; i++){
        if(a[i]>count){
            count = a[i];
            m = i;

        }
    }
     return m;
}
int main(){
    string str;
    cout<<"Input the string==> ";
    cin>>str;
    cout<<endl;
    cout<<"Your String is: "<<str<<endl;

    int a[26];

    for(int i = 0 ; i<26 ; i++){
        a[i]= 0;
    }

    for(int i = 0 ; i<str.size() ; i++){
        if(str[i]<='z' && str[i]>='a')
        a[str.at(i)-'a']++;
         
        else if(str[i]<='Z' && str[i]>='A')
        a[str.at(i)-'A']++;
    }


    int n = getmaxofArr(a);
    cout<<n<<endl;
    char m = 'a'+n;
    cout<<"Character with most Freq is : "<<m;

   


}