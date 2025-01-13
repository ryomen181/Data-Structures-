//Program on array operations. Switch case is used to make this program menu driven 
#include<stdio.h>
#include<stdlib.h>
int i,elem,a[10],pos,n;//globally declared variables
void create(){        //creating the array
printf("Enter no of elements in the array\n");
scanf("%d",&n);
printf("Enter the elements of the array:\n");
for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}
}
void dis(){          //Displaying the array
	printf("The elements are:\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
void insert(){      // inserting new element into the array
printf("Enter the position to enter the element");
scanf("%d",&pos);
printf("Enter the element to be entered:\n");
scanf("%d",&elem);
for(i=n-1;i>=pos;i--){  //Loop starts from last element and the array moves backwards as we are decrementing (i--)
	a[i+1]=a[i];
}
a[pos]=elem; //Placing new element in the position
n+=1;
}
void del(){ //Delete function to delete an element from the array
  printf("Enter the position of the element to be deleted");         
  scanf("%d",&pos); // This decleration helps us to display the deleted value later
elem=a[pos];
for(i=pos;i<n-1;i++){
	a[i]=a[i+1];
}

n-=1;
printf("The deleted element is %d\n",elem);
}
void main(){
int ch;
do{
printf("\n\n---------Menu for Array operations---------\n\n");
printf("\n\n1.Create\n2.Display\n3.Insert\n4.Delete\n5.Exit\n");
printf("Enter your choice:\n");
scanf("%d",&ch);
switch(ch){     //Choice based menu to perform array operations efficiently
	case 1: create();break;
	case 2: dis();break;
	case 3: insert();break;
	case 4: del();break;
	case 5: exit(1);break;
	default: printf("Invalid choice\n");
}
}while(ch!=5); //while ch!=5 because if the is ch==5 then the 5th case i.e Exit occurs which exits to loop.  
}              //Therefore we can run the operations as many times we want without exiting the loop 
