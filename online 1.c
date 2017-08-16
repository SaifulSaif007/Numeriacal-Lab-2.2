#include<stdio.h>
//#include<conio.h>
# define eqn x*x*x-2*x-5

float f(float x)
{
   float ans;
   ans=eqn;
   return(ans);
}

int main()
{
   float a,b,x=0,x1=0;
   int i=0;
   printf("Enter the a and b");
   scanf("%f%f",&a,&b);
   if(f(a)*f(b)>=0)
   {
      printf("The interval is wrong");
      getch();
      return;
   }
   do
   {
      x=(a+b)/2;
      printf("\ta=%f\tb=%f\tX%d=%f\tf(x%d)=%f\n",a,b,i,x,i,f(x));
      if(x==x1)
      {
         printf("\n\nThe root is %f\n",x);
         break;
      }
      x1=x;
      i++;
      if(f(a)*f(x)<0)
         b=x;
      else
         a=x;
   }while(f(a)*f(b)<0);
   getch();
}

