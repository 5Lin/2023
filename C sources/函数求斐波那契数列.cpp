#include<stdio.h>
int calfbo(int,int,int);
int main(){
	int fbo;		
	printf("��������Ҫ��ڼ�λ쳲���������\n");		//1,1,2,3,5,8,13
	scanf("%d",&fbo);
	if(fbo==1||fbo==2)
	{
		fbo=1;
	}
	else{
	//fbo=3����쳲�����=2 				//1,1,2,3,5,8,13
		fbo=calfbo(1,1,fbo-2);
	}
	printf("�������쳲��������ǣ�%d\n",fbo);
}

//calfbo-detail-function  
int calfbo(int a,int b,int count){
	count--;
	//	��Ŀ�����   count��������������� 
//	printf("a=%d b=%d count=%d\n",a,b,count);
	return count != 0 ? calfbo(b,a+b,count) : a+b;
}
