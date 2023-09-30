#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iLength)
{
    int i = 0; 
    int iMin = Arr[0];
    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }
    return iMin;
}

int Maximum(int Arr[], int iLength)
{
    int i = 0; 
    int iMax = Arr[0];
    for(i = 1; i < iLength; i++)
    {
        if(Arr[i] > iMax)
        {
            iMax = Arr[i];
        }
    }
    return iMax;
}

int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

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

    iRet = Maximum(ptr , iSize);
    printf("Largest element is : %d\n",iRet);

    iRet = Minimum(ptr , iSize);
    printf("Minimum element is : %d\n",iRet);

    free(ptr);

    return 0;
}