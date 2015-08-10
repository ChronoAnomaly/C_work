
#include <stdlib.h>
#include <stdio.h>
#include <time.h>


typedef struct Node
{
	int data;
	struct Node* next;
} Node;


int main()
{
	int i;
	Node* root;
	Node* ptr;

	root = malloc(sizeof(Node));
	srand(time(NULL));
	
	root->data = rand();
	root->next = NULL;
	ptr = root;

	for(i = 0; i < 5; i++) {

		ptr->next = malloc(sizeof(Node));
		ptr = ptr->next;
		ptr->data = rand();
	}
	
	ptr = root;

	while(ptr->next != NULL) {

		printf("Data is: %d\n", ptr->data);
		ptr = ptr->next;
	}

	free(root);

	return EXIT_SUCCESS;
}
