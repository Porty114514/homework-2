#include<stdio.h>
int main()
{
        char c;
        int a=128;
        int b;
        printf("输入字符喵，输入字符谢谢喵");
        scanf("%c" , &c);
        for(int i = 8 ; i>=1 ; i--)
        {
                int b = (c/a==1) ?1:0;
                printf("The %d bit is %d\n",i,b);
        //      printf("a=%d\n",a);
        //      printf("b=%d\n",b);
        //      printf("c=%d\n",c);
        //      printf("b=%d\n",b);
                if(b==1)
                        c = c - a;
                a = a/2;
        }
        return 0;
}
