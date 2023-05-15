#include<stdio.h>
 int FactDiff(int iNo)
  {
int iCnt=0,iSum=0;
 int iCnt1=0,iSum1=0;
if(iNo<=0)
{

    return 0;
}
for(iCnt=1;(iCnt<=iNo/2);iCnt++)
{

if(iNo%iCnt==0)



{

    printf("%d\n",iCnt);
    iSum=iSum+iCnt;
}


}
for(iCnt1=1;iCnt1<=iNo;iCnt1++)
{

if((iNo%iCnt1)!=0)



{

    printf("%d\n",iCnt1);
    iSum1=iSum1+iCnt1;
}


}

return iSum-iSum1;
  }


int main()
{
    int iValue=0,iRet=0;
    printf("ENTER NUMBER TO DISPLAY  DIFFERENCE BETWEEN FACTORS AND NON FACTORS :\n");
    scanf("%d",&iValue);
iRet=FactDiff(iValue);
printf(" %d",iRet);
    return 0;
}