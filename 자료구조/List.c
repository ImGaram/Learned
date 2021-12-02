#include <stdio.h>
#include <malloc.h>


void dolong(num);
void insert(data, newnode);
void dolong2(num);
void del(int idx);
void sunhue(int cnt);   // ��ȸ

// ����list
typedef struct listnode {
    int data;
    struct listnde* link;
}Node;

Node* head = NULL;
Node* newnode = NULL;
int main() {
    int number;
    int d;    //����
    while (1) {
        scanf_s("%d", &number);
        Node* newnode = (Node*)malloc(sizeof(Node));
        newnode->data = number;
        newnode->link = NULL;
        if (number == -1) {
            break;
        }
        insert(number, newnode);
    }
    printf("������ �� : ");
    scanf_s("%d", &d);
    del(d);
    int sm; //��ȸ�� ��
    printf("��ȸ�� �� : ");
    scanf_s("%d", &sm);
    sunhue(sm);
    //dolong2(head);
}

// head, tail ����
void insert(int data, Node* newnode) {
    if (head == NULL) {
        head = newnode;    // ���ο� node
    }
    else {
        newnode->link = newnode;
    }
    newnode = newnode;
    newnode->link = head;
}

void sunhue(int cnt) {  // ��ȸ
    Node* temp = head;
    for (int i = 0; i < cnt - 1; i++) {
        temp = temp->link;
    }
    printf("%d", temp->data);
}

// ����Ʈ ����
void del(int idx) {
    if (idx == 0) {
        Node* temp = head;
        head = head->link;
        newnode->link = head;
        free(temp);
    }
    else {
        Node* sak = head;    // ������ ��ġ
        Node* jjaphead = head;
        for (int i = 0; i < idx; i++) {
            sak = sak->link;
        }
        for (int i = 0; i < idx - 1; i++) {
            jjaphead = jjaphead->link;    // �� dd
        }
        jjaphead->link = sak->link;
        free(sak);
    }

}

// ���
void dolong2(Node* head) {
    if (head != NULL) {
        printf("%d -> ", head->data);
        dolong2(head->link);
    }
    else {
        printf("null");
        return;
    }
}