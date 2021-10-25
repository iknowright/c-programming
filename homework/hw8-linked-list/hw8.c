#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
int k,m,n;
unsigned int rand_num(){
	unsigned int a,r;
	a=rand(); a=(a & 1) << 31; r=rand(); r = r | a;
	return r;
}
inline unsigned long long int rdtsc(){
	unsigned long long int x;
	asm volatile ("rdtsc":"=A"(x));
	return x;
}
typedef struct node *node_ptr;

typedef struct node{
	unsigned int data;
	node_ptr next;
}node;
node *insert_a_node(node *head, node *p)
{
    node *t=head;

    if(p==NULL) return head;
    if(head == NULL) return p;

    if (p->data <= head->data){
         p->next = head;
         return p;
    }
    while (t->next !=NULL && t->next->data < p->data)
          t = t->next;
    p->next = t->next; 
    t->next = p;
    return head;
}
node *search_a_node(node *head, int d)
{
    node *t=head;

    while (t != NULL && t->data != d){
         t = t -> next;
    }
    return t;
}
node *delete_a_node(node* head,unsigned int d)
{ 
  node* cur,*prev;
  for(cur=head,prev=NULL;cur!=NULL && cur->data!=d;prev=cur,cur=cur->next);
  if(cur==NULL)
    return head;
  if(prev==NULL)
    head=head->next;
  else
    prev->next=cur->next;
  free(cur);
  return head;
}
node_ptr new_node(){
	node_ptr t;
	if (!(t=malloc(sizeof(*t))))exit(EXIT_FAILURE);
	t->next=NULL;
	t->data=0;
	return t;
}

int table_num(unsigned int num){
	int i,j,rank=0;
	for(i=31,j=k-1;i>=31-k,j>=0;i--,j--)
		if(num&1<<i)
			rank|=1<<j;
	return rank;
}

void create_list(node_ptr table[],unsigned int num1[]){
	int i;
	unsigned int num,rank;
	node_ptr add;
	for(i=0;i<n;i++){
		num=rand_num();
		if(i<m)num1[i]=num;
		rank=table_num(num);
		add = new_node();
		add->next=NULL;
		add->data=num;
		table[rank]->next=insert_a_node(table[rank]->next,add);
	}
}
void search_list(node_ptr table[],unsigned int num1[]){
	node_ptr temp;
	int j;
	unsigned int rank;
	FILE *fp;
	fp=fopen("result.txt","w");
	for(j=0;j<m;j++){
		rank=table_num(num1[j]);
		temp=search_a_node(table[rank]->next,num1[j]);
		fprintf(fp, "%u\n", temp->data);
	}
	fclose(fp);
}
void insert_list(node_ptr table[],unsigned int num1[]){
	int i;
	unsigned int num,rank;
	node_ptr add;
	for(i=0;i<m;i++){
		num1[i]=rand_num();
		rank=table_num(num1[i]);
		add=new_node();
		add->next=NULL;
		add->data=num1[i];
		table[rank]->next=insert_a_node(table[rank]->next,add);
	}
}
void delete_list(node_ptr table[],unsigned int num1[]){
	int i;
	unsigned int num,rank;
	for(i=0;i<m;i++){
		rank=table_num(num1[i]);
		table[rank]->next=delete_a_node(table[rank]->next,num1[i]);
	}
}
int main(int argc, char *argv[]){
	srand((unsigned) time(NULL));
	int i;
	k=atoi(argv[1]);
	n=atoi(argv[2]);
	m=atoi(argv[3]);
	unsigned int array_num,num1[m];
	array_num=pow(2,k);
	node_ptr table[array_num];
	for(i=0;i<array_num;i++)
		table[i]=new_node();
	
	create_list(table,num1);


	unsigned long long int begin,end,result;

	for(i=1;i<=3;i++){
		printf("qq i = %d\n", i);
		begin=rdtsc();
		switch(i){
			case 1:search_list(table,num1);break;
			case 2:insert_list(table,num1);break;
			case 3:delete_list(table,num1);break;
		}
		end=rdtsc();
		result=end-begin;
		printf("%lld\n",(result/m));
	}
	return 0;
}