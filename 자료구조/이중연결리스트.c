#include <stdio.h>
#include <malloc.h>

// ���߿���list
typedef struct listnode {
    struct listnode* Firstlink;
    int data;
    struct listnde* link;
}node;

node* head = NULL;
node* tail = NULL;

void insert(int data, node* newnode);
void right(char move);

int main() {
    int number = 0;
    int d;    //tkrwp
    while (1) {
        scanf_s("%d",&number);
        node* newnode = (node*)malloc(sizeof(node));
        newnode->data = number;
        newnode->link = NULL;
        newnode->Firstlink = NULL;
        if (number==-1)
            break;
        insert(number, newnode);
    }
    node* temp = head;
    char move;
    while (1) {
        printf("������ ��ġ(R/L, ����: N) : ");
        scanf_s("\n%c", &move);
        if (temp->link == NULL || temp->Firstlink == NULL) {
            printf("null\n");
        }
        else if (move == 'R') {
            temp = temp->link;
            printf("������ ����Ʈ = %d\n", temp->data);
        }
        else if (move == 'L') {
            temp = temp->Firstlink;
            printf("������ ����Ʈ = %d\n", temp->data);
        }
        else if (move =='N')
        {
            break;
        }

    }
    //printlist(temp);
}

// head, tail ����
void insert(int data, node* newnode) {
    if (head == NULL) {
        head = newnode;
    }
    else {
        tail->link = newnode;
        newnode->Firstlink = tail;
    }
    tail = newnode;
}

// ���
//void printlist(node* temp) {
//    
//    tlqkf(move);
//}

//void tlqkf(char move) {
//    
//}
