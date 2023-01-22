#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (1/(1+x*x))
void main()
{
    float l,u,h,k,I=0;
    int i,n;
    printf("\nenter the value of lower limit: ");
    scanf("%f",&l);
    printf("\nenter the value of upper limit: ");
    scanf("%f",&u);
    printf("\nenter the value of subinterval: ");
    scanf("%d",&n);
    h=(u-l)/n;
    I=F(l)+F(u);
    for(i=1;i<n;i++)
    {
        k=l+i*h;
        I=I+2*F(k);
    }
    I=(h/2)*I;
    printf("\nINTEGRAL:%f",I);


}
