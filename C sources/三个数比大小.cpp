#include<stdio.h>
int main()
{
	int a,b,c,temp;
	printf("��������������\n");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b) //b>a
	{
	temp=a;
	a=b;
	b=temp;
	}
	if(b>c) //c>b
	{
	temp=b;
	b=c;
	c=temp;
	}
	if(a>c) //c>a
	{
	temp=a;
	a=c;
	c=temp;
	}
	printf("��ʱ��˳������Ӧ��Ϊ%d,%d,%d\n",a,b,c); //a>b>c
}
