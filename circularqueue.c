#include<stdio.h>
#include<stdlib.h>
#define SIZE 10
int front,rear=0;
int que [SIZE];
void main()
{
  void insertq(int);
  int deleteq();
  int searchq();
  int data,opt,ans;
  do
  {
    printf("1.insert\n");
    printf("2.delete\n");
    printf("3.search\n");
    printf("4.exit\n");
    printf("your option:");
    scanf("%d",&opt);
    switch(opt)
    {
      case 1:printf("data:");
             scanf("%d",&data);
              insertq(data);
              break;
      case 2:
            printf("delete data=%d \n",deleteq());
            break;
      case 3:printf("search data:");
             scanf("%d",&data);
             ans=searchq(data);
             if(ans==1)
             printf("data found\n");
             else
              printf("data not found\n");
              break;
       case 4:exit(0);
      }
   }
   while(1);
 }
 void insertq(int item)
 {
  int trear=rear;
  trear=(trear+1)%SIZE;
  if (trear==front)
    printf("queue is full\n");
  else
    {
      rear=trear;
      que[rear]=item;
    }
  }
  int deleteq()
  {
    if(front==rear)
    {
      printf("queue is empty\n");
      exit(1);
    }
    else 
    {
      front=(front+1)%SIZE;
      return que[front];
    }
  }
  int searchq(int item)
  {
    int tfront;
    tfront=(tfront+1)%SIZE;
    while(tfront!=rear&&que[tfront!=item])
      tfront=(tfront+1)%SIZE;
      if(que[tfront]==item)
        return 1;
      else
        return 0;
}
    
