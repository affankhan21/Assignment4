#include<stdio.h>
 int Summation(int iNo)
  {
int iCnt=0,iSum=0;
if(iNo<=0)
{

    return 0;
}
for(iCnt=1;iCnt<=iNo;iCnt++)
{

if((iNo%iCnt)!=0)



{

    printf("%d\n",iCnt);
    iSum=iSum+iCnt;
}


}
return iSum;
  }


int main()
{
    int iValue=0,iRet=0;
    printf("ENTER NUMBER TO DISPLAY  NON FACTORS ADDITION :\n");
    scanf("%d",&iValue);
iRet=Summation(iValue);
printf("THE ADDITION OF NON FACTOR IS %d",iRet);
    return 0;
}