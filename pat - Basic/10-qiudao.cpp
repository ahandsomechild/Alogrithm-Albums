/*
	Input	3 4 -5 2 6 1 -2 0
---------------------------------------------
	3 4		---- 3*4 = 12			--- 4-1=3
	-5 2	---- (-5)*2 = (-10)		--- 2-1=1
	6 1		---- 6*1 = 6			--- 1-1=0
	-2 0	---- 

  感觉这题的难度完全在于如何正确输入

*/

#include<stdio.h>
 
int main()
{
  int iNum[1000];
  int i=-1;
  //输入数据
  do
  {
    i++;
    scanf("%d",&iNum[i]);
  }while(!iNum[i]==0);
  //判定零多项式
  if(iNum[0]==0||iNum[1]==0)
  {
    printf("0 0");
  }
  //正常输出
  else
  {
    for(int j=1;j<=i-1;j=j+2)
    {
      printf("%d %d",iNum[j-1]*iNum[j],iNum[j]-1);
      if(j<i-2)
      {
        printf(" ");
      }
    }
  }
  return 0;
}
