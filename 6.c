#include<stdio.h>
#include<math.h>
int main(){
        int a,b,c,d;
        d=1;
        printf("输入一个正整数吧\n");
        scanf("%d",&a);
        for(b=2; b<=(a-1);b++){
                c=a%b;
                if(c==0)
                        d=0;
        }
        if(d==0)
                printf("no\n");
        if(d==1)
                printf("yes\n");

        return 0;
}
