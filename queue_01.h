/*
一个队列模块的接口
 */

#define QUEUE_TYPE int /* 队列元素的类型 */

/*
创建一个队列，参数指定队列可以存储的元素的最大数量
 */
void create_queue(size_t size);

/*
释放队列
 */
void destroy_queue(void);

/*
向队列添加一个元素
 */
void insert(QUEUE_TYPE value);

/*
从队列中移除一个元素，并将其丢弃
 */
void delete(void);

/*
返回队列中的第一个元素，且不改变原队列
 */
QUEUE_TYPE first(void);

/*
如果为空返回TRUE 否则为FALSE
 */
int is_empty(void);

/*
如果队列已满返回TRUE 否则返回FALSE
 */
int is_full(void);
