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
}node;

node* head = NULL;
node* tail = NULL;
int main() {
    int number;
    int d;    //����
    while (1) {
        scanf_s("%d", &number);
        node* newnode = (node*)malloc(sizeof(node));
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
void insert(int data, node* newnode) {
    if (head == NULL) {
        head = newnode;    // ���ο� node
    }
    else {
        tail->link = newnode;
    }
    tail = newnode;
    tail->link = head;
}

void sunhue(int cnt) {  // ��ȸ
    node* temp = head;
    for (int i = 0; i < cnt - 1; i++) {
        temp = temp->link;
    }
    printf("%d", temp->data);
}

// ����Ʈ ����
void del(int idx) {
    if (idx == 0) {
        node* temp = head;
        head = head->link;
        tail->link = head;
        free(temp);
    }
    else {
        node* sak = head;    // ������ ��ġ
        node* jjaphead = head;
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
void dolong2(node* head) {
    if (head != NULL) {
        printf("%d -> ", head->data);
        dolong2(head->link);
    }
    else {
        printf("null");
        return;
    }
}