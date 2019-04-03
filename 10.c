#include<stdio.h>

int main() {
   int n,i,j,a[1000],t=0,b[1000],k=0,m;
   scanf("%d%d",&n,&m);
   
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
       scanf("%d",&b[i]);
       t++;
   }
   for(i=0;i<m;i++)
   {
   for(j=0;j<n;j++)
   {
       if(b[i]==a[j])
       {
           k++;
       }}}
       if(t==k)
       printf("yes");
       else
       printf("no");
}
