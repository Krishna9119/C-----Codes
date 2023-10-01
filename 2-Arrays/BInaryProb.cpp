#include<iostream>

using namespace std;

int LastIndex(int arr[] , int s , int e , int x){
        int ans = -1;
        int mid = s +(e-s)/2;
        
        while(s< e ){
            
            if(x == arr[mid]){
                ans = mid;
                s = mid;
            }
            else if(x < arr[mid]){
                e = mid -1;
            }
            
            else {
                s = mid +1;
            }
            mid = s +(e-s)/2;
            
        }
        
        return ans;
    }

int main(){
    int arr[9] = {1 ,3, 5, 5, 5, 5, 67, 123, 125};
    
    cout << "1" ;
    int n = LastIndex(arr,0,8,5);
    
    cout<<n ;


}