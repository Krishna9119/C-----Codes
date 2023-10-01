#include <iostream>

using namespace std;

bool isPresent(int arr[][4] , int target , int row , int column){
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            /* code */
            if(arr[i][j] == target){
                return 1;
            }
        }
        
    }
    return 0;
    
}

int main(){

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    cout<<"Enter the Element to Search==> ";
    int target;
    cin>>target;
    //When we are passing 2-D Array we have to atleat describe the number of column in 2-D Array.
    if(isPresent(arr,target , 3 , 4)){
        cout<<"Element is Present.";
    }
    else{
        cout<<"Element is absent.";
    }
    


    return 0;
}