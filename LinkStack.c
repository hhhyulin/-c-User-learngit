#include <stdio.h>
#include "LinkStack.c"

//链栈(基于链表的)
initLStack(&s)   //初始化
{  top=(StackNode*)malloc(sizeof(StackNode));
   top->next=NULL;
   return SUCCESS;
 } 

isEmptyLStack(&s)  //判断链栈是否为空
{  if(top->next==NULL)
     return true;
   else return false;
}

getTopLStack(&s,&e)  //得到栈顶元素
{  *e=top->next->data;
   return SUCCESS;
}

clearLStack(&s)   //清空栈
{  LinkStackPrt p;
   while(s->top){
   	  p=s->top;
   	  s->top=s->top->next;
   	  s->count--;
   	  free(p);
   }
   return SUCCESS;
   

destroyLStack(&)   //销毁栈
{   clearLStack(&s)；
    free(&s);
	return SUCCESS；
} 

LStackLength(&s,&length)    //检测栈长度
{   *length=s->count;
    return SUCCESS;
}

pushLStack(&s,data)   //入栈
{   StackNode *q;
    q=(StackNode*)malloc(sizeof(StackNode));
    q->data=data;
    q->next=s->top->next;
    top->next=p;
    s->count+=1;
    return SUCCESS;
}

popLStack(&s,&data)   //出栈
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
	printf("请输入链栈的第1个元素：")；
	scanf("%d",&(p->data));
	p->next=NULL;
	lian->top->next=p;
	printf("请输入链栈的元素数目：")； 
	scanf("%d",&j);
	lian->count=j;
	for(i=1;i<j;i++){
		printf("请输入链栈的第%d个元素：",i+1)；
		scanf("%d",&(q->data));
		lian->top->next=q;
		q->next=p;
		p=q;
		q->data=0;
		q->next=NULL; 
	}
	
//还差一个界面 
	return 0;
}
