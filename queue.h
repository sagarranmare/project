
typedef struct node {
	char *data;
	//int i;
	struct node *next;
}node;
typedef struct queue {
	node *head, *tail;
}queue;
void qinit(queue *q);
void enqueue(queue *q, char *name );
char *dequeue(queue *q);
int qempty(queue *q);
int qfull(queue *q);
int chk(queue *q,char *seat);
