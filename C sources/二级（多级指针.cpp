#include <stdio.h>

int main(){
    int a = 20;
    int * p = &a;
    int ** pp = &p;

    printf("p = %p, a = %d", *pp, **pp);  //ʹ��һ��*��ʾ����ָ��ָ���ָ�����������ʹ��һ��*�����������ָ�������ָ����ͨ����
}
