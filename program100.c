#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = iNo; iCnt >= iNo; iCnt--)
    {
        printf("%d\t",iCnt);
    }
    printf("\n");
}
int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symbol : \n");
    scanf("%d",&iFrequency);

    Display(iFrequency);

    return 0;
}