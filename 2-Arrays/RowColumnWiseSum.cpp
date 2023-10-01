#include <iostream>

using namespace std;

int main(){

    int arr[3][4];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    int rowSum[3][5];
    for (int i = 0; i < 3; i++)
    {
        int count = 0;

        for (int j = 0; j < 4; j++)
        {
            rowSum[i][j] = arr[i][j];
            count+= arr[i][j];
        }
        rowSum[i][4] = count;
        
    }
    
     for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<rowSum[i][j] << " ";
        }
        cout<<endl;
    }

    int colSum[4][4];
    for (int i = 0; i < 4; i++)
    {   int count = 0;
        for (int j = 0; j < 4; j++)
        {
            if(i!=3){
           colSum[i][j] = arr[i][j]; 
            }
           if(j<3){
            count +=arr[j][i];
           }        
        }  
        colSum[3][i] = count;
    }
    


    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout<<colSum[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    


    return 0;
}