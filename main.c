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
    	printf("�������1������");
    	for(i=1;i<N;i++){
    	    scanf("%d",&(p->data));
        	scanf("%d",&(p->data));
        	for(i=1;i<N;i++)
 	          {q=(struct DuLNode *)malloc(sizeof(DuLNode));
 	           p->next=q;
 	           printf("�������%d������:",i+1);
 	           scanf("%d",&(q->data));
 	           q->prior=p;
 	           q->next=NULL;
 	           p=q;
 	          }
 	      } 
    	
	printf("**********************************\n"
	"*     1.��ʼ��                *\n"
	"*     2.��������              *\n"
	"*     3.����һ���ڵ�          *\n"
	"*     4.ɾ��һ���ڵ�          *\n"
	"*     5.��������              *\n"
	"*     6.������Ѱ��һ����      *\n"
	"*     7.�ж��Ƿ�ѭ��          *\n"
	"*     8.Ѱ�������е�          *\n"
	"*     0.�˳�                  *\n"
	"*****************************************\n" );
	
	printf("�밴�˵�ѡ��0-8����");
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
	
  
  
