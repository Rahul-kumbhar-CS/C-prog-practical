//Perform all assignment operators (=, +=, -=, *=, /=, %=, *=).
#include<stdio.h>
int main()
{
    int a=12, b=10;
    printf("a=%d\n",a);
    a+=b;
    printf("a+=b:%d\n",a);
    a-=b;
    printf("a-=b:%d\n",a);
    a*=b;
    printf("a*=b:%d\n",a);
    a/=b;
    printf("a/=b:%d\n",a);
    a%=b;
    printf("a%%=b:%d\n",a);
    return 0;
}