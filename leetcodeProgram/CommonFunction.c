#include <stdio.h>

/* 数组输出函数
 * 数组名,数组长度
 */
void outNums(int * nums, int numsSize){
    printf("[");
    for(int i=0;i<numsSize;i++){
        printf("%d",nums[i]);
        if(i<numsSize-1){
            printf(",");
        }else{
            printf("]\n");
        }
    }
}