#include<stdio.h>
int main()
{
int i,j,k,high;
printf("������߶ȣ�");
scanf("%d",&high);
for(i=1;i<=high;i++)	//��i���Ƹ߶�high 
{
for(j=1;j<=high-i;j++) //j����ÿ��Ŀո����� 
{
printf(" ");
 } 
for(k=1;k<=2*i-1;k++)  //��2*i�ĳ�2*high�в�ͬЧ��    ����2*highʱ������Ч�� 
{
if(k==1||k==2*i-1||i==high)  //��i==highɾȥ���ɵõ�һ�õ�һ���޵׿�Ľ����� 
{
printf("*"); 
} 
else
{
printf(" ");
}
}
printf("\n"); 
}
getchar(); 
return 0;
}
