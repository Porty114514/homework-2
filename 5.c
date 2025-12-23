#include<stdio.h>
int main(){
        int a , c;
        printf("输入正整数");
        scanf("%d",&a);
        int b = a%2;
        if(b==1)
                c=((1+a)*((a+1)/2))/2;
        if(b==0)
                c=((a)*(a/2))/2;
        printf("%d\n",c);
        return 0;
}
