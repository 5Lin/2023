
#include <stdio.h> 
int main()
{
	//while�ⷨ����for��� 
	int i=100;
	int a,b,c;//aΪ��λ���֣�bΪʮλ���֣�cΪ��λ���� 
	while(i>=100 && i<1000)
	{
		a=i%10;
		b=i/10%10;
		c=i/100;
 
  		if(i==a*a*a+b*b*b+c*c*c)
		{
	     	   printf("%d\n",i);
		}
		i++;
	}
	return 0;
}
