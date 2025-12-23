#include<stdio.h>
int main(){
        int a , b , c , d ,e;
        printf("输入一个比较大的正数");
        scanf("%d",&a);
        for(b=2;b<=a;b++){
                e=1;
                for(c=2;c<b;c++){
                        d=b%c;
                        if(d==0)
                                e=0;
                }
                if(e!=0)
                        printf("%d\n",b);
        }
return 0;
}
