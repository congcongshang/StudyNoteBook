#include <stdio.h>
typedef enum { true = 1,false = 0 } bool;


int *sortedSquares(int *nums, int numsSize, int *returnSize)
{
    (*returnSize) = numsSize;
    int* ans = malloc(sizeof(int) * numsSize);
    int i = 0, j = numsSize - 1;
    int key = numsSize - 1;
    nums[i] = nums[i] * nums[i];
    nums[j] = nums[j] * nums[j];
    while(key >= 0){
        if(nums[i] > nums[j]){
            ans[key] = nums[i];
            key--;
            i++;
            if(i==j){continue;}
            nums[i] = nums[i] * nums[i];
        }else{
            ans[key] = nums[j];
            key--;
            j--;
            if(i==j){continue;}
            nums[j] = nums[j] * nums[j];
        }
    }
    return ans;
}

int Findzero(int * nums, int numsSize){
    int i = 0, mid = 0, j = numsSize - 1;
    while (i <= j)
    {
        mid = i + (j - i) / 2;
        if (nums[mid] == 0)
        {
            return mid;
        }
        else if (nums[mid] < 0)
        {
            i = mid + 1;
        }
        else
        {
            j = mid - 1;
        }
    }
    return i;
}

/**
 * 旋转数组 其实就是数组循环后移k位
 */
void rotate(int* nums, int numsSize, int k){
    for(int i=0; i<numsSize; i++){
        
    }
}


int main()
{   
    // int nums[] = {-4, -1, 0, 3, 10};
    int nums[] = {-7,-3,-2,3,11};
    int f = Findzero(nums,5);
    printf("%d",f);
    return 0;
}
