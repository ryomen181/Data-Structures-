#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void tower(int n,int source,int temp,int dest){
	if(n==0)
	return 0;
	tower(n-1,source,dest,temp);
	printf("Move disc %d from %c to %c\n",n,source,dest);
	
}
int main(){
int n;
printf("Enter no of disc:");
scanf("%d",&n);
tower(n,'A','B','C');
printf("Total no of moves are:%d\n",(int)pow(2,n)-1);
}

