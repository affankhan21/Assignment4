#include<stdio.h>
  void  ReverseFactors(int iNo)
  {
int iCnt=0,iRev=0;
if(iNo<=0)
{

    return ;
}
for(iCnt=1;(iCnt<=iNo/2);iCnt++)
{

if(iNo%iCnt==0)



{

    printf("%d\n",iCnt);
}
}

  }


int main()
{
    int iValue=0;
    printf("ENTER NUMBER TO DISPLAY BFACTORS IN REVERSE:\n");
    scanf("%d",&iValue);
    ReverseFactors(iValue);

    return 0;
}