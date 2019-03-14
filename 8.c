#include<stdio.h>
int main(){
int n,a[100],i,j,c[100],k=0,t=0,l=0,m=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(k=n-1;k>0;k--)
{
for(i=0;i<n;i++)
{
    for(j=i+1;j<k;j++)
    {
        if(a[i]+a[j]==a[k])
        {
            printf(" %d %d %d",a[i],a[j],a[k]);
            printf("\n");
        }
}}}
return 0;
}
