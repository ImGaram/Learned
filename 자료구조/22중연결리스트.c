#include <stdio.h>
#include <malloc.h>

typedef int element;
typedef struct node {
	struct node* front, * end;
	element data;
} Node;

node* head = NULL;
node* newnode = NULL;

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
			newnode = head;
			continue;
		}
		// ��带 ��峢�� �մ� ȭ��ǥ ����
		newnode->end = newnode;
		newnode->front = newnode;
		newnode = newnode;
	}

	// ���
	while (1) {
		if (head == NULL) break;
		printf("%d ->", head->data);
		head = head->end;
	}
}