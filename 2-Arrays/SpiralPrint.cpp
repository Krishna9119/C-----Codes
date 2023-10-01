#include <iostream>

using namespace std;

int main(){

    int row,col;
    cin>>row;
    cin>>col;
    int arr[3][4];

    for (int i = 0; i < row; i++)
    {
        for (int j= 0; j < col; j++)
        {
            /* code */
            cin>>arr[i][j];
        }
        
    }
   for (int i=0 ; i < row; i++)
    {
        

        for (int j= 0; j < col; j++)
        {
           
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
        
    }
    int count = 0;
    int total = row*col;
    vector<int> ans;
    int strRow = 0;
    int endRow = row-1;
    int strCol = 0;
    int endCol = col-1;
    

    while(count < total){
        
        for(int i = strCol; i<=endCol ; i++ ){
            ans.push_back(arr[strRow][i]);
            count++;
        }
        strRow++;
        for(int i = strRow ; i<= endRow ; i++){
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;
        for(int i = endCol ; i>=strCol ; i--){
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;
        for(int i = endRow ; i>= strRow ; i--){
            ans.push_back(arr[i][strCol]);
            count++;
        }
        strCol++;
        
        
        
        

    }
    for (int i = 0; i < ans.size(); i++)
    {
        /* code */
        cout<<ans[i]<<" ";
    }
    
    return 0;
}