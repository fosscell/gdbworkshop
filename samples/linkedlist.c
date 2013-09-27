#include<stdio.h>
#include<stdlib.h>

struct node {
    int val;
    struct node *next;
};

struct node * top;

void push();
void pop();
void print();

int main() {

    int choice, num;
    top=NULL;

    do {
        printf("\nMain Menu\n"
                "1.Push\n"
                "2.Pop\n"
                "3.Print\n"
                "4.Quit\n"
                "Enter your choice : ");

        scanf("%d", &choice);
        getchar(); //consume the <Enter> key press after inputting number

        switch(choice) {

            case 1 : push();
                     break;

            case 2 : pop();
                     break;

            case 3 : print(); 
                     break;

            case 4 : printf("\nExiting...\n");
                     break;

            default : printf("\n Invalid choice! Press <enter> key to continue...");
                      getchar();
        }
    }while(choice!=4);
}

void push() {

    int num;
    printf("\nEnter a number : ");
    scanf("%d", &num);
    getchar(); //consume the <Enter> key press after inputting number


    struct node *temp = malloc(sizeof(struct node));
    temp->val=num;
    temp->next=top;
    top=temp;

    printf("\nSuccessfully Added the number %d\n", top->val);
    printf("Press <enter> key to continue...");
    getchar();

}

void pop() {

    int num;

    num = top->val;	
    top = top->next;	//Deleting the top element

    printf("\nPopped value %d\n", num);
    printf("Press <enter> key to continue...");
    getchar();
}

void print() {
    
    struct node *temp = top;
    
    printf("\nStack Contents : \n");

    while(temp != NULL)
    {
        printf("Value = %d\n",temp->val);
        temp = temp->next;
    }
    
    printf("\nPress <enter> key to continue...");
    getchar();

}	

