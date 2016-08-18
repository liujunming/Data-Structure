#define SKIPLIST_MAX_LEVEL 6

//定义结点
typedef struct snode {
    int key;
    int value;
    struct snode **forward;
} snode;

//定义跳跃表
typedef struct skiplist {
    int level;
    struct snode *header;
} skiplist;

skiplist *skiplist_init(skiplist *list);
static int rand_level();
int skiplist_insert(skiplist *list, int key, int value);
snode *skiplist_search(skiplist *list, int key);
static void skiplist_node_free(snode *x);
int skiplist_delete(skiplist *list, int key);
void skiplist_free(skiplist *list);
void skiplist_dump(skiplist *list);
