#include<stdio.h>
struct api {
    void (*fun1)(void);
    int  (*fun2)(int);
};

void fun1_imp() {
    printf("Hello from fun1\n");
}

int fun2_imp(int a) {
    return a;
}

struct api api = {
    .fun1=fun1_imp,
    .fun2=fun2_imp
};

int main() {
    api.fun1();
    printf("%d\n",api.fun2(2));
    printf("%p %p %p",api.fun1,fun1_imp,&fun1_imp);
}
