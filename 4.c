#include<stdio.h>

int main() {
   int n,i,j,a[1000],t=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       t=0;
       for(j=i+1;j<n;j++)
       {
           if((a[i]!='$')&&(a[j]!='$')){
         if(a[i]==a[j])
         {
             a[j]='$';
             t++;
       }}}
       if(t>0)
        a[i]='$';   
       
   }
   for(i=0;i<n;i++)
   {
       if((a[i]!='$')&&(a[j]!='$'))
       {
           printf("%d",a[i]);
       }
   }
}
