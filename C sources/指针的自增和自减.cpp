#include <stdio.h>

int main(){
    char str[] = "Hello World!";
    char * p = str;

    p++;  //�������൱��ָ��ָ���˵ڶ���Ԫ�صĵ�ַ

    printf("%c", *p);   //���������ӡ�ľ��ǵڶ���Ԫ�ص�ֵ��
}
