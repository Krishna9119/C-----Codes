#include <iostream>

using namespace std;

void scan(int a[100], int n){
    for(int i = 0 ; i< n ; i++ ){
        cin>>a[i];
    }
}

void sort(int a[100], int n){
    for(int i = 1 ; i < n; i++){
        for(int j = 0 ; j< n-1 ; j++){
            if(a[j] > a[j+1]){
                swap(a[j] , a[j+1]);
            }
        }
    }
}

void print(int a[100] , int n){
    for(int i = 0; i< n ; i++){
        cout<<a[i]<<" ";
    }
}

int BinarySearch(int a[100] , int n , int target){
    int s = 0 ; 
    int e = n-1;

    int mid = s +(e-s)/2;

    while(s <= e){
        if(a[mid] ==  target ){
            return mid;
        }
        else if (a[mid] < target){
            s = mid;
        }
        else if (a[mid] > target){
            e = mid ;
        }
        mid = s +(e-s)/2;
    }
     return -1;
    
}

int main(){
    int a[100];
    int n, target;
    cout<<"Enter number of Elements in the array==> ";
    cin>>n;
    cin>> target;
    cout<<"Target is ==>" << target<<endl;
    
    scan(a,n);
    sort(a,n);
    print(a,n);
    int c = BinarySearch(a,n , target );
    cout<<"The index of target is: " << c;
    return 0;
}