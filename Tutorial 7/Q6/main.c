#include <stdio.h>

int main()
{
    float sum,pay=0,payroll=0,sales;
    int num=1;
    printf("*** Weekly Earnings in KuKuKu Water Filter Sdn Bhd ***\n\n");
    printf("Enter sales in Ringgit (-1 to end): ");
    scanf("%.2f",&sales);

    while(sales!=-1)
    {
        printf("The salary of salesman %d is RM %.2f\n",num,pay=200+0.09*sales);
        sum+=sales;
        payroll+=pay;
        printf("\nEnter sales in Ringgit (-1 to end): ");
        scanf("%.2f",&sales);
        num++;

    }
    printf("\nAll salesmen processed.\nTotal sales are RM %.2f\nTotal payroll is RM %.2f",sum,payroll);
}
