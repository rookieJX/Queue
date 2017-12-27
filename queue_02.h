/*
一个队列模块的接口
 */

#define QUEUE_TYPE int /*队列元素类型*/

/*
创建队列大小
 */
void create_queue(size_t size);

/*
释放队列
 */
void destroy_queue(void);

/*
返回队列中的第一个元素
 */
QUEUE_TYPE first(void);

/*
队列中插入一个元素
 */
void insert(QUEUE_TYPE value);

/*
队列中删除一个元素
 */
void delete(void);

/*
队列为空返回TRUE 否则返回FLASE
 */
int is_empty(void);

/*
队列已满返回TRUE 否则返回FLASE
 */
int is_full(void);