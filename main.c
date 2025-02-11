#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

void print_shelf_options(){
    printf("1. Want to Read Shelf\n");
    printf("2. Currently Reading Shelf\n");
    printf("3. Have Read Shelf\n");
    printf("4. Back\n");
}

void print_shelf_menus(){
    printf("1. Add book to shelf\n");
    printf("2. Back\n");
}

void print_login_menus(){ /*unimplemented, not part of sprint1*/
    printf("1. Sign-in\n");
    printf("2. Sign-up\n");
}

int main(){

    int userchoice, userchoice2;
    FILE *fptr;
    char authorname[5000];

    printf("------------------------------------------------------------------------------\n");
    printf(" ____    ____    ____         \n");
    printf("|    \\  /    \\  /    \\  | /\n");
    printf("|____/  |    |  |    |  |/\n");
    printf("|    \\  |    |  |    |  |\\\n");
    printf("|____/  \\____/  \\____/  | \\\n");
    printf("------------------------------------------------------------------------------\n");
    while(userchoice != 4){

        userchoice = 0;
        userchoice2 = 0;
        print_shelf_options();
        printf("Please select one of the above options (1-4): \n");
        scanf("%d", &userchoice);

        if(userchoice < 1 || userchoice > 4){
            printf("Invalid input. Please try again.\n\n");
        }else if(userchoice == 1){
            
            while(userchoice2 != 2){
                print_shelf_menus();
                printf("Please select one of the above options(1-2): ");
                scanf("%d", &userchoice2);

                if(userchoice2 == 1){

                    printf("Adding to Want to Read Shelf\n");
                    printf("Please note: This program does not check the spelling of the book.\n");
                    printf("WARNING: Currently, add a book to a shelf is irriversable.\n");

                    fptr = fopen("want_to_read.txt", "a");
                    while(getchar() != '\n');

                    printf("Please enter the book tile and the author's name in the format title,name: ");
                    fgets(authorname, sizeof(authorname), stdin);

                    fprintf(fptr, "%s", authorname);

                    fclose(fptr);

                    printf("Book added to shelf.\n");
                }else if(userchoice2 == 2){
                    printf("Navigating back to home page...\n\n");
                }else{
                    printf("Invalid input. Please try again.\n");
                    userchoice2 = 0;
                }
            }

        }else if(userchoice == 2){
            while(userchoice2 != 2){
                print_shelf_menus();
                printf("Please select one of the above options(1-2): ");
                scanf("%d", &userchoice2);

                if(userchoice2 == 1){

                    printf("Adding to Currently Reading Shelf\n");
                    printf("Please note: This program does not check the spelling of the book.\n");
                    printf("WARNING: Currently, add a book to a shelf is irriversable.\n");

                    fptr = fopen("currently_reading.txt", "a");
                    while(getchar() != '\n');

                    printf("Please enter the book tile and the author's name in the format title,name: ");
                    fgets(authorname, sizeof(authorname), stdin);

                    fprintf(fptr, "%s", authorname);

                    fclose(fptr);

                    printf("Book added to shelf.\n");
                }else if(userchoice2 == 2){
                    printf("Navigating back to home page...\n\n");

                }else{
                    printf("Invalid input. Please try again.\n");
                    userchoice2 = 0;
                }
            }
        }else if(userchoice == 3){
            while(userchoice2 != 2){
                print_shelf_menus();
                printf("Please select one of the above options(1-2): ");
                scanf("%d", &userchoice2);

                if(userchoice2 == 1){

                    printf("Adding to Have Read Shelf\n");
                    printf("Please note: This program does not check the spelling of the book.\n");
                    printf("WARNING: Currently, add a book to a shelf is irriversable.\n");

                    fptr = fopen("have_read.txt", "a");
                    while(getchar() != '\n');

                    printf("Please enter the book tile and the author's name in the format title,name: ");
                    fgets(authorname, sizeof(authorname), stdin);

                    fprintf(fptr, "%s", authorname);

                    fclose(fptr);

                    printf("Book added to shelf.\n");
                }else if(userchoice2 == 2){
                    printf("Navigating back to home page...\n\n");

                }else{
                    printf("Invalid input. Please try again.\n");
                    userchoice2 = 0;
                }
            }

        }else if(userchoice){
            printf("Exititng Program.\n");
        }else{
            printf("Invalid input, please try again.\n");
            userchoice = 0;
        }
    }

    return 0;
}