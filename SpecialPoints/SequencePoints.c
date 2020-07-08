#include<stdio.h>
void disp(int,int,int);
int main() {
int i=1;
disp(--i,i,i++);
}
void disp(int a ,int b,int c) {
    printf("%d %d %d\n",a,b,c);
}
