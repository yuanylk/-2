#include <stdio.h>  
#include <limits.h> // 包含INT_MIN的定义  
  
int maxSubArraySum(int a[], int size) {  
    int max_so_far = INT_MIN, max_ending_here = 0;  
  
    for (int i = 0; i < size; i++) {  
        max_ending_here = max_ending_here + a[i];  
        if (max_so_far < max_ending_here)  
            max_so_far = max_ending_here;  
  
        if (max_ending_here < 0)  
            max_ending_here = 0;  
    }  
  
    // 如果所有数都是负数，则最大子段和为0  
    return (max_so_far > 0) ? max_so_far : 0;  
}  
  
int main() {  
    int a[] = {-2, -11, -4, -13, -5, -2};  
    int n = sizeof(a) / sizeof(a[0]);  
    int max_sum = maxSubArraySum(a, n);  
    printf("%d", max_sum);  
    return 0;  
}
