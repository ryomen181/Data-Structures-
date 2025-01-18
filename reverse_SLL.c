//This program covers how to reverse a singly linked list
#include<stdio.h>
#include<malloc.h>
 struct node{ //Declare a structure node which stores int value
 	int value;
 	struct node *next;
 };
 int main(){
 	int item,n;
 	struct node *temp,*next,*prev,*cur,*head,*tail; //Declare all the node pointers
 	temp=(struct node*)malloc(sizeof(struct node)); //allocate memory to temp using malloc
 	printf("Enter the size of node:");
 	scanf("%d",&n);
 	printf("Enter the list to be traversed:");
 	scanf("%d",&item);
 	temp->value=item;  //Assign the item to the temp->value
 	head=temp;         //head is set to temp , making it the first node
 	n--;               //then we decrement n 
 	while(n!=0){       //Until n reaches zero we then add more items to the list 
 		temp->next=(struct node*)malloc(sizeof(struct node));
 		temp=temp->next;
 		scanf("%d",&item);
 		temp->value=item;
 		--n;
	 }
	 temp->next=NULL; //temp->next=NULL indicates that n has reached 0 and no further values can be added to the list
	 tail=temp;       
	 temp=head;      //We set temp=head to print the values int the same manner they were entered
	 while(temp){
	 	printf("%d\n",temp->value);
	 	temp=temp->next;
	 }
	 printf("Reversing the linked list\n"); 
	 prev=NULL; //To print the reversed list, we set prev=NULL
	 cur=next=head;//And set cur to head
	 while(cur){ 
	 	next=cur->next;
	 	cur->next=prev;
	 	prev=cur;
	 	cur=next;
	 }
	 temp=tail;  //Now we set temp=tail to print the reversed list..because temp will now traverse from tail which means list itemss will be 
	 while(temp){//printed in reversed order
	 	printf("%d\n",temp->value);
	 	temp=temp->next;
	 }
 }
