#include <stdio.h>
float val(float);

int main()
{
    float t,h;
    printf("Time(s)\tPosition(m)\tVelocity(m/s)\tAcceleration(m/s^2)\n");
    val(t);
    return 0;

}
float val(float t)
{
    float p,v,a,h;
    for(t=0.00;t<=1.50;t+=0.15)
    {
    printf("%.2f\t",t);
    p=3*pow(t,2)+7*t-2*pow(t,(5/2));
    printf(" %.3f\t\t",p);
    v=6*t+7-5*pow(t,3/2);
    printf("   %.3f\t",v);
    a=6-(15.0/2.0)*pow(t,0.5);
    printf("     %.3f\n",a);
    }
}
