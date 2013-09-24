#include<stdio.h>
#include<stdlib.h>

struct node {
    int val;
    struct node *next;
};

    struct node * top;

void push();
void pop();

int main() {

    int choice, num;
    top=NULL;

    do {
        printf("\nMain Menu\n"
               "1.Push\n"
               "2.Pop\n"
               "3.Quit\n"
               "Enter your choice : ");

        scanf("%d", &choice);
        getchar(); //consume the <Enter> key press after inputting number

        switch(choice) {

            case 1 : push();
                     break;

            case 2 : pop();
                     break;

            case 3 : printf("\nExiting...\n");
                     break;

            default : printf("\n Invalid choice! Press <enter> key to continue...");
                      getchar();
        }
    }while(choice!=3);
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

    if(top==NULL) {
        printf("\nNo Element present!!");
        printf("\nPress <enter> key to continue...");
        getchar();
        return;
    }

    num = top->val;
    top = top->next;

    printf("\nPopped value %d\n", num);
    printf("Press <enter> key to continue...");
    getchar();
}

