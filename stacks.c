#include<stdio.h>
#include<stdlib.h>
#define size 10
int stack[size];
int sp=-1;

void main() {
  int opt,data;
  void push(int);
  int pop();
  void display();
  do{
    printf("1.push\n");
     printf("2.pop\n");
      printf("3.display\n");
       printf("4.exit\n");
        printf("Enter your option:");
    scanf("%d",&opt);
    switch(opt){
      case 1:printf("data:");
            scanf("%d",&data);
            push(data);
            break;
       case 2:data=pop();
            printf("popedItem=%d\n",data);
            break;
      case 3:display();
          break;
      case 4:printf("exit\nTHANKYOU");
            exit(0);
    }
  }
    while(1);
}



void push(int data){
    if (sp==size-1) 
        printf(" fullStack \n");
        else
            stack[++sp]=data;
}
   
int pop() {
    if (sp==-1) {
        printf("empty stack \n");
        exit(1);
    }
    return stack[sp--];
}
    



void display() {
    int tsp=sp;
      printf("stack contents:\n");
    while(tsp!=-1){
        printf("%d\n",stack[tsp]);
      tsp--;
    }
    if(sp==-1){
      printf("empty stack\n");
      exit(1);
    }
    printf("\n");
}



