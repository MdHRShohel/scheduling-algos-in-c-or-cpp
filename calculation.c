#include<stdio.h>
int main()
{
    int x,y,sum,sub,mul,div,mod;
    printf("First number:",x);
    scanf("%d",&x);
    printf("Second number:",y);
    scanf("%d",&y);
    sum = x + y;
    printf("Sum = %d\n",sum);
    sub = x - y;
    printf("Sub = %d\n",sub);
    mul = x * y;
    printf("mul = %d\n",mul);
    div = x / y;
    printf("div = %d\n",div);
    mod = x % y;
    printf("mod = %d\n",mod);
    return 0;

}
