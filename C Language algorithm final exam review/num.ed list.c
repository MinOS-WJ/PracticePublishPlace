#include <stdio.h>
#include <stdlib.h>

struct node {
	unsigned int num;
	long long int data;
	struct node *next;
};

struct node *creatlist() {
	struct node *head;
	struct node *current;
	struct node *temp;

	long long int t;
	int i = 1;
	while (scanf("%lld", &t)) {
		if (t != 0) {
			if (i == 1) {
				head = (struct node *)malloc(sizeof(struct node));
				head->data = t;
				head->num = i;
				head->next = NULL;
				temp = head;
			} else {
				current = (struct node *)malloc(sizeof(struct node));
				temp->next = current;
				current->data = t;
				current->num = i;
				current->next = NULL;
				temp = current;
			}
			i++;
		} else {
			break;
		}
	}
	return head;
}

void printlist(struct node *p) {
	while (1) {
		printf("%6u %12lld\n", p->num, p->data);
		p = p->next;
		if (p == NULL) {
			break;
		}
	}
}



int main() {
	printlist(creatlist());
	return 0;
}