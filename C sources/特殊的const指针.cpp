#include <stdio.h>

int main(){
    int a = 9, b = 10;
    const int * p = &a;
    *p = 20;   //����ֱ�ӱ�����Ϊ��const��ǵ�ָ�룬��ָ��ַ�ϵ�ֵ���������޸�
  	p = &b;   //����ָ��ָ��ĵ�ַ�ǿ��Է����ı��
}
