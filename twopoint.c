#include<stdio.h>
#include<math.h>
main()
{
    double d,e,f,g,x1,x2,y1,y2;
    scanf("%lf %lf %lf %lf",&x1,&x2,&y1,&y2);
    d=(x1-x2)*(x1-x2);
    e=(y1-y2)*(y1-y2);
    f=d+e;
    g=sqrt(f);
    printf("%lf",g);
}
