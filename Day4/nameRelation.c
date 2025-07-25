#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    char name[50];
    char relationship[50];
    struct Node* next;
};
struct Node* createNode(char name[], char relationship[]){
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    strcpy(newNode->name,name);
    strcpy(newNode->relationship,relationship);
    newNode->next=NULL;
    return newNode;
}
void display(struct Node* head){
    struct Node* temp=head;
    while(temp!=NULL){
        printf("\nName: %s\nRelationship: %s\n",temp->name,temp->relationship);
        temp=temp->next;
    }
}
int main()
{
    struct Node* head=createNode("Lakshmi Sahu","Mother");
    struct Node* second=createNode("Srinivas Sahu","Father");
    struct Node* third=createNode("Gitesh Pavan Sahu","Brother");
    struct Node* fourth=createNode("Jyotsna Padma Sahu","Sister");

    head->next=second;
    second->next=third;
    third->next=fourth;
    
    display(head);
    return 0;
}