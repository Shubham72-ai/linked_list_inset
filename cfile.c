#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node *next;

};



int main() {

struct Node *s, *first, *last, *t, *q, *p;
int pos;

s=(struct Node *)malloc(sizeof(struct Node));

s->data=10;
s->next=NULL;

first=s;
last=s;

for (int i=1; i<4; i++) {

   s=(struct Node *)malloc(sizeof(struct Node));
   s->data = i;
   s->next = NULL;

   last->next=s;
   last=s;

}


// this is the position that we want to go upto
t=first;

for (int i = 0; i<2; i++) {

    t=t->next;
}

s=(struct Node *)malloc(sizeof(struct Node));

s->data=50;
s->next=NULL; // upto this new node is ceated


q=t->next;  // 'f'l't'      't'       't->next'
t->next=s; //   |||          |         |
s->next=q;//    [1]------->[2]------->[3]-------->[4]->NULL

           //                [newnode]
p=first;

while(p!=NULL)
{

printf("\n %d ",p->data);

p=p->next;
}

return 0;
}
