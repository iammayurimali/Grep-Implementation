#include<stdio.h>
#include<conio.h>
#include "header.h";

 int main(){
    list l1,head;
    int choice;
    char ch, path[100];
   // int chh =0;
    init(&l1);
    FILE *file;
    up:printf("Enter file path with file name\n");
    scanf("%s", &path);
    file = fopen(path, "r");
    if(file == NULL){
        printf("Unable to open file\n");
        goto up;
   } else {
        while((ch = fgetc(file)) != EOF)
            append_in_list(&l1, ch);
    }
    char sear[100];

    printf("***********IMPLEMENTATION OF GREP COMMAND***************\n");
    while(1){
    printf("\t1. Command -o: Print only the matched parts of a matching line\n");
    printf("\t2. Command -c: This prints only a count of the lines that match a pattern\n");
    printf("\t3. Command -n: Display the matched lines and their line numbers.\n");
    printf("\t4. Command -w: Match whole word.\n");
    printf("\t5. Exit \n");
    printf("\tEnter your choice: ");
    scanf("%d", &choice);
    switch(choice){
         case 1:
              printf("\n*******Implementation of -o command**********\n ");
              printf("Enter word to be searched: ");
              scanf("%s", &sear);
              display_match(l1, tolower(sear));
              break;
         case 2:
              printf("\n*******Implementation of -c command**********\n ");
              printf("Enter word to be searched: ");
              scanf("%s", &sear);
              int a = get_count(l1, sear);
              if(a != 0)
                 printf("Pattern to be search: %s \n The number of lines: %d \n", sear, a);
              break;
         case 3:
              printf("\n*******Implementation of -n command***********\n");
              printf("Enter word to be searched: ");
              scanf("%s", &sear);
              get_lineNumbers(l1, sear);
              break;
         case 4:
              printf("\n*******Implementation of -w command***********\n");
              printf("Enter word to be searched: ");
              scanf("%s", &sear);
              w_command(l1, sear);
              break;
         case 5:
              exit(0);
         default:
              printf("\nInvalid choice");
        }
    }

    return 0;
 }