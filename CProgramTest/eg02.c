#include <stdio.h>
// #include <inttypes.h>

/**
 *  异或运算互换两个数字
 * 
 */
int eg02_1(){
    int a = 18, b = 32;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    
    int c = a ^ b;
    b = c ^ b;
    a = c ^ a;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
    return 0;
}
