#include<stdio.h>
int main()
{
	int a,b,c,max;
	printf("��������������\n");
	scanf("%d,%d,%d",&a,&b,&c);
	max=a;
	if(max<b){
		max=b;
		b=a;
		a=max;
	}
	if(max<c){
		max=c;
		c=a;
		a=max;
	}
	if(b<c){
		max=c;
		c=b;
		b=max;
	}
	printf("��ʱ��˳������Ӧ��Ϊ%d,%d,%d\n",a,b,c); //a>b>c
}

