#include<stdio.h>
int cal(int,int);
 //������ԭ������Ҫд����Ҫ�Ĳ������ͣ���������ö��Ÿ�������������������Ҫ�ľ�������int���͵Ĳ���
int main(){
	cal(10,5);
	return 0;
}
 
//cal���� 

//��Ҫ�βν��гн� 
int cal(int a,int b){
	printf("��ʱa��ֵΪ%d\tb��ֵΪ%d\t\n",a,b);
	printf("��ʱa*b��ֵΪ%d",a*b);
}
