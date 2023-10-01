#include <iostream>

using namespace std;

int main(){

    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < 3; i++)
    {
        /* code */
        for (int j = 0; j < 3; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    int rowSum[3];
    for (int i = 0; i < 3; i++)
    {
        int count = 0;
        for (int j = 0; j < 3; j++)
        {
            count+=arr[i][j];
        }
        rowSum[i] = count;
    }
    cout<<"The Sum of row is==>"<< endl;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        cout<<rowSum[i]<<" ";
    }
    cout<<endl;
    

    int maxi = rowSum[0];
    int rowIndex =0;
    for (int i = 0; i < 3; i++)
    {
        /* code */
        if(rowSum[i] > maxi){
            maxi = rowSum[i];
            rowIndex = i;
        }
    }
    cout<<"The Index of Row with max Sum is==> "<< rowIndex ;
    
    
    
    return 0;
}