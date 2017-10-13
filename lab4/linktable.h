/*
 * Created by xiayue on 2017/10/13
 */
#ifndef _LINK_TABLE_H_
#define _LINK_TABLE_H_
#include<pthread.h>
#define SUCCESS 0
#define FAILURE (-1)

/*
 * LinkTableNode Node Type
 */
typedef struct LinkTableNode
{
    struct LinkTableNode *pNext;
}tLinkTableNode;

/*
 * LinkTableNode Type
 */
typedef struct LinkTable
{
    tLinkTableNode *pHead;
    tLinkTableNode *pTail;
    int            SumOfNode;
}tLinkTable;

tLinkTable *CreatLinkTable();
int DelLinkTable(tLinkTable* pLinkTable);
int AddLinkTable(tLinkTable* pLinkTable,tLinkTableNode *pNode);
int DelLinkTableNode(tLinkTable* pLinkTable,tLinkTableNode *pNode);
tLinkTableNode * GetLinkTableHead(tLinkTable *pLinkTable);
tLinkTableNode * GetNextLinkTableNode(tLinkTable* pLinkTable,tLinkTableNode *pNode);
#endif
