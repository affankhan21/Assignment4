#include<stdio.h>


int iMultFact(int iNo)
{






    int iCnt=0; int isum=1;
printf("factors are :\n");
for(iCnt=1;iCnt<=(iNo/2);iCnt++)
{

if((iNo%iCnt)==0)
{


printf("%d\n",iCnt);
isum=isum*iCnt;

}


}


 return isum;

}


int main()
{
int iValue=0;
int iRet=0;
printf("ENTER NUMBER :\n");
scanf("%d",&iValue);
iRet=iMultFact(iValue);
printf("MULTIPLICATION OF number  %d FACTORS IS %d ",iValue ,iRet);
return 0;







}