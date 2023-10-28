#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int k = 0;
    scanf("%d", &k);
    int arr[] = { 1,2,3,4,5,6,7,8,9,10};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;

    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == k)
        {
            printf("找到了,它的下标是:%d\n", mid);
            break;
        }
        else if (arr[mid] > k)
        {
            right = mid - 1;
        }
        else if (arr[mid] < k)
        {
            left = mid + 1;
        }
    }
    if (left > right)
        printf("找不到\n");
}