#include<stdio.h>

typedef enum {
  MALE,
  FEMALE,
  TRANSGENDER
} Gender;

typedef struct {
  char name[100];
  char rollnum[8];
  int marks[5];
  int total_mark;
  int rank;
  char dob[10];
  Gender gender;
  int age;
} Student;

// FUNCTION DECLARATION

void rank_assign(Student*, int);
void get_inp(Student*);
void print_mark_sheet(Student*);

// MAIN FUNCTION

int main(void){
  int n;
  printf("Enter the Class Strength: ");
  scanf("%d", &n);
  getchar();

  Student std_array[n];

  for(int i = 0; i < n; i++){
    get_inp(std_array);
  }
}

void get_inp(Student* std){
  printf("NAME: %s");
  scanf("%s", )
}

void rank_assign(Student* std_arr, int size){

}

void print_mark_sheet(Student* std){

}
