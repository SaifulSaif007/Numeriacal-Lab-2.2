#include<stdio.h>

float f(float x)
{
    return(x*x*x-4);
   // return pow(x,3)-4; // f(x)= x^3-4
}
float main()
{
    float a,b,c,d,e;
    int count=0,n;
    printf("\n\nEnter the values of a and b:\n"); //(a,b) must contain the solution.
    scanf("%f%f",&a,&b);
    printf("Enter the values of allowed error:\n");
    scanf("%f",&e);
    do
    {
        if(f(a)==f(b))
        {
            printf("\nSolution cannot be found as the values of a and b are same.\n");
        return;
        }
        c=(a*f(b)-b*f(a))/(f(b)-f(a));
        a=b;
        b=c;
        count++;
        printf("Iteration No-%d    x=%.4f\n",count,c);


    } while(fabs(f(c))>e);
    printf("\n  After %d iteration The required solution is %.4f\n",count,c);

}
