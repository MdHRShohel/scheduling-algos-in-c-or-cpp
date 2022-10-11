#include<stdio.h>
int main()
{
    int p,t;
    float r,SI,add;
    scanf("%d %d",&p,&t);
    scanf("%f",&r);
    SI = (p*t*r)/100;
    printf("Simple Interest:%f\n",SI);
    add = p + SI;
    printf("Principle + Interest = %.1f\n",add);
    return 0;

}
