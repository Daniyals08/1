#include<stdio.h>

int stack[10],top=-1;


void create_stack(){
	
	int numstack,data,i=0;
	
	if(top == -1){
		
		printf("\nenter the numbers elements of stack :- ");
		scanf("%d",&numstack);
		
		if(numstack < 10){
			
			for(i;i<numstack; i++){
				
				printf("\nEnter the %d Position element of stack :- ",i);
				scanf("%d",&data);
				
				stack[i] = data; 
				
				top = top + 1;
			}
			printf("\nstack is created ");
		}
		else{
			printf("\nstack can have only 10 element ");
		}
	}
	else{
		printf("\nstack already cerated");	
	}
}


void print_stack(){
	
	int i=0;
	if(top!=-1){
	
		printf("\nThis is the Stack :- \n");
		
		for(i=0;i<=top;i++){
		
		printf("\t\t\t\n| %d |",stack[i]);
			
		}
		printf("\n");
	}
	else{
		printf("\nstack is empty");
	}
	
}


void push(){
	
	if()
	
}





int main(){
	
	int ch;
	do{
		printf("\n-----------------------");
		printf("\n1: create stack");
		printf("\n2: Print stack");
		printf("\n3: push");
		printf("\n4: pop");
		printf("\n0: exit");
		printf("\n-----------------------");
		printf("\nEnter your choise :- ");
		scanf("%d",&ch);
		
		switch(ch){
			
			case 1: create_stack(); break;
			
			case 2: print_stack(); break;
			
			case 3: push(); break;
			
			case 4: break;
			
			case 0: break;
			
			default: printf("\nInvalid input");
			
		}
		
	}while(ch!=0);
	
}
