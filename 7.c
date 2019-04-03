#include<stdio.h>

int main() {
   int n,i,j,a[1000],t=0,b[1000],k=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       if(i%2!=0)
       {
           if(a[i]%2==0)
           {
               printf("%d ",a[i]);
           }
       }
       if(i%2==0)
       {
           if(a[i]%2!=0)
           {
               printf("%d ",a[i]);
           }
       }
   }
}
