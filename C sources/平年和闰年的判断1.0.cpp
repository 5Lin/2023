#include<stdio.h>
int main()
{
	int years;
	while(true){
	printf("please input a year��");
	scanf("%d",&years);
	if(years%400==0||years%100==0||years%4==0)
	printf("����������\n");
	else
	printf("���겻������\n");
	char Y,N,next;
	printf("\n�Ƿ�����жϣ���Y/N)��");
	fflush(stdin);
	scanf("%c",&next);
	if(next=='Y'||next=='y')
	printf("\n�����ж�\n");
	if(next=='N'||next=='n')
	return 0;
}
}
