#include<stdio.h>

int main(void)
{
    // Variable Declaration
    int psh_i = 20;
    float psh_f = 3.14f;
    double psh_d = 8.041997;
    char psh_c = 'A';

    // Code
    printf("\n\n");

    printf("i = %d\n", psh_i);
    printf("f = %f\n", psh_f);
    printf("d = %f\n", psh_d);
    printf("c = %c\n", psh_c);

    printf("\n\n");

    psh_i = 40;
    psh_f = 1.60f;
    psh_d = 30.9432;
    psh_c = 'P';

    printf("i = %d\n", psh_i);
    printf("f = %f\n", psh_f);
    printf("d = %f\n", psh_d);
    printf("c = %c\n", psh_c);

    printf("\n\n");
    return(0);
}
