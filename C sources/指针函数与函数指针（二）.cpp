#include <stdio.h>

int sum(int (*p)(int, int), int a, int b){
    return p(a, b);
}

int sumImpl(int a, int b){   //�������ʵ����a + b
    return a + b;
}

int main(){
    int (*p)(int, int) = sumImpl;  //�õ�ʵ���Ǹ������ĵ�ַ
    printf("%d", sum(p, 10, 20));  
}
