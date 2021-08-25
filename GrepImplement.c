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

// implementation of -c command
int get_count(list l1, char sear[]) {

    int cnt = 0;
    if(l1 == NULL)
        return 0;
    else {
        node* p = l1;
        while(p) {
            if(p->data == sear[0]) {
                int i = 0, j = strlen(sear);
                while(p->data == sear[i]) {
                        i++;
                        p = p->next;
                        if(sear[--j] == p->data) {
                            cnt++;
                            while(p->next != NULL){
                                    if(p->data == '\n')
                                     break;
                            p = p->next;
                            }

                        }
                }
            }
            p = p->next;
        }
    }
    return cnt;
}

// implementation of -n command
void get_lineNumbers(list l1, char sear[]) {

     int cnt = 0;
    if(l1 == NULL)
        return;
    else {
        node* p = l1;
        node* q;
        while(p) {
            if(p->data == '\n')
                cnt++;
            if(p->data == sear[0]) {
                q = p;
                int i = 0, j = strlen(sear);
                while(p->data == sear[i]) {
                        i++;
                    p = p->next;
                        if(sear[--j] == p->data) {
                            printf("\n%d:", cnt++);

                              while(q != NULL){
                                    printf("%c", q->data);
                                    if(q->data == '\n')
                                    break;
                            q = q->next;
                            p = q;
                            }
                        }
                    }
                }

            p = p->next;
          }
        }
    return;
}

// implementation of -o command
void display_match(list l1, char sear[]) {

    if(l1 == NULL)
        return 0;
    else {
        node* p = l1;
        while(p) {
            if(p->data == sear[0]) {
                int i = 0, j = strlen(sear);
                while(p->data == sear[i]) {
                        i++;
                        p = p->next;
                        if(sear[--j] == p->data) {
                            printf("%s\n", sear);
                            break;
                        }
                    }
            }
            p = p->next;
        }

    }
}

// implementation of -w command
void w_command(list l1, char sear[]) {

     int cnt = 0;
    if(l1 == NULL)
        return;
    else {
        node* p = l1;
        node* q;
        while(p) {
            if(p->data == '\n')
                cnt++;

            if(p->data == sear[0]) {
                    q = p;
                int i = 0, j = strlen(sear);
                while(p->data == sear[i]) {
                        i++;
                    p = p->next;
                        if(sear[--j] == p->data) {

                              while(q != NULL){
                                    printf("%c", q->data);
                                    if(q->data == '\n')
                                    break;
                            q = q->next;
                            p = q;
                            }
                        }
                    }
                }

            p = p->next;
          }
        }
    return;
}

void display(list head) {

     if(head == NULL)
       return;
    else {
        node* p = head;
        while(p) {
            printf("%c", p->data);
            p = p->next;
        }
    }
    return;
}