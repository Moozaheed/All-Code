//        Spring 2022

//Ans to the Question No: 1(A)
    
        0 2
        0 1
        0 0
        1 2
        1 1
        1 0
        2 2
        2 1
        2 0

//Ans to the Question No: 1(B)

    if a=8 and n=30:

        Sum = 8
        Sum = 19
        Sum = 33
        Sum = 50
        Sum = 23
        Sum = 49
        Sum = 78 

    if continue is replaced with break:

        Sum = 8
        Sum = 19
        Sum = 33
        Sum = 50


//Ans to the Question No: 1(C)

#include<stdio.h>
int main()
{

    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }

    n--;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
        

// Ans to the Question No: 1(D)

#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);
int sum=0,cnt=0;
for(int i=1;i<=n;i++)
{
    int x;
    scanf("%d",&x);

    if(x<0)
    {
        break;
    }
    if(x%3==0 || x%5==0)
    {
        continue;
    }
    sum+=x;
    cnt++;
}
printf("Sum = %d\n",sum);
printf("Average = %lf\n",sum/(cnt*1.0));

}


// Ans to the Question No: 1(D) OR

#include<stdio.h>
int main()
{

int n;
scanf("%d",&n);

int cnt=0;
for(int i=1;i<=n;i++)
{
    if(n%i==0)
    {
        cnt++;
    }
}

if(cnt==2)
{
    printf("Prime");
}
else
{
    printf("Not Prime");
}

}


//Ans to the Question No: 3(A)

#include<stdio.h>
int main()
{

    //My ID is C201096

int arr[20]={2,0,1,0,9,6};

for(int i=1;i<6;i++)
{
    arr[i]+=arr[i-1];
}

for(int i=0;i<6;i++)
{
    printf("%d ",arr[i]);
}


}

//Ans to the Question No: 3(B)

#include<stdio.h>
int main()
{
 
int arr[5][5];
 
//Array Input
for(int i=0;i<5;i++)
{
    for(int j=0;j<5;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 
}
 
//Input Q
int q;
scanf("%d",&q);
q--;    // 0 based indexing er jonno
 
 
//Row Sum
int rowsum=0;
for(int i=0;i<5;i++)
{
    rowsum+=arr[q][i];
}
 
//Col Sum
int colsum=0;
for(int i=0;i<5;i++)
{
    colsum+=arr[i][q];
}
 
printf("Row Sum = %d\n",rowsum);
printf("Col Sum = %d\n",colsum);

}


//Ans to the Question No: 3(B) OR

#include<stdio.h>
int main()
{
int n;
scanf("%d",&n);
int arr[n][n];
 
//Array Input
 
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
        scanf("%d",&arr[i][j]);
    }
 
}
 
//Main Diagonal
int sum1=0;
for(int i=0;i<n;i++)
{
    sum1+=arr[i][i];
}
 
//Second Diagonal
int sum2=0;
for(int i=0;i<n;i++)
{
    sum2+=arr[i][n-i-1];
}
 
printf("Main Daigonal = %d\n",sum1);
printf("Second Daigonal = %d\n",sum2);
 
}