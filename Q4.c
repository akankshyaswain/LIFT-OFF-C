/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
 
int main()
{
  int a[50],i,n,large,small;
printf("\n Enter the number of elements : ");
scanf("%d",&n);
printf("\n Input the array elements : ");
for(i=0;i<n;++i)
scanf("%d",&a[i]);

large=small=a[0];

for(i=1;i<n;++i)
{
if(a[i]>large)
large=a[i];

if(a[i]<small)
small=a[i];
}

printf("\n The smallest element is %d\n",small);
printf("\n The largest element is %d\n",large);

return 0;
}