#include <iostream>

using namespace std;
int main(){
    int n; 
    int count = 0;
    cin>> n;
    int x = n;

    while(x!=0){
        x = x/10;
        count++;
    }
    int i = 0 ;
    int j = 1;
    while(i<count-1){
        j+=j*10+1;
        i++;
    }
    int k=0;
    while(j>1 && n!=0){
       n =  n%j;
       if(n == 0){
        k =1;
       }
     

    }
    if(k==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }



}