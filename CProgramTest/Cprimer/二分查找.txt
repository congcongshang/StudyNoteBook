#include <stdio.h>
typedef enum { true = 1, false = 0 } bool;
// 注释 我是
// 系统库 <>
// 用户自定义 ""
int search(int* nums, int numsSize, int target);
int firstBadVersion(int n);
bool isBadVersion(int n){
    if(n>3){
        return true;
    }else{
        return false;
    }
}

int main()
{
    // int dogs[] = {-1,0,3,5,9,12}; 
    // printf("So you have %d dog(s)\n", search(dogs,6,2));
    printf("%d\n",firstBadVersion(8));
    return 0;
}
int search(int* nums, int numsSize, int target){
    
    int i=0,j=numsSize-1;
    int mid =  i + (j - i) / 2;
    while (i<=j)
    {
        if(nums[mid] == target){
            return mid;
        }else if(nums[mid] > target){
            j = mid - 1;
        }else{
            i = mid + 1;
        }
        mid = i + (j - i) / 2;
    }
    return -1;
    /*
    // 704. 二分查找
    // 从有序数组中 找出要查元素的位置
   int i=0,mid=0,j=numsSize-1;
   while(i<=j){
       mid = i + (j-i)/2;
       if(nums[mid] == target){
           return mid;
       }else if(nums[mid] < target){
           i = mid + 1;
       }else{
           j = mid -1;
       }
   }
   return -1;*/
}

int firstBadVersion(int n) {
    int i=1,mid=1,j=n;
    while(i<=j){
        mid = i + (j - i)/2;
        if(isBadVersion(mid)){
            if(isBadVersion(mid-1)){
                j = mid -1;
            }else{
                return mid;
            }     
        }else {
            if(isBadVersion(mid+1)){
                return mid+1;
            }else{
                i = mid + 1;
            }   
        }
    }
    return 0;


    /*
    // 278. 第一个错误的版本
    // 左边都对 右边都错  检查函数错误返回true
    int left = 1, right = n;
    while (left < right) {  // 循环直至区间左右端点相同
        int mid = left + (right - left) / 2;  // 防止计算时溢出
        if (isBadVersion(mid)) {
            right = mid;  // 答案在区间 [left, mid] 中
        } else {
            left = mid + 1;  // 答案在区间 [mid+1, right] 中
        }
    }
    // 此时有 left == right，区间缩为一个点，即为答案
    return left;
    */
}