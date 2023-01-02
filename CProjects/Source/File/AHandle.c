#include<stdio.h>
#include<string.h>

// FUNCTION DECLARATIONS

void add_book(); // ADDS A BOOK TO THE RECORD
void get_book();  // GETS ALL THE AVAILABLE BOOKS
void check_avail();  // CHECKS WHETHER A BOOK IS AVAILABLE OR NOT
void delete_book();
int number_of_lines();

typedef struct{
  char name[100];
  char author_name[100];
} Book;

int main(void){
  char end_char = 'Y';
  char op_char = 'G';

  while(end_char == 'Y'){
    printf("WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: ");
    scanf("%c", &op_char);
    getchar();

    switch(op_char){
      case 'A':
        add_book();
        break;
      case 'G':
        get_book();
        break;
      case 'C':
        check_avail();
        break;
      case 'D':
        delete_book();
        break;
      default:
        printf("UNKNOWN OPTION\n");
        break;
    }

    printf("CONTINUE [Y/N]: ");
    scanf("%c", &end_char);
    getchar();
  } 
}

void add_book(){
  FILE *txt_file = fopen("Book.txt", "a+");
  Book new_rec = {0};
  printf("******* ADDING A BOOK ********\n");
  printf("NAME: ");
  scanf("%s", new_rec.name);
  getchar();
  printf("AUTHOR NAME: ");
  scanf("%s", new_rec.author_name);
  getchar();
  fprintf(txt_file, "%s %s\n", new_rec.name, new_rec.author_name);
  printf("******* ADDED THE BOOK ********\n");
  fclose(txt_file);
}

void get_book(){
  FILE *txt_file = fopen("Book.txt", "r");
  Book new_rec;
  for(int i = 0; i < number_of_lines(); i++){
    fscanf(txt_file, "%s %s", new_rec.name, new_rec.author_name);
    printf("%s %s\n", new_rec.name, new_rec.author_name);
  }
  fclose(txt_file);
}

void check_avail(){
  FILE *txt_file = fopen("Book.txt", "r");
  Book new_rec;

  char name[100];
  printf("Enter the Name: ");
  scanf("%s", name);
  getchar();

  for(int i = 0; i < number_of_lines(); i++){
    fscanf(txt_file, "%s %s", new_rec.name, new_rec.author_name);
    if(!strcmp(name, new_rec.name)){
       printf("%s is Available XD\n", new_rec.name);
       break;
    }
  }
  fclose(txt_file);
}

void delete_book(){
  char book_name[100];
  Book new_book;

  printf("BOOK NAME: ");
  scanf("%s", book_name);
  getchar();

  FILE *txt_file = fopen("Book.txt", "r");
  FILE *temp_file = fopen("Temp.txt", "w+");
  for(int i = 0; i < number_of_lines() + 1; i++){
    fscanf(txt_file,"%s %s\n", new_book.name, new_book.author_name);
    if(!strcmp(new_book.name, book_name)){
      continue;
    } else {
      fprintf(temp_file, "%s %s\n", new_book.name, new_book.author_name);
    }
  }
  fclose(txt_file);
  fclose(temp_file);
  remove("./Book.txt");
  rename("./Temp.txt", "Book.txt");
}

int number_of_lines(){
  FILE *txt_file = fopen("Book.txt", "r");
  char temp_char = 0;
  int count = 0;
  while((temp_char = fgetc(txt_file)) != EOF){
    if(temp_char == '\n'){
      count++;
    }
  }
  fclose(txt_file);
  return count;
}

