#include<stdio.h>

int main()
{
int year ;
printf("请输入年份");
scanf("%d" , &year );
int a = year % 4;
int b = year % 100;
int c = year % 400;
if(a==0&&b!=0)
printf("1 3 5 7 8 10 12ÔÂ31Ìì£¬4 6 9 11ÔÂ30Ìì£¬2ÔÂ29Ìì");
if(c==0)
printf("1 3 5 7 8 10 12ÔÂ31Ìì£¬4 6 9 11ÔÂ30Ìì£¬2ÔÂ29Ìì");
else
printf("1 3 5 7 8 10 12ÔÂ31Ìì£¬4 6 9 11ÔÂ30Ìì£¬2ÔÂ28Ìì");
return 0;
}
