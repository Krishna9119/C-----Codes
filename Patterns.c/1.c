#include<stdio.h>

int main(){
    
    int n;
    printf("Enter Numnber of lines you want to print:\n");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){

        for(int j = i ; j < n ; j++){
            printf(" ");
        }
        for(int j = 0 ; j <2*i-1 ; j++   ){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;
}