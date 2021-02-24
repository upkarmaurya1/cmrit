#include<stdio.h>
int main()
{
int r1,r2,c1,c2;
printf("\n enter no of rows of first mstrix: \n");
scanf("%d",&r1);
printf("\n enter no of columns of first matrix:\n");
scanf("%d",&c1);
printf("\n enter no of rows of seconr matrix: \n");
scanf("%d",&r2);
printf("\n enter no of column of second matrix: \n");
scanf("%d",&c2);
if(r1==r2 && c1==c2)
{
int m1[r1][c1];
int m2[r2][c2];
int R[r2][c2];
int i,j;
printf("\n enter first matrix:\n");
for (i=0;i<r1;i++);
{
  for(j=0;j<c1;j++);
  {
  scanf("%d",&m1[i][j]);
  }
}
printf("\n enter second matrix:\n");
for(i=0;i<r2;i++);
{
  for(j=0;j<c2;j++);
  {
  scanf("%d",&m2[i][j]);

  }


}
for(i=0;i<r2;i++);
{
  for(j=0;j<c2;j++);
  {
  R[i][j]=m1[i][j] + m2[i][j];  
  }
}
printf( "\n result matrix\n");
for(i=0;i<r2;i++);
{
  for(j=0;j<c2;j++);
  {
    printf("%d",R[i][j]);
  }
printf("\n");  
}



}
else
{
  printf("\n not possible");
}

}
