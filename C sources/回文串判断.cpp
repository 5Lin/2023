#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, len;
    int flag = 1;

    printf("�������ַ�����");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0; i < len / 2; i++) {
        if (tolower(str[i]) != tolower(str[len - i - 1])) {
            flag = 0;
            break;
        }
    }

    if (flag) {
        printf("����һ�����Ĵ�\n");
    } else {
        printf("�ⲻ��һ�����Ĵ�\n");
    }

    return 0;
}

