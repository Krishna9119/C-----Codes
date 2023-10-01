#include<iostream>

using namespace std;
int main(){
    
    string s = "llggmaadkbaoo";//mdkba
    if(s[0] == s[1]){
        s.erase(0,2);
    }
    cout<<s<<endl;
    for(int i = 0; i<s.size()-1 ; i++){
        if(s[i]== s[i+1] ){
           s.erase(i,i+1);
           i=-1;
           cout<<s<<endl;
        }
    }
    cout<<s;

    

}