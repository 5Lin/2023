#include<stdio.h>
int main(){
	int array[10]={2,4,5,1,3,7,6,8,9,10};
	int temp;
	for(int i=0;i<9;i++)	//ð�������ѭ��������=��������-1 
	{
		
		for(int j=0;j<10-1-i;j++)	//��Ϊÿһ�ֶ��Ὣ��������������ʴˡ� 
		{
		if(array[j]>array[j+1])
		{
		
		temp=array[j];				//���н��� 
		array[j]=array[j+1];		//���н��� 
		array[j+1]=temp;			//���н���
		}	
		}
	 } 
	 for(int i=0;i<10;i++)
	 {
	 	printf("%d\t",array[i]);	//������ 
	 }
}
