#include<stdio.h>
int main()
{
  int f[10][10],s[10][10],result[10][10],i,j,n;
  int rf,cf,rs,cs;
  
  printf("Enter the size of 1st row and coloumn:");
  scanf("%d%d",&rf,&cf);
     
     printf("Eter the size of 2nd row and column:");
     scanf("%d%d",&rs,&cs);
     
     printf("Enter the elements of first matrix:");
     for(i=0;i<rf;i++)
     {
     for(j=0;j<cf;j++)
     {
     scanf("%d",&f[i][j]);
     }
     }
     
        printf("Enter the second matrix:");
        for(i=0;i<rs;i++)
        {
        for(j=0;j<cs;j++)
        {
        scanf("%d",&s[i][j]);
        }
        }
                 
                   for(i=0;i<rf;i++)
                   {
                   for(j=0;j<cf;j++)
                   {
                   result[i][j]=0;
                   for(int k=0;k<cf;k++)
                   {
            result[i][j]+=f[i][j]*s[i][j];
            }
            }
            }
     
     printf("Result matrix:\n");
     for(i=0;i<rf;i++)
     {
     for(j=0;j<cs;j++)
     {
     printf("%d",result[i][j]);
     }
     }
     print("\n");
  return 0;
   }
