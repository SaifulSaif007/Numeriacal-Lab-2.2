#include<process.h>
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define E 0.0001
float G(float x)
{
return(2-x*x);
}


void main()
{
float v,x0,x1;
int count=0;
//clrscr();
printf("****** FIXED POINT METHOD ******");
printf("\n x*x+x-2=0 ==> x=2-x*x");
printf("\n\nEnter initial value of x:\n");
scanf("%f",&v);

do
{ count++;
x0=v;
x1=G(x0);
if(fabs(G(x1)-G(x0))<=E)
{ printf("\nApproximate Roots = %f",x1);
printf("\nRoots is found in %d th iteration",count);

}
v=x1;
}while(fabs(G(x1)-G(x0))>E);

}
