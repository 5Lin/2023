#include <stdio.h>
#include <string.h>

int main()
{
	char str1[20];
	char str2[] = "abcdef";
	strcpy(str1, str2);//���ַ���str2�����ݿ������ַ���str1��
	printf("%s", str1);
	return 0;
}
