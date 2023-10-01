#include<iostream> 

using namespace std;

int main(){
    string s;
    
    cout<<"Enter the Words with 3 alphabets in it:"<<endl;
    cin>>s;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(i%2 == 1){
            swap(s[1] , s[2]);
        }
        else{
            swap(s[0],s[1]);
        }
        cout<<s<<endl;
       
    }
    return 0;
    
}