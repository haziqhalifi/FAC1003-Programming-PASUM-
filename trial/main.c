#include<stdio.h>

int main (){
int i,j,m,n,a[3][3],b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
printf("Insert number of row and column for matrix A:\n");
scanf("%d",&m);
scanf("%d",&n);
printf("\n");
for(i=0;i<m;i++)
for(j=0;j<n;j++){
    printf("A[%d][%d]=",i+1,j+1);
    scanf("%d",&a[i][j]);
}
printf("\nThe sum of the matrix is:\n");
for(i=0;i<m;i++){
for(j=0;j<n;j++){
printf("%d\t",a[i][j]+b[i][j]);}
printf("\n");}}
