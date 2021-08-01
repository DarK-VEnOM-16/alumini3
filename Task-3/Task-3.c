#include<stdio.h>
#include<limits.h>

void maxSum(int A[], int n)
{
    int max=INT_MIN;
    int max_sum= 0;

    for (int i=0;i< n;i++)
    {
        max_sum+= A[i];

        if (max < max_sum)
            max= max_sum;

        if (max_sum < 0)
            max_sum = 0;
    }
    if(max>0)
        printf("Maximum contiguous sum is : %d",max);
    else
        printf("Maximum contiguous sum is : 0");
}


void main()
{

    int n;
    printf("Enter The Size of Array: ");
    scanf("%d",&n);
    int A[n];
    printf("Enter the Array Elements:");
    for (int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    maxSum(A, n);
}
