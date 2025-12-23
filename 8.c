#include<stdio.h>
int main(){
        int a , b , c ,d;
        b=10;
        d=0;
        printf("输入一个整数");
        scanf("%d",&a);
        for(a;a!=0;b*10){
                c=a%b;
                d=d*10+c;
                a=a/10;
        }
        printf("%d\n",d);
return 0;
}
