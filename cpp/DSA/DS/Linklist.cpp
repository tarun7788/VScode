#include<iostream>
#include <stdlib.h>
using namespace std;

struct node {
        int a;
        struct node *next;
    };

void insertafter(struct node *ptr ,int data){
    struct node*news;
    news = (struct node*)malloc(sizeof(struct node));

    news->a=data;
    struct node *temp = ptr->next;
    ptr->next=news;
    news->next=temp->next;
}
void linklists(struct node *ptr){
    while (ptr!=NULL){
    cout<<"Elemet is : "<<ptr->a<<endl;
    ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    
    head= (struct node*)malloc(sizeof(struct node));
    second= (struct node*)malloc(sizeof(struct node));
    third= (struct node*)malloc(sizeof(struct node));
    fourth= (struct node*)malloc(sizeof(struct node));

    head->a=5;
    head->next=second;

    second->a=7;
    second->next=third;

    third->a=28;
    third->next=fourth;

    fourth->a=500;
    fourth->next=NULL;

//     cout<<"Enter the Element :" ;
//     cin>>head->a;
//     head->next=second;
//     cout<<"Enter the Element :" ;
//     cin>>second->a;
//     second->next=third;
//     cout<<"Enter the Element :" ;
//     cin>>third->a;
//     third->next=fourth;
//     cout<<"Enter the Element :" ;
//     cin>>fourth->a;
//     fourth->next=NULL;
    
    int data=6;
    
    insertafter(head, data);
    linklists(head);

   
    
}