#include<stdio.h>

int main(){
    int d,m,y;
    scanf("%d/%d/%d",&d,&m,&y);
    int l=0;
    int k = y%4;
    for (int i =y+(4-k) ; i < 2023;i= i+4)
    {
        l++;
    }
   // from y+1 to end of 2022
   int count=0;
   count = (2022-y)*365 +l;
    int a[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    for (int i = m; i < 12; i++)
    {
        count += a[i];
    }
    count += (a[m-1] - d +1);
    for (int i = 0; i < 8; i++)
    {
        count+= a[i];
    }
    count +=13;
    printf("The age of Given Person in days : %d",count);
    return 0;
    
    
}