#include<stdio.h>
void x();
int main() {
    void (*y)(void)=x;
    (*y)();
}

void x() {
    printf("Hello, World!\n");
}
