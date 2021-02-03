#include<stdio.h>

int add(int a, int b);
int sub(int a, int b);

int main(int argc, char const *argv[])
{
    printf("Addition is: %d \n",add(10,20));
    printf("Subtraction is: %d \n",sub(10,20));
    return 0;
}
