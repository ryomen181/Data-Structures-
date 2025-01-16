//Program in C for stack operations: insert(); and delete();
//Stack is a data structure in C which follows FIFO(First in First out) principle
//item are inserted in the queue from rear and deleted from the front
#include<stdio.h>
#include<stdlib.h>
int s[3],front,rear,i,ch,item; //Globally declare the required variables

int main(){
	front=0; //front=0 and rear=-1 sets the queue as empty
	rear=-1;
	while(ch!=4){
		printf("\n\n-----Menu for Queue operations-----\n\n");
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch(ch){
			case 1: insert();break;
			case 2: delete();break;
			case 3: display();break;
			case 4: exit(0);break;
			default: printf("Invalid choice!");
		}
	}
	return 0;
}
void insert(){
	if(rear==3-1){ //If rear is full, then the queue is overflow
		printf("Queue overflow");
	}
	printf("Enter item to be inserted:\n");
	scanf("%d",&item);
	rear+=1;  //When the item is inserted, we increment the rear by adding it with 1
	s[rear]=item; //Here we assign the rear position of the queue to the item
}
void delete(){
	if(front>rear){ //Once front is greater than rear, the queue is empty
		printf("Queue is empty");
		return;
	}
	printf("The item deleted is:%d\n",s[front++]); //As the item is deleted from the front, we write s[front++]
}                                                  
void display(){
	if(front>rear){
		printf("Queue is empty");
	}
	printf("The Queue contains:\n");
	for(i=front;i<=rear;i++){ //Print the values present in the Queue
		printf("%d\t",s[i]);
	}
}//It is overall an easy program. It is very similar to the program i have written on stack operations. Do check that out as well
