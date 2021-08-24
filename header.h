#ifndef GREPHEADER_H_INCLUDED
#define GREPHEADER_H_INCLUDED
 typedef struct node{
    char data;
    struct node *next;
 }node;

typedef node* list;
void init(list *head);
void append_in_list(list *head, char ch);
void display(list head);
int get_count(list l1, char sear[]);
void get_lineNumbers(list l1, char sear[]);
void display_match(list l1, char sear[]);
void w_command(list l1, char sear[]);

#endif // GREPHEADER_H_INCLUDED
