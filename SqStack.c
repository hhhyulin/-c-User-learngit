#include <stdio.h>
#include "SqStack.h"

//顺序栈(基于数组的)
initStack(&s,size)  //初始化栈
{  *elem=NULL;
   top=-1;
   size=0;
   return SUCCESS;
}

isEmptyStack(&s)   //判断栈是否为空
{  if(top==-1)
   return SUCCESS;
}

getTopStack(&s,&e)   //得到栈顶元素
{  if("s.top==-1"){
	pritnf("此栈已空") ；
	return SUCCESSELSE ;
   }
   else{
    *e=s.elem[s.top];
    return SUCCESS;
   }
}

clearStack(&s)   //清空栈
{  if(s.top==-1){
	return SUCCESS;
	else{
      top=-1;
      *elem=0;
      return SUCCESS;
  }

destroyStack(&s)  //销毁栈
{  s.top=0;
   s.elem=NULL;
   s.size=0;
   return SUCCESS;

stackLength(&s,&length)   //检测栈长度
{  *length=s.top+1;
   return SUCCESS;
}

pushStack(&s,data)  //入栈
{  if(s.top==s.size-1) return ERROR;
   else 
  {
     s.top=s.top+1;
     s.elem[s.top]=data;
     return SUCCESS;  
  }
}

popStack(&s,&data)   //出栈
{   top=top-1;
    size=size-1;
    return SUCCESS;
 } 
 
 
int main()
{
	SqStack *shun;
	ElemType *a;
	int long,nums,i;
    printf("顺序栈的长度是：")；
	scanf("%d",&size);
	initStack(&shun,size);
	printf("输入到栈的元素个数是：")；
	scanf("%d",&nums);
	for(i=0;i<nums;i++)
	  {  printf("请输入第%d个数据"，i+1);
	     scanf("%d",&(shun.elem));
	     shun.top++;
	  }	
	
	printf("**********************************\n"
	"*1.判断栈是否为空*\n"
	"*2.得到栈顶元素*\n"
	"*3.清空栈*\n"
	"*4.销毁栈*\n"
	"*5.检测栈长度*\n"
	"*6.入栈*\n"
	"*7.出栈*\n" 
	"*0.退出*\n" 
	"*****************************************\n" );
	
	printf("请按菜单选择（0-7）：");
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


