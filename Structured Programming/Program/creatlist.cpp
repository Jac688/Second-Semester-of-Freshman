#include<stdio.h>
#include<stdlib.h>
#include <malloc.h>

//��������ڵ�
typedef struct LNode
{ int data;
  struct LNode *next;
} LNode, *Linklist;

//��������
Linklist create()
{ int i,n; //i��������ѭ��,n���������Ч�ڵ������
  Linklist p,L;
  printf("Please input N =");
  scanf("%d",&n);
  L= (Linklist)malloc(sizeof(LNode)); // ����һ���������Ч���ݵ�ͷ���
  L->next=NULL;
  for(i = 0; i < n; i++)
  { p = (Linklist)malloc(sizeof(LNode));//�����½ڵ�
    scanf("%d",&p->data);//����Ԫ��ֵ
    p->next = L->next;
    L->next = p;
  }
  return L; //����ͷ�ڵ� ;
}
//����ת��� 
Linklist ReverseList(Linklist L,int st)    //stΪ1ʱ����������
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
  ReverseList(L,0);    //���ӽ��δ�������ݣ��ʵڶ�����Ϊ0
  return 0;
}
