#include<stdio.h>
int x = 5;
void f(){
    static int x  = 4;
    printf("%d\n",x++);
}

int main(){
    f();
    f();
    f();
    f();
    f();
    f();
    f();
    f();
    return 0;
}