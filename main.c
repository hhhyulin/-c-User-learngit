#include <stdio.h>
#include "linkedList.h"

int main()
{ LinkedList *numbers;
  int type;
  
  	DuLinkedList *lian;
    Status InitList_DuL(lian))
	if(Status==SUCCESS){
    	int i=1;
    	DuLNode *p,*q,*head;
    	int type;
    	head=(struct DuLNode *)malloc(sizeof(DuLNode));
     	p=head;
    	printf("请输入第1个数据");
    	for(i=1;i<N;i++){
    	    scanf("%d",&(p->data));
        	scanf("%d",&(p->data));
        	for(i=1;i<N;i++)
 	          {q=(struct DuLNode *)malloc(sizeof(DuLNode));
 	           p->next=q;
 	           printf("请输入第%d个数据:",i+1);
 	           scanf("%d",&(q->data));
 	           q->prior=p;
 	           q->next=NULL;
 	           p=q;
 	          }
 	      } 
    	
	printf("**********************************\n"
	"*     1.初始化                *\n"
	"*     2.销毁链表              *\n"
	"*     3.插入一个节点          *\n"
	"*     4.删除一个节点          *\n"
	"*     5.遍历链表              *\n"
	"*     6.在链表寻找一个数      *\n"
	"*     7.判断是否循环          *\n"
	"*     8.寻找链表中点          *\n"
	"*     0.退出                  *\n"
	"*****************************************\n" );
	
	printf("请按菜单选择（0-8）：");
	scanf("%d",&type);
	switch(type){
		case 0:break;
		case 1:{
		        InitList(numbers);
		        break;
		    }
		case 2:{DestroyList(numbers);
		    	break;
	     	}
		case 3:{InsertList(LNode *p, LNode *q);
			break;
	    	}
		case 4:{DeleteList(LNode *p, ElemType *e);
			break;
	    	}
		case 5:{TraverseList(numbers, void (*visit)(ElemType e)) ;
			break;
		    }
		case 6:{SearchList(numbers, ElemType e);
			break;
	    	}
		case 7:{IsLoopList(numbeers);
			break;
		    }
		case 8:{FindMidNode(numbers);
			break;
	    	}
	return 0;
}
	
  
  
