#include<iostream>
#include<string>

using namespace std;
int main(){
    string s = "axxxxyyyyb";
    string part ="xy";

    while(s.length()!=0 && s.find(part)<s.length()){
            s.replace(s.find(part),part.length(),"");
    }
    cout<<s<<endl;

    //To erase part from a string we use s.erase(from: index1 , to: index2)
    
    string str = "abcdabcdaadc";
    string part2= "cab";
    string part3 = "abc";
    str.erase(str.find(part3),part3.size());
    cout<<str<<endl;
    //if part is not present s.find() shows a undefined number
    cout<<str.find(part2);
    

}