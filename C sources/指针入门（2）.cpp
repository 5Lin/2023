#include <stdio.h>

int main(){
    int a = 666;
    int * p = &a;

    *p = 999;   //ͨ��*�����ʶ�Ӧ��ַ��ֵ����ͨ����ֵ�����������޸�

    printf("a��ֵΪ��%d", a);
}
