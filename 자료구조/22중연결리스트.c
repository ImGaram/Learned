#include <stdio.h>
#include <malloc.h>

typedef int element;
typedef struct node {
	struct node* front, * end;
	element data;
} node;

node* head = NULL;
node* tail = NULL;

int main() {
	int data;

	while (1) {
		scanf_s("%d",&data);
		if (data<0)
			break; 

		// ��� ����
		node* newnode = (node*)malloc(sizeof(node));
		if (head==NULL)	{
			head = newnode;
			tail = head;
			continue;
		}
		// ��带 ��峢�� �մ� ȭ��ǥ ����
		tail->end = newnode;
		newnode->front = tail;
		tail = newnode;
	}

	// ���
	while (1) {
		if (head == NULL) break;
		printf("%d ->", head->data);
		head = head->end;
	}
}