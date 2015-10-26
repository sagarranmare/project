typedef struct node {
	int i;
	char c;
	struct node *next, *prev;
}node;
typedef struct list {
	struct node *head, *tail;
	int length;
}list;
void init(list *l);
void add( list *l, char t,int s);
void chk(list *l, char t,int s);

