/*
一个队列模块的接口
 */

#define QUEUE_TYPE int /*队列元素类型*/

/*
插入一条元素
 */
void insert(QUEUE_TYPE vlaue);

/*
删除一条元素
 */
void delete(void);

/*
返回队列当前的元素
 */
QUEUE_TYPE first(void);

/*
如果队列为空返回TRUE 否则返回FALSE
 */
int is_empty(void);

/*
释放队列内存
 */
void destroy_queue(void);