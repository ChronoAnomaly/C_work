
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "node.h"

void next_node(struct Node** ptr);

int main()
{
	struct Node* head;
	struct Node* ptr;

	head = malloc(sizeof(struct Node));
	assert(head != NULL);
	head->data = 0;
	head->next = 0;

	ptr = head;

	ptr->next = malloc(sizeof(struct Node));
	ptr = ptr->next;
	ptr->data = 0;
	ptr->next = 0;

	ptr = head;

	next_node(&ptr);

	free(ptr);
	free(head);
	return EXIT_SUCCESS;
}


void next_node(struct Node** ptr)
{
	struct Node* tmp = *ptr;

	if(tmp->next != NULL) {
		*ptr = tmp->next;
	} else {
		printf("Currently on the last node.\n");
	}
}
