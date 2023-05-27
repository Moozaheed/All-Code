#include<stdio.h>
int main()
{
   int n,sum=0,x;
   scanf("%d", &n);

   for(int i=1;i<=n;i++)
   {
        scanf("%d", &x);
        if(x%2==0)
        {
            sum+=x;
        }
   }

   printf("%d",sum);



}