#include <stdio.h>
#include "LinkStack.c"

//��ջ(���������)
initLStack(&s)   //��ʼ��
{  top=(StackNode*)malloc(sizeof(StackNode));
   top->next=NULL;
   return SUCCESS;
 } 

isEmptyLStack(&s)  //�ж���ջ�Ƿ�Ϊ��
{  if(top->next==NULL)
     return true;
   else return false;
}

getTopLStack(&s,&e)  //�õ�ջ��Ԫ��
{  *e=top->next->data;
   return SUCCESS;
}

clearLStack(&s)   //���ջ
{  LinkStackPrt p;
   while(s->top){
   	  p=s->top;
   	  s->top=s->top->next;
   	  s->count--;
   	  free(p);
   }
   return SUCCESS;
   

destroyLStack(&)   //����ջ
{   clearLStack(&s)��
    free(&s);
	return SUCCESS��
} 

LStackLength(&s,&length)    //���ջ����
{   *length=s->count;
    return SUCCESS;
}

pushLStack(&s,data)   //��ջ
{   StackNode *q;
    q=(StackNode*)malloc(sizeof(StackNode));
    q->data=data;
    q->next=s->top->next;
    top->next=p;
    s->count+=1;
    return SUCCESS;
}

popLStack(&s,&data)   //��ջ
{   StackNode *m; 
    if(isEmptyLStack(&s)==SUCCESS){
	   return ERROR;
     }
    else {
       m=top->next;
       *data=m->data;
	   s->top->next=m->next;
	   free(m);
	   return SUCCESS;
	}
	
int main(){
	StackNode *lian;
	ElemType *a;
	int *long;
	ElemType *datax;
	int i,j;
	initLStack(&lian);
	StackNode *p,*q;
	p=(StackNode*)malloc(sizeof(StackNode));
	q=(StackNode*)malloc(sizeof(StackNode));
	printf("��������ջ�ĵ�1��Ԫ�أ�")��
	scanf("%d",&(p->data));
	p->next=NULL;
	lian->top->next=p;
	printf("��������ջ��Ԫ����Ŀ��")�� 
	scanf("%d",&j);
	lian->count=j;
	for(i=1;i<j;i++){
		printf("��������ջ�ĵ�%d��Ԫ�أ�",i+1)��
		scanf("%d",&(q->data));
		lian->top->next=q;
		q->next=p;
		p=q;
		q->data=0;
		q->next=NULL; 
	}
	
//����һ������ 
	return 0;
}
