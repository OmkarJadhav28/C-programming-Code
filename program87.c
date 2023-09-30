#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int iSize = 0;
    int iValue = 0;
    int *ptr = NULL;
    int iCnt = 0, bRet = false;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the elements : \n");
    
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Elements of the array are : \n");

    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    MaximumMinimum(ptr , iSize);

    free(ptr);

    return 0;
}