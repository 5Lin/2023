#include <stdio.h>

void quickSort(int arr[], int left, int right){  //arr�����飬left����ʼ�±꣬right�ǽ����±�
    //��ʵ����һ����
}

int main() {
    int arr[] = {4, 3, 8, 2, 1, 7, 5, 6, 9, 0};
    quickSort(arr, 0, 9);  //10�������±����0-9
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
}
