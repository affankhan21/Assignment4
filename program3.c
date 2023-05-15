#include<stdio.h>
  void  NonFactors(int iNo)
  {
int iCnt=0;
if(iNo<=0)
{

    return ;
}
for(iCnt=1;iCnt<=iNo;iCnt++)
{

if((iNo%iCnt)!=0)



{

    printf("%d\n",iCnt);
}
}

  }


int main()
{
    int iValue=0;
    printf("ENTER NUMBER TO DISPLAY NON FACTORS IN :\n");
    scanf("%d",&iValue);
 NonFactors(iValue);

    return 0;
}