#include <stdio.h>

#define MINT_MAX 2147483647
#define MINT_MIN -2147483648

/*
 * 给出一个 32 位的有符号整数，
 * 你需要将这个整数中每位上的数字进行反转。
 *
 * 注意: 假设我们的环境只能存储得下 32 位的有符号整数，
 *       则其数值范围为 [−231,  231 − 1]。
 *       请根据这个假设，如果反转后整数溢出那么就返回 0。
 *
 * 例如:
 *     输入：x = 123
 *     输出：321
 */

int reverse1(int x) { // 我的解答

    // 给一个更大的容器反转后判断是否溢出,是则0
    // 再强制转换为结果值

    long y = x;
    long z = 0;
    while(y != 0){
        z *= 10;
        int key = y % 10;
        z += key;
        y /= 10;
    }

    if(( z < -2147483648 )||( z > 2147483647)){
        z = 0;
    }

    return (int)z;
}

int reverse(int x) { // 标准解答 直接判断了没有空间消耗
    int rev = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (rev > MINT_MAX/10 || (rev == MINT_MAX / 10 && pop > 7)) return 0;
        if (rev < MINT_MIN/10 || (rev == MINT_MIN / 10 && pop < -8)) return 0;
        rev = rev * 10 + pop;
    }
    return rev;
}


// 测试函数
void testFunction001(){
    int a[] = {123,76453,87645,114748364,-1147483648,2147483647, 7283781};
    int len = 7;
    for(int i=0;i<len;i++){
        printf("input:  %d \noutput: %d\n",a[i],reverse1(a[i]));
        printf("input:  %d \noutput: %d\n\n",a[i],reverse(a[i]));
    }
}

/*
  1.取余和除法获取出数字各个位的数字
  2.与边界值比较判断是否有溢出
*/
