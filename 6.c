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
       for(j=i+1;j<n;j++){
         if(a[i]==a[j])
         {
           printf("%d",a[i]);
            k++;
            break;
       }
   }
   if(k!=0)
   break;
       
   }
   if(k==0)
   printf("unique");
}
