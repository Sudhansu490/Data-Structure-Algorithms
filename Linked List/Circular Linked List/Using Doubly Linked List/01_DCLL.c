//Printing Node value in Forward Direction and Backward Direction

#include<stdio.h>
#include<stdlib.h>
struct Node{
	struct Node *prev;
	int data;
	struct Node *next;
};
int main()
{
	//Creation Node Variable
    struct Node *first,*middle,*last,*temp;

    //Allocate Memory
    first=(struct Node*)malloc(sizeof(struct Node));
    middle=(struct Node*)malloc(sizeof(struct Node));
    last=(struct Node*)malloc(sizeof(struct Node));

    //Assign value to each Node
    first->data=10;
    middle->data=20;
    last->data=30;

    //Linking each Node with each other
    first->prev=last;
    first->next=middle;
    middle->prev=first;
    middle->next=last;
    last->prev=middle;
    last->next=first;

    //Printing each Node value in Forward Direction
    temp=first;
    printf("Forward Direction\n");
    do{
		printf("%d\t",temp->data);
		temp=temp->next;
	}while(temp!=first);

    //Printing each Node value in Backward Direction
    temp=last;
    printf("\nBackward Direction\n");
    do{
    	
    	printf("%d\t",temp->data);
    	temp=temp->prev;
	}while(temp!=last);
    
    return 0;
}
