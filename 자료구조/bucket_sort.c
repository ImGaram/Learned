#include <stdio.h>
#include <stdlib.h>

void BucketSort(int* arr, int n)
{
    int i, j = 0;
    int* count = (int*)malloc(sizeof(int) * n); // ��Ŷ

    // count �ʱ�ȭ
    for (i = 0; i < n; i++)
        count[i] = 0;

    // arr�� �ߺ��Ǵ� �� ī��Ʈ
    for (i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // ������
    for (i = 0; i < n; i++)
    {
        for (; count[i] > 0; count[i]--) {  // count i��° �ε����� 0�� �ɶ����� �ݺ�
            arr[j++] = i;
        }
    }
}

void Output(int* arr, int n)    // �迭 ���
{
    int i;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = { 1, 3, 4, 6, 4, 2, 9, 1, 2, 9 };
    int n = 10;
    int i;

    printf("���� �� : ");
    Output(arr, n);

    BucketSort(arr, n);

    printf("���� �� : ");
    Output(arr, n);

    return 0;
}