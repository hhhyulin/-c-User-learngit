#include "../head/linkedList.h"
#include <stdio.h> 
#include <stdlib.h>
/**
 *  @name        : Status InitList(LinkList *L);
 *	@description : initialize an empty linked list with only the head node without value
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status InitList(LinkedList *L) {
	L->data=0;
    L->*next=NULL;
    return (SUCCESS);
}

/**
 *  @name        : void DestroyList(LinkedList *L)
 *	@description : destroy a linked list, free all the nodes
 *	@param		 : L(the head node)
 *	@return		 : None
 *  @notice      : None
 */
void DestroyList(LinkedList *L) { 
	if(L==NULL) continue;
	while(L) 	{
	   p=L->next;
	   free(L);
	   L=p;
	  }
}

/**
 *  @name        : Status InsertList(LNode *p, LNode *q)
 *	@description : insert node q after node p
 *	@param		 : p, q
 *	@return		 : Status
 *  @notice      : None
 */
Status InsertList(LNode *p, LNode *q) {
	q->next=p->next;
    p->next=*q;
    return (SUCCESS);
}
/**
 *  @name        : Status DeleteList(LNode *p, ElemType *e)
 *	@description : delete the first node after the node p and assign its value to e
 *	@param		 : p, e
 *	@return		 : Status
 *  @notice      : None
 */
Status DeleteList(LNode *p, ElemType *e) {
	p->next=*e;
	return (SUCCESS);
}

/**
 *  @name        : void TraverseList(LinkedList L, void (*visit)(ElemType e))
 *	@description : traverse the linked list and call the funtion visit
 *	@param		 : L(the head node), visit 
 *	@return		 : None
 *  @notice      : None
 */
void TraverseList(LinkedList L, void (*visit)(ElemType e)) {
	LNode *pnode=*L;
	while(*pnode!=NULL)
	{ (*visit)(pnode->data)
	  pnode=pnode->next;
	}
}

/**
 *  @name        : Status SearchList(LinkedList L, ElemType e)
 *	@description : find the first node in the linked list according to e 
 *	@param		 : L(the head node), e
 *	@return		 : Status
 *  @notice      : None
 */
Status SearchList(LinkedList L, ElemType e) {
	LNode N;
    if(L->data==e) return(success);
    else {while(N->next!=NULL) N->next=L->next;
      if(N->data==e) return(success);
      else N=N->next; 
	if(N->next=NULL)  return (error);   
	}
} 

/**
 *  @name        : Status ReverseList(LinkedList *L)
 *	@description : reverse the linked list 
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status ReverseList(LinkedList *L) {
    LNode dummy=new LNode;
    LNode.next=L;
    while(pCur!=NULL){
      LNode pNex=pCur.next;
      pCur.next=dummy.next;
      dummmy.next=pCur;
	  pCur=pNex;}
    return (SUCCESS);
} 

/**
 *  @name        : Status IsLoopList(LinkedList L)
 *	@description : judge whether the linked list is looped
 *	@param		 : L(the head node)
 *	@return		 : Status
 *  @notice      : None
 */
Status IsLoopList(LinkedList L) {
	if(!head) return error;
	node *fast,*slow;
	fast=slow=head;
	while(1){
	  if(!fast||!fast->next) return error;
	  else if(fast==slow||fast->next==slow)
	     return true;
	  else{
	  	 slow=slow->next;
	  	 fast=fast->next->next;
	  }
	}	
}

/**
 *  @name        : LNode* ReverseEvenList(LinkedList *L)
 *	@description : reverse the nodes which value is an even number in the linked list, input: 1 -> 2 -> 3 -> 4  output: 2 -> 1 -> 4 -> 3
 *	@param		 : L(the head node)
 *	@return		 : LNode(the new head node)
 *  @notice      : choose to finish 
 */
LNode* ReverseEvenList(LinkedList *L) {
	
}

/**
 *  @name        : LNode* FindMidNode(LinkedList *L)
 *	@description : find the middle node in the linked list
 *	@param		 : L(the head node)
 *	@return		 : LNode
 *  @notice      : choose to finish 
 */
LNode* FindMidNode(LinkedList *L) {
	LNode *slow,*fast;
	slow=L,fast=L;
	while(fast&&fast->next)
	  slow=slow->next;
	  fast=fast->next->next;
    return slow;
}
