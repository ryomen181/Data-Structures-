//Menu driven program in C for stack operations: push()&pop()
//You face with the stack underflow condition when you try to pop an element after popping the last element in the stack
//You face the Stack overflow condition when you try to push an element onto the stack when the stack is full
#include<stdio.h>
#include<stdlib.h>
int s[3],i,top,ch,item;
void push(),pop(),display();

void main(){
	top=-1;   //To make sure stack is empty before performing any operations
	while(ch!=4){
		printf("\n\n-----Menu for stack operations-----\n\n");  //Using switch case to perform operations
	    printf("1.Push\n2.Pop\n3.Display\n4.Exit\n");
	    printf("Enter your choice:\n");
	    scanf("%d",&ch);
	    switch(ch){
	    	case 1: push();break;
	    	case 2: pop();break;
	    	case 3: display();break;
	    	case 4: exit(0);break;
	    	default: printf("Invalid choice!\n");
		}
	    
	}
}

void push(){
	if(top==3-1){   //As we chose s[3] as the size of stack... character indexes are 0,1,2 now 2 is topmost index.. if top==3-1 i.e 2,
		printf("Stack overflow\n"); 
		return; //Then stack is full and no element can be pushed now
	}
	printf("Enter the element to be pushed:\n");
	scanf("%d",&item);
	top+=1;       //As initially top==-1 to keep the stack empty, we increment as we push an element onto the stack
	s[top]=item;  //We assign the item value to the s[top]... indicating the item is pushed on the stack to the index(top value)
}    
void pop(){
	if(top==-1){ //If stack is empty.. then stack underflows
		printf("Stack underflow\n");
		return;
	}
	printf("Item popped is:%d\n",s[top--]);//Item is popped from the top as stack follows Last in first out principle..
}                                          //We decrement top value which leads to popping/removal of the topmost value from the stack
void display(){
	if(top==-1){
		printf("Stack is empty");          
	}
	printf("The stack contains:\n");  //Printing/displaying the values stored in the stack
	for(i=0;i<=top;i++){
		printf("%d\t",s[i]);
	}
}  //Code is simple and efficient to demonstrate the stack operations
