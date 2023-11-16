#include <stdio.h>
double kinetic(double,double);
int main()
{
    double mass,velocity,KE,energy;
    printf("Enter the object's mass in kg: ");
    scanf("%lf",&mass);
    printf("Enter the object's velocity in m/s: ");
    scanf("%lf",&velocity);

    energy=kinetic(mass,velocity);
    printf("The kinetic energy is %.3lfJ",energy);
    return 0;
}
double kinetic(double mass, double velocity)
{
    double energy;
    energy=0.5*mass*(pow(velocity,2));
    return energy;
}
