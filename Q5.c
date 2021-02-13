/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<string.h>
 
int main()
{
int i,j,n;
printf("enter the number of rows : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j||i+j==(n-1))
      {
          printf("*");
          }
  else{
      printf(" ");
  }
 }  
         printf("\n");
      
            
   
}

}   




 