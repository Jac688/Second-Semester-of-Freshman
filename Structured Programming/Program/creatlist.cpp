#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>

//定义链表节点
typedef struct LNode
{ int data;
  struct LNode *next;
} LNode, *Linklist;

//创建链表
Linklist create()
{ int i,n; //i用于下面循环,n用来存放有效节点的字数
  Linklist p,L;
  printf("Please input N =");
  scanf("%d",&n);
  L= (Linklist)malloc(sizeof(LNode)); // 分配一个不存放有效数据的头结点
  L->next=NULL;
  for(i = 0; i < n; i++)
  { p = (Linklist)malloc(sizeof(LNode));//生成新节点
    scanf("%d",&p->data);//输入元素值
    p->next = L->next;
    L->next = p;
  }
  return L; //返回头节点 ;
}
//链表反转输出 
Linklist ReverseList(Linklist L,int st)    //st为1时输出结点数据
{ if(L->next!= NULL)
    ReverseList(L->next,1);
  if(st)printf("%d ", L->data);
  return L;
}

void put(Linklist L)
{ Linklist p;
  p = L->next;
  while(p != NULL)
  { printf("%d ", p->data);
    p = p->next;
  }
  printf("\n");
}

int main()
{ Linklist L;
  L=create();
  printf("A: "); put(L);
  printf("B: ");
  ReverseList(L,0);    //附加结点未保存数据，故第二参数为0
  return 0;
}
