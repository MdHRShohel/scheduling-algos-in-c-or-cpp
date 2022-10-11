#include<stdio.h>
int main()
{
    int a[]= {1,2,4,5,67,89,100};
    int item = 5;
    int left,right,mid;
    left = 0;
    right = 6;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(a[mid]==item)
        {
            printf("Item found at index:%d\n",mid);
            return 0;
        }
        else if(a[mid]<item)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    printf("Item not found\n");
    return 0;
}
