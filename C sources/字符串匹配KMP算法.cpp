#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char str2[100];
    char *ptr;

    printf("�������һ���ַ�����");
    scanf("%s", str1);

    printf("������ڶ����ַ�����");
    scanf("%s", str2);

    ptr = strstr(str1, str2);

    if (ptr == NULL) {
        printf("��һ���ַ����������ڶ����ַ���\n");
    } else {
        printf("��һ���ַ��������ڶ����ַ���\n");
    }

    return 0;
}

