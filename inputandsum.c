//input and sum
#include<stdio.h>
main()
{
    int var1,var2,sum,sub,mul,div;
    scanf("%d %d",&var1,&var2);
    //scanf("%d",&var2);

    sum=var1+var2;
    sub=var1-var2;
    mul=var1*var2;
    div=var1/var2;

    printf("%d %d %d %d",sum,sub,mul,div);
}
