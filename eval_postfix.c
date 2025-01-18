#include<stdio.h>
#include<ctype.h>
int stack[25],top=-1; //Top=-1 to set the stack empty
void push(int num){
	stack[++top]=num; //increment top in stack and assign it to num
}
int pop(){
return stack[top--]; //To pop, decrement the stack top position
}
int eval_postfix(char postfix[], int value[]){
	int i=0,op1,op2;
	char ch;
	while(postfix[i]!='\0'){ //While the postfix expression has not reached null
		ch=postfix[i++];     //assign ch=postfix and increment i simlataneously
		if(isalpha(ch))      //check if ch is alphanumeric
			push(value[ch-'a']); 
			else{ 
				op1=pop();
				op2=pop();
				switch(ch){
					case '+':push(op1+op2);break;
					case '-':push(op1-op2);break;
					case '*':push(op1*op2);break;
					case '/':push(op1/op2);break;
					case '$':push(op1^op2);break;
				}
			}
	}
	return pop();
}
int main(){
	char postfix[25];
	int value[26]={0},i=0;
	printf("Enter a valid postfix expression:\n");
	scanf("%s",postfix);
	while(postfix[i]!='\0'){
		if(isalpha(postfix[i])){
			printf("Enter value for %c:",postfix[i]);
			scanf("%d",&value[postfix[i]-'a']);
		}
		i++;
	}
	printf("Result of %s=%d\n",postfix,eval_postfix(postfix,value));
}
