#include <stdio.h>

int main()
{
    // Types of Instructions
    // There are three types of instructions in C -- 
    // (a) Type Declaration Instruction
    // (b) Arithmetic Instruction
    // (c) Control Instruction

    //* Type declaration instruction
    float p = 9;
    float q = p + 9.7 ;
    printf("The value of q is : %f \n", p);

    //*Arithmetic istruction
    int a = 6;
    int b = 25;

    printf("The value of a+b is %d \n", a + b);
    printf("The value of a-b is %d \n", a - b);
    printf("The value of a * b is %d \n", a * b);
    printf("The value of b/a is %d \n", b / a);

    //*Modulo
    printf("17 when divided by 3 leaves the remainder of %d \n", 17 % 3);
    printf("17 when divided by  -3 leaves the remainder of %d \n", 17 % -3);
    printf("-17 when divided by  -3 leaves the remainder of %d \n", -17 % -3);

    //*Operator precedence
    int x = 3;
    int y = 5;


    printf("The value of 3*x-8*y-y/x is %d \n", 3 * x - 8 * y - y / x);
    printf("The value of 8*y / 3*x + 5 is %d \n", 8 * y / 3 * x + 5);
    return 0;
}