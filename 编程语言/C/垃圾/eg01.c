#include<stdio.h>

/**
 * 输出两句话和一个变量
 * 
 */ 
int eg01_1(){ 
    /*
     *  提高代码可读性:
     *     1.用有意义的变量名
     *     2.写注释
     *     3.空行分割概念上的多个部分
     *     4.每条语句独占一行
     */

    int num;
    num = 100;

    printf("I am a simple ");
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n",num);

    printf("shang congcong\n");
    printf("shang\ncongcong\n");
    printf("shang ");
    printf("congcong\n");

    return 0;
}

/**
 *  计算英寻与英尺的转换 1英寻=6英尺
 */ 
int eg01_2(){

    /*
     * 常见的程序错误:
     *   1.注释后部
     *   2.忘记分号
     *   3.花括号用法
     *   4.变量声明方法
     */
    int feet, fathoms;
    fathoms = 2;
    feet = 6 * fathoms;

    printf("There are %d feet in %d fathoms!\n", feet, fathoms);
    printf("Yes, I said %d feet!\n", 6 * fathoms);
    return 0;
}