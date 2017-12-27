/*
静态数组实现的队列。使用的是“不完全填满数组”的技巧
 */

#include "queue_01.h"
#include <stdio.h>
#include <assert.h>

#define QUEUE_SIZE 100 /*队列中元素最大数量*/
#define ARRAR_SIZE (QUEUE_SIZE+1) /*数组的长度*/

/*
用于存储队列元素的数组和指向队列头和尾的指针
 */
static QUEUE_TYPE queue[ARRAR_SIZE];
static size_t front = 1;
static size_t rear = 0;

void insert(QUEUE_TYPE value) {
	assert(!is_full());
	rear = (rear + 1)%QUEUE_SIZE;
	queue[rear] = value;
}

void delete(void) {
	assert(!is_empty());
	front = (front + 1)%QUEUE_SIZE;
}


QUEUE_TYPE first(void) {
	assert(!is_empty());
	return queue[front];
}

int is_empty(void) {
	return (rear+1) % QUEUE_SIZE == front;
}

int is_full(void) {
	return (rear+2) % QUEUE_SIZE == front;
}