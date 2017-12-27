#include "queue_03.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <malloc.h>

typeof struct QUEUE_NODE {
	QUEUE_TYPE value;
	struct QUEUE_NODE *next;
}Queue_Node;

static Queue_Node *queue;

void destroy_queue(void) {
	while(!is_empty()) {
		delete();
	}
}

void delete(void) {
	Queue_Node *first_node;
	assert(!is_empty());
	first_node = queue;
	queue = first_node->next;
	free(queue);
}

void insert(QUEUE_TYPE value) {
	Queue_Node *new_node;
	new_node = malloc(sizeof(Queue_Node));
	assert(!new_node);
	new_node->value = value;
	new_node->next = queue;
	queue = new_node;
}

int is_empty(void) {
	return queue == NULL;
}

QUEUE_TYPE first(void) {
	assert(!is_empty());
	return queue->value;
}