#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void print_shelf_menus(){
    printf("1. Want to Read Shelf\n");
    printf("2. Currently Reading Shelf\n");
    printf("3. Have Read Shelf\n");
    printf("4. Back\n");
}

void print_login_menus(){
    printf("1. Sign-in\n");
    printf("2. Sign-up\n");
}

int main(){

    int userchoice;
    FILE *fptr;
    char booktitle[5000], authorname[5000];

    printf("Welcome to Book Tracking!\n");

    while(userchoice != 4){

        print_shelf_menus();
        printf("Please select one of the following (1-4): \n");
        scanf("%d", &userchoice);

        if(userchoice < 1 || userchoice > 4){
            printf("Invalid input. Please try again.\n\n");
        }else if(userchoice == 1){
            printf("Adding to Want to Read Shelf\n");

            fptr = fopen("want_to_read.txt", "a");
            while(getchar() != '\n');

            printf("Please enter the book tile and the author's name in the format title,name: ");
            fgets(authorname, sizeof(authorname), stdin);

            fprintf(fptr, "%s\n", authorname);

            fclose(fptr);

        }else if(userchoice == 2){
            printf("Adding to Currently Reading Shelf\n");

            fptr = fopen("currently_reading.txt", "a");
            while(getchar() != '\n');

            printf("Please enter the book tile and the author's name in the format title,name: ");
            fgets(authorname, sizeof(authorname), stdin);

            fprintf(fptr, "%s\n", authorname);

            fclose(fptr);
        }else if(userchoice == 3){
            printf("Adding to Have Read Shelf\n");

            fptr = fopen("have_read.txt", "a");
            while(getchar() != '\n');

            printf("Please enter the book tile and the author's name in the format title,name: ");
            fgets(authorname, sizeof(authorname), stdin);

            fprintf(fptr, "%s\n", authorname);

            fclose(fptr);

        }else if(userchoice){
            printf("Exititng Program.\n");
        }else{
            printf("Invalid input, please try again.\n");
        }
    }

    return 0;
}