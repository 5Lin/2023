#include <stdio.h>

struct Student {
    int id;
    int age;
    char * name;
};

int main() {
    struct Student arr[3] = {{1, 18, "С��"},   //����һ���ṹ�����͵����飬��ʵ�ͻ�����������������һ����
                             {2, 17, "С��"},   //����ṹ�������ö��Ÿ���
                             {3, 18, "С��"}};
}
