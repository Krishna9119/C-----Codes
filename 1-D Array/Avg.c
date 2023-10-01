#include <stdio.h>

int main(){
    int marks[6];
    int count = 0;

    for (int i = 0; i < 6; i++)
    {
        /* code */
        scanf("%d" ,&marks[i]);
    }
    

    for (int i = 0; i < 6; i++)
    {
       
        count += marks[i];
    }

    int avg = count/6;

    if(avg>80){
        printf("Outstanding");
    }
    else if(avg<=80 && avg > 65){
        printf("First Class");
    }
    else if(avg<=65 && avg > 50){
        printf("Second Class");
    }
    else if(avg<=50 && avg > 33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
    
}