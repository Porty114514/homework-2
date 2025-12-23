#include<stdio.h>
int main(){
        int a,b,c,d;
        b=1;
        c=1;
        d=1;
        printf("输入一个正整数");
        scanf("%d",&a);
        for(b;b<=(a+1)/2;b++){
                c=1;
                d=1;
                for(c;c<=((a+1)/2)-b;c++){
                        printf(" ");
                }
                for(d;d<=2*b-1;d++){
                        printf("*");
                }
        printf("\n");
        }
        for(b;b<=a;b++){
                c=1;
                d=1;
                for(c;c<=b-((a-1)/2)-1;c++){
                        printf(" ");
                }
                for(d;d<=2*a-2*b+1;d++){
                        printf("*");
                }
                printf("\n");
        }


        return 0;
}
