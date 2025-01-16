/*Design, Develop and Implement a program in C for the following operations on Strings
a. Read a Main String (STR), a Pattern String (PAT) and a Replace String (REP).
b. Perform Pattern Matching Operation: Find and Replace all occurrences of PATin
STR with
REP if PAT exists in STR. Repost suitable messages in case PAT does not exist in STR.
Support the program with functions for each of the above operations. Don’t use builtin functions.
*/
//This program is used for string operations
#include<stdio.h>
#include<stdlib.h>

char str[100],rep[50],pat[50],ans[100];   //Globally declaring the variables
int i,j,c,m,k,flag=0;
 
    void stringmatch(){               
	i=j=c=m=0;                          //str[c]=whole string itelf... str[m] is the position of the current character
	while(str[c]!='\0'){                //While the main string has not yet reached the null character
		if(str[m]==pat[i]){             //If match between the main and the pattern string is found
			i++;                        //increment i and m simaltaneously 
			m++;
			if(pat[i]=='\0'){           //If pattern string reaches the null character, it means the string is fully matched
				flag=1;                 //declare flag as 1 to confirm and print the final string later on
				for(k=0;rep[k]!='\0';j++,k++) //k=0 indicating to start from first character of rep string and contiuing till null character is reached
				ans[j]=rep[k];                //copy the replacement string to the answer array
				i=0;                          //reset i(pattern position) and adjust values of c and m to continue searching for rest of the string
				c=m;
			}
		}
		else{                                
			ans[j]=str[c];                    //copy the answer string/array to the main string STR
			j++;                              //increment j and c simaltaneously
			c++;
			m=c;                              //reset pattern position i and adjust m and c pointers
			i=0;
		}
	}
    }
    void main(){                             //Main function
    	printf("Enter the main string:\n");  //Main string
    	gets(str);
    	printf("Enter the pattern string:\n"); //Enter the pattern string that will be replaced
    	gets(pat);
    	printf("Enter the replace string:\n"); //Enter the replace string that will replace the pattern string
    	gets(rep);
    	stringmatch();                         //Call the function
    	if(flag==1){                           //As we gave flag=1 once string is fully matched
    		printf("The resultant string is : %s",ans); //Print the changed or resultant string
		}
		else{                                          
			printf("Pattern string not found");
		}
	}
