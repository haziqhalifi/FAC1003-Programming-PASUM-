#include <stdio.h>
#define V(r,h) (3.14159*pow(r,2)*h)
#define A(r,h) (2*3.14159*r*h+2*3.14159*pow(r,2))

int main(void)
{
    int r,h;
    float V,A;
    printf("Insert the radius of the cylinder :\n ");
    scanf("%d", &r);

    printf("Insert the height of the cylinder :\n ");
    scanf("%d", &h);

    printf("The volume of cylinder is %f\n", V(r,h));
    printf("The surface area of cylinder is %f\n", A(r,h));

    return 0;
}
