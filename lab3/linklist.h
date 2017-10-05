typedef struct DataNode
{
    char *cmd;
    char *desc;
    int (*handler)();
    struct DataNode *next;
}tDataNode;

/* find a command in th linklist and return the pointer */
tDataNode* FindCmd(tDataNode *head,char *cmd);

/* show all commands */
int ShowAllCmd(tDataNode *head);

/* show local time */
int ShowLocalTime();
