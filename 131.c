#include<stdio.h>

int main() {
   int n,a[100],i,j,b[100],t=0,f=0,c[100],k=0,h=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   for(i=0;i<n;i++)
   {
       for(j=i+1;j<n;j++)
       {
       if(a[i]>a[j])
       {
           t=a[i];
           a[i]=a[j];
           a[j]=t;
       }
   }}
   for(i=0;i<n;i++){
   b[k]=a[i];
   k++;}
   for(i=n-1;i>=0;i--){
       c[h]=a[i];
       h++;
   }
   for(i=0;i<n;i++)
   {
       if(f<n){
       printf("%d\t",c[i]);
       f++;
       if(f<n){
       printf("%d\t",b[i]);
       f++;}
   }}
}
