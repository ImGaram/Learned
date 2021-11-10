#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

//Q
//ť�� ����ü�� ����
typedef int element;
typedef struct {
	element queue[MAX_SIZE];
	int front, rear;
}queueType;

//��ȭ����, ������� error ó��
void error(char* message) {
	fprintf(stderr, "%s\n", message);
	exit(1);
}

//�ʱ�ȭ �Լ�
void init(queueType* q) {
	q->front = q->rear = 0;
	//queue�� rear�� 0�� ����Ŵ
}

//���� �Լ�
void enqueue(queueType* q, element item) {
	if ((q->rear + 1) % MAX_SIZE == q->front) {
		error("ť�� ��ȭ ������");
	}
	q->rear = (q->rear + 1) % MAX_SIZE;
	q->queue[q->rear] = item;
}

//���� �Լ�
element dequeue(queueType* q) {
	if (q->front==q->rear)
	{
		error("ť�� ���� �����Դϴ�");
	}
	q->front = (q->front + 1) % MAX_SIZE;
	return q->queue[q->front];
}

int main(void) {
	queueType q;
	init(&q);
	enqueue(&q, 1);
	enqueue(&q, 2);
	enqueue(&q, 3);
	enqueue(&q, 4);
	enqueue(&q, 5);
}