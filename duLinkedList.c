#include "../head/duLinkedList.h"

/**
 *  @name        : DuLinkedList Create_DuL()
 *	@description : create an DuLinkedList
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
    DuLinkedList *Create_DuL(){
 	struct DuLNode *head,*p,*q; 
 	p=NULL;
 	q=NULL;
 	int i;
 	head=(struct DuLNode *)malloc(sizeof(DuLNode));
 	head->next=NULL;
 	head->prior=NULL;
 	p=head;
 	printf("请输入第1个数据");
 	scanf("%d",&(p->data));
 	for(i=1;i<N;i++)
 	  {q=(struct DuLNode *)malloc(sizeof(DuLNode));
 	   p->next=q;
 	   printf("请输入第%d个数据:",i+1);
 	   scanf("%d",&(q->data));
 	   q->prior=p;
 	   q->next=NULL;
 	   p=q;
 	   return(head);
	   }
    }

/**
 *  @name        : Status InitList_DuL(DuLinkedList *L)
 *	@description : initialize an empty linked list with only the head node
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
    InitList(&L) {
	L=(DuLNode*)malloc(sizeof(DuLNode));
	L->next=NULL; 
	L->prior=NULL;
	if((L->next==NULL)&&(L->prior==NULL)) 
	  return SUCCESS;
	else 
	  return ERROR;
}

/**
 *  @name        : void DestroyList_DuL(DuLinkedList *L)
 *	@description : destroy a linked list
 *	@param		 : L(the head node)
 *	@return		 : status
 *  @notice      : None
 */
void DestroyList_DuL(DuLinkedList *L) {
	DuLNode *temp;
	DuLNode *pre;
	temp=L->next;
	while(temp!=NULL){
		pre=temp;
		temp=temp->next;
		free(pre);
	}
	free(L);
	return SUCCESS;
}

/**
 *  @name        : Status InsertBeforeList_DuL(DuLNode *p, LNode *q)
 *	@description : insert node q before node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */
Status InsertBeforeList_DuL(DuLNode *p, DuLNode *q) {
	q->next=p;
	q->prior=p->prior;
	p->prior->next=q;
	p-prior=q;
	return SUCCESS;
}

/**
 *  @name        : Status InsertAfterList_DuL(DuLNode *p, DuLNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : status
 *  @notice      : None
 */
Status InsertAfterList_DuL(DuLNode *p, DuLNode *q) {
	q->prior=p;
	q->next=p->next;
	p->next->prior=q;
	p->next=q;
}

/**
 *  @name        : Status DeleteList_DuL(DuLNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : status
 *  @notice      : None
 */
Status DeleteList_DuL(DuLNode *p, ElemType *e) {
    p->next->next->prior=p;
    p->next=p->next->next; 
    return SUCCESS;
}
 
/**
 *  @name        : void TraverseList_DuL(DuLinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit 
 *	@return		 : Status
 *  @notice      : None
 */
void TraverseList_DuL(DuLinkedList L, void (*visit)(ElemType e)) {
	DuLNode *temp;
	temp=L;
	while(temp){
		void(*visit)(ElemType e);
		temp=temp->next;
	}
	return SUCCESS;
}

