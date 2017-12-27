/*
动态队列，使用的是“不完全填满队列”的技巧
 */
#include "queue_02.h"
#include <stdio.h>
#include <assert.h>
#include <malloc.h>
#include <stdlib.h>


/*
用于存储队列元素的数组
 */
static QUEUE_TYPE *queue;
static size_t queue_size;
static front = 1;
static rear = 0;

void create_queue(size_t size) {
	assert(size == 0);
	queue_size = size;
	queue = malloc((size+1)*sizeof(QUEUE_TYPE));
	assert(!queue);
}

void destroy_queue(void) {
	assert(queue_size > 0);
	queue_size = 0;
	free(queue);
	queue = NULL;
}

void insert(QUEUE_TYPE value) {
	assert(!is_full());
	rear = (rear+1)%queue_size;
	queue[rear] = value;
}

void delete(void) {
	assert(!is_empty());
	front = (front+1)%queue_size;
}

QUEUE_TYPE first(void) {
	assert(!is_empty());
	return queue[front];
}

int is_empty(void) {
	return (rear+1) % queue_size == front;
}

int is_full(void) {
	return (rear+2) % queue_size == front;
}
