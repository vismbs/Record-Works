#include<stdio.h>

typedef struct {
  char name[100];
  long salary;
} Slip;


// FUNCTION DECLARATIONS

void incr_pay(Slip*, long);
void decr_pay(Slip*, long);
void get_inp(Slip*);
void print_slip(Slip*, int);

int main(void){
  int n = 0;
  char op_char = 0, cont_char = 'Y';
  printf("Enter the number of Employees: ");
  scanf("%d", &n);
  getchar();

  Slip slip_arr[n];

  printf("********* GETTING THE USER INPUT *********\n");
  for(int i = 0; i < n; i++){
    get_inp(slip_arr);
  }
  printf("********* GOT THE USER INPUT *********\n");
  
  while(cont_char == 'Y'){
    printf("OPERATION[INCR/DECR/PRINT]: ");
    scanf("%c", &op_char);
    getchar();

    switch(op_char){
      case 'I':
        {
        long pay_num, amount;
        printf("Employee ID: ");
        scanf("%ld", &pay_num);
        getchar();
        printf("Enter the Amount Increase: ");
        scanf("%ld", &amount);
        getchar();
        incr_pay(&slip_arr[pay_num], amount);
        break;
        }
      case 'D':
        {
        long pay_num, amount;
        printf("Employee ID: ");
        scanf("%ld", &pay_num);
        getchar();
        printf("Enter the Amount Increase: ");
        scanf("%ld", &amount);
        getchar();
        decr_pay(&slip_arr[pay_num], amount);
        break;
        }
      case 'P':
        {
        print_slip(slip_arr, n);
        break;
        }
      
    }
    printf("CONTINUE[Y/N]: ");
    scanf("%c", &cont_char);
    getchar();
  }
}

void get_inp(Slip* inp_slip){
  printf("Enter Name: ");
  scanf("%s", inp_slip->name);
  getchar();
  printf("Enter Salary: ");
  scanf("%ld", &inp_slip->salary);
  getchar();
  return;
}

void decr_pay(Slip* inp_slip, long amount){
  inp_slip->salary -= amount;
  return;
}

void incr_pay(Slip* inp_slip, long amount){
  inp_slip->salary += amount;
  return;
}

void print_slip(Slip* slip_arr, int size){
  printf("********* GENERATING THE RECORDS *********\n");
  for(int i = 0; i < size; i++){
    printf("NAME: %s\n", slip_arr[i].name);
    printf("SALARY: %ld", slip_arr[i].salary);
    printf("\n");
  }
  printf("********* GENERATED THE RECORDS *********\n");
}
