#include <stdio.h>
#include "SqStack.h"

//˳��ջ(���������)
initStack(&s,size)  //��ʼ��ջ
{  *elem=NULL;
   top=-1;
   size=0;
   return SUCCESS;
}

isEmptyStack(&s)   //�ж�ջ�Ƿ�Ϊ��
{  if(top==-1)
   return SUCCESS;
}

getTopStack(&s,&e)   //�õ�ջ��Ԫ��
{  if("s.top==-1"){
	pritnf("��ջ�ѿ�") ��
	return SUCCESSELSE ;
   }
   else{
    *e=s.elem[s.top];
    return SUCCESS;
   }
}

clearStack(&s)   //���ջ
{  if(s.top==-1){
	return SUCCESS;
	else{
      top=-1;
      *elem=0;
      return SUCCESS;
  }

destroyStack(&s)  //����ջ
{  s.top=0;
   s.elem=NULL;
   s.size=0;
   return SUCCESS;

stackLength(&s,&length)   //���ջ����
{  *length=s.top+1;
   return SUCCESS;
}

pushStack(&s,data)  //��ջ
{  if(s.top==s.size-1) return ERROR;
   else 
  {
     s.top=s.top+1;
     s.elem[s.top]=data;
     return SUCCESS;  
  }
}

popStack(&s,&data)   //��ջ
{   top=top-1;
    size=size-1;
    return SUCCESS;
 } 
 
 
int main()
{
	SqStack *shun;
	ElemType *a;
	int long,nums,i;
    printf("˳��ջ�ĳ����ǣ�")��
	scanf("%d",&size);
	initStack(&shun,size);
	printf("���뵽ջ��Ԫ�ظ����ǣ�")��
	scanf("%d",&nums);
	for(i=0;i<nums;i++)
	  {  printf("�������%d������"��i+1);
	     scanf("%d",&(shun.elem));
	     shun.top++;
	  }	
	
	printf("**********************************\n"
	"*1.�ж�ջ�Ƿ�Ϊ��*\n"
	"*2.�õ�ջ��Ԫ��*\n"
	"*3.���ջ*\n"
	"*4.����ջ*\n"
	"*5.���ջ����*\n"
	"*6.��ջ*\n"
	"*7.��ջ*\n" 
	"*0.�˳�*\n" 
	"*****************************************\n" );
	
	printf("�밴�˵�ѡ��0-7����");
	scanf("%d",&type);
	
	switch(type){
	   case 1:isEmptyStack(&shun);break;
	   case 2:getTopStack(&shun,&a);break;
	   case 3:clearStack(&shun);
	   case 4:destroyStack(&shun);
	   case 5:stackLength(&shun,&long)
	   case 6:pushStack(&shun,data);
	   case 7:popStack(&shun,&data);
	}
    return 0;
}


