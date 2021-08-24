#include<stdio.h>
#include<conio.h>
#include "header.h";

 void init(list *head){

  *head = NULL;
  return;
  }
 void append_in_list(list *head, char ch) {

    node* nn = (node*) malloc(sizeof(node));
    if(nn) {
        nn->data = ch;
        nn->next = NULL;
    }
    else
        return;
    if(*head == NULL)
        *head = nn;
    else {
        node* p = *head;
        while(p->next)
            p = p->next;
        p->next = nn;
    }
    return;
 }
