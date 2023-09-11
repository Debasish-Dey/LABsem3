#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};

struct node *createNode(struct node*head, int n){
    struct node*ptr=head;
    for(int i=2; i<=n; i++){
        ptr->next=(struct node*)malloc(sizeof(struct node));
        ptr=ptr->next;
        printf("Enter data in node %d: ",i);
        scanf("%d", &ptr->data);
    }
    ptr->next=NULL;
    return head;
}

struct node * insertAtbegin(struct node*head){
    int key;
    printf("Enter value to insert: ");
    scanf("%d",&key);
    struct node*ptr = (struct node*)malloc(sizeof(struct node));
    ptr->data=key;
    ptr->next=head;
    head=ptr;
    return head;
}

struct node * deleteAtbegin(struct node* head){

    if(head==NULL){
        printf("Empty Linked List");
        return head;
    }
    else {
    struct node*ptr = head;
    head = head->next;
    free(ptr);
    return head;
    }
}

void view(struct node* head){
    while(head!=NULL){
        printf("%d ",head->data);
        head = head ->next;
    }
    printf("\n");
}

int main(){
    int n;
    printf("Enter the initial required nodes in Linked List");
    scanf("%d", &n);
    struct node *head = (struct node*)malloc(sizeof(struct node));
    struct node *ptr=head;
    printf("Enter data in 1st node: ");
    scanf("%d", &head->data);
    
    int w=1;
    while(w){
        int x;
        printf("Enter 1 to insert element\n");
        printf("Enter 2 to delete element\n");
        printf("Enter 3 to View: \n");
        printf("Enter 4 to Quit\n");
        scanf("%d",&x);

        switch (x)
        {
        case 1:
            head = insertAtbegin(head);
            break;
        case 2:
            head = deleteAtbegin(head);
            break;
        case 3:
            view(head);
            break;
        case 4:
            w=0;
            break;
        default:
            // printf("Invalid input");
            break;
        }
    }
    return 0;
}