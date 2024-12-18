#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int uset[]={1,2,3,4,5,6,7,8,9,10};
int SIZE=9;
typedef struct bit {
    unsigned char x: 1;
} bit;
void readset(struct bit s[],int n);
void printset(struct bit s[]);
void set_union(struct bit a[],struct bit b[],struct bit c[]);
void set_intersection(struct bit a[],struct bit b[],struct bit c[]);
void set_difference (struct bit a[],struct bit b[],struct bit c[]);
int main() {
    bit a[10]={0},b[10]={0},c[10]={0};
    int n;
    printf("Number of elements for set A: ");
    scanf("%d",&n);
    readset(a,n);
    printf("Number of elements for set B: ");
    scanf("%d",&n);
    readset(b,n);
    printf("Set A: ");
    printset(a);
    printf("Set B: ");
    printset(b);
    set_union(a,b,c);
    printf("Set Union: ");
    printset(c);
    set_intersection(a,b,c);
    printf("Set intersection: ");
    printset(c);
    set_difference(a,b,c);
    printf("Set Difference(A - B): ");
    printset(c);
    return 0;
}

void readset(bit s[],int n){
    int i,x,k;
    printf("Enter %d elements:\n", n);
    for(i=0;i<n;i++){
      scanf("%d",&x);
      for(k=0;k<=SIZE;k++){
      if(uset[k]==x){
      s[k].x=1;
      break;
      }
    }
  }
}
void printset(bit s[]){
  int k;
  printf("{");
  for(k=0;k<=SIZE;k++){
    if(s[k].x==1){
    printf("%d ",uset[k]);
    }
  }
  printf("}\n");
}
void set_union(struct bit a[],struct bit b[],struct bit c[]){
  int i;
  for(i=0;i <= SIZE;i++){
    c[i].x=a[i].x | b[i].x;
    }                                                                
}
void set_intersection(struct bit a[],struct bit b[],struct bit c[]){
  int i;
  for(i=0;i <= SIZE;i++){
  c[i].x = a[i].x & b[i].x;
  }
}
void set_difference(struct bit a[],struct bit b[],struct bit c[]){
  int k;
  for(k=0; k <= SIZE; k++){
  c[k].x = a[k].x  & !b[k].x;
  }
}

