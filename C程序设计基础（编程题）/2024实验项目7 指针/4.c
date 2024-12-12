#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int num;
    float pay;
    struct Employee *next;
};

struct Employee* create() {
    struct Employee *head = NULL, *current = NULL, *newNode;
    int num;
    float pay;

    while (1) {
        scanf("%d %f", &num, &pay);
        if (num == 0 && pay == 0) break;
		newNode = (struct Employee*)malloc(sizeof(struct Employee)); // 动态分配内存以创建一个新的 Employee 结构体
        newNode->num = num;
        newNode->pay = pay;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            current = newNode;
        } else {
            current->next = newNode;
            current = newNode;
        }
    }

    return head;
}

void list(struct Employee *head) {
    printf("The linked list:\n");
    struct Employee *current = head;
    while (current != NULL) {
        printf("%d,%.2f\n", current->num, current->pay);
        current = current->next;
    }
}

int main() {
    struct Employee *head;
    head = create();
    list(head);

    struct Employee *current = head;
    struct Employee *temp;
    while (current != NULL) {
        temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}
