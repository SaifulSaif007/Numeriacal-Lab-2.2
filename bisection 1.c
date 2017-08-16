#include<stdio.h>
#include<conio.h>
#include<math.h>

#define eqn 2*x-5+6

float f(float x)
    {
    float ans;
    ans = eqn;
    return ans;
    }

int main()
{
    float x1,x2,x0,a;
   // int i=0;
    printf("enter the guess number...");
    scanf("%f %f",&x1,&x2);
    if(f(x1)*f(x2)>0)
    {
        printf("The interval is wrong...");
       // getch();
        return 0;
    }

        x0=(x1+x2)/2;
        while(fabs(x0)>0.01){

        if(f(x0)==0){
            printf("the root is %f\n",x0);
            break;
        }
            if(f(x1)*f(x0)<0)
                x2 = x0;
            else
                x1 = x0;



    }
    return 0;
}
