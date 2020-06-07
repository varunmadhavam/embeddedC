#include<stdio.h>
#include<stdint.h>

typedef union {
uint8_t REG;
struct {
    unsigned P0 :1;
    unsigned P1 :1;
    unsigned P2 :1;
    unsigned P3 :1;
    unsigned P4 :1;
    unsigned P5 :1;
    unsigned P6 :1;
    unsigned P7 :1;
} PIN;
} Register;

#define DDRB ((Register *)0x0001)

int main() {
    DDRB->REG=0b00011000;
    DDRB->PIN.P0=1;
    printf("%X",DDRB->REG);
    return 0;
}