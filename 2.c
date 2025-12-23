#include<stdio.h>
int main()
{
        int a , b , c ;
        printf("输入第一个数");
        scanf("%d",&a);
        printf("输入第二个数");
        scanf("%d",&b);
        printf("输入第三个数");
        scanf("%d",&c);
        if(a>=b)
                a = b;
        if(a>=c)
                a = c;
        printf("最小数是%d",a);
        return 0;
}
