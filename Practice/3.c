#include<stdio.h>
int func(int) ;
int main() {int t=5; t=func(t); printf("%d",t); return 0; } 
int func (int a) {return a++;}