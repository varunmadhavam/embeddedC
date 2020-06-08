#include<stdio.h>

#define MASK(x) ((unsigned char)(1<<x)) // Not expensive as done at compile time.

void binary(unsigned char);

int main() {
char DDRB=0b10101010;

//Set pins 0,2,4 and 6
DDRB |= (MASK(0)|MASK(2)|MASK(4)|MASK(6));

//Clear bits 1,3 and 7
DDRB &= ~(MASK(1)|MASK(3)|MASK(7));

//Invert bit 5
DDRB ^= MASK(5);

//Read  bit 2
if (DDRB & MASK(2))
    printf("bit 2 is set");
else
    printf("bit 2 is not set");

printf("\n");
binary(DDRB);

return 0;
}

void binary(unsigned char byte){
    int i;
    for(i=7;i>=0;i--)
    {
        (MASK(i)&byte)?printf("1"):printf("0");
    }
    printf("\n");
}



