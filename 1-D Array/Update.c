#include <stdio.h>

int main(){
    int nums[5];
    int count = 0;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        scanf("%d",&nums[i]);
       
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",nums[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if(nums[i]%2==0){
            nums[i] = nums[i]/2;
        }
        else{
            nums[i] == nums[i]*2;
        }
    }
    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("%d ",nums[i]);
    }
    

    return 0;
}