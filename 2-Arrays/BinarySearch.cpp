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
    cout<<"Enter the Element to Search==> ";
    int target;
    cin>>target;


    return 0;
}