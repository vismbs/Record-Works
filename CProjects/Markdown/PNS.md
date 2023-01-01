# POINTERS and STRUCTURES

## AIM:

Write a C program to find the transpose of a given matrix. Dynamically
create a 2-D array of type double. The dimension of the array should be read
from the user. The data should be also read from the user. The 2-D array for
storing the transpose matrix should be dynamically created. Write a function
swap() that takes two arguments to perform the transpose operation by
using pass by reference. The individual elements of the transposed matrix
should be cubed and stored. Print the final result.

## ALGORITHM

1. Define two integers row and col and get the Rows and Columns from the User.

2. Initialize three dynamically allocated Arrays using malloc()

```c
*trans > Stores the transpose of the Array
*arr_one > Stores the User Initialized Array
*trans_ptr > A pointer defined on the memory alloacted by *trans
*cubed > Stores the Cubed elements of the *trans Array
```
3. Use a loop to get the elements of *arr_one from the User.


```c
void swap(double*, double*, int, int, double*) This function takes those three dynamically allocated arrays as an input as well as the order of that matrices. First we traverse through the rows of arr_one using a for loop. We initialize a dupe pointer for arr_one which makes sure that we don't modify the actual arr_one pointer. Then we define another loop which traverses through the columns of the given row. This loop increments trans_ptr and trav_ptr is incremented by the number of columns to assign the first element of each row to the first three elements of  trans_ptr and the trav_ptr is cubed and assigned to the cubed as well. Then after this iteration ends arr_one is incremented to start from the second element and the same process continues until the condition is met.
```

4. Use swap() function to tranpose the matrix and cube the transposed matrix

5. Print and Format the Output

<div style="page-break-after: always"></div>

## CODE:

```c
#include <stdio.h>
#include<stdlib.h>

void swap(double *trans_ptr, double *arr_one, int col, int row, double *cubed){
  for(int i = 0; i != row; i++, arr_one++){
    double *trav_ptr = arr_one;
    for(int j = 0; j != col; j++, trans_ptr++, cubed++){
       *trans_ptr = *trav_ptr;
       *cubed = *trav_ptr * *trav_ptr * *trav_ptr;
       trav_ptr += col;
    }
  }
}

int main(){
  int row = 0, col = 0;

  printf("Enter ROW and COLUMN: ");
  scanf("%d %d", &row, &col);
  
  double *trans = malloc(row * col * sizeof(double)), *arr_one = malloc(row * col * sizeof(double)), *trans_ptr = trans, *cubed = malloc(row * col * sizeof(double));
  
  for(double *i = arr_one, j = 0; j < row * col; i++){
    scanf("%lf", i);
    j++;
  }
 
  swap(trans_ptr, arr_one, col, row, cubed);

  for(double *i = trans, j = 0; j < row * col; i++, j++){
    if((int) j % col == 0){
      printf("\n");
    }
    printf("%lf ", *i);
  }
  printf("\n");

  printf("\nCUBED: \n");
  
  for(double *i = cubed, j = 0; j < row * col; i++, j++){
    if((int) j % col == 0){
      printf("\n");
    }
    printf("%lf ", *i);
  }

  printf("\n");
}
```

## OUTPUT:

```
$ Vishal/Records ./Transpose
Enter ROW and COLUMN: 3 3
1
2
3
4
5
6
7
8
9

1.000000 4.000000 7.000000
2.000000 5.000000 8.000000
3.000000 6.000000 9.000000

CUBED:

1.000000 64.000000 343.000000
8.000000 125.000000 512.000000
27.000000 216.000000 729.000000
```

## RESULT: 

Hence this Program transposes a Matrix and Cubes it as well. This is created using Dynamically Allocated Arrays using Malloc which is a Part of 
```
<stdlib.h>
```
header

<div style="page-break-after: always"></div>

## AIM:
To create an array of numbers in various formats and store them in a union named 'Number' with fields char[] number, int num, float fnum, double dnum.

## ALGORITHM:

1. Declare variables `size`, `choice`, `number_counter`, `num_counter`, `fnum_counter`, and `dnum_counter` to store the size of the array, the type of number entered by the user, and the counters for the number of numbers entered in each format.
2. Get the size of the array from the user and create an array of type `Number` with the given size.
3. Read `size` number of numbers from the user.
4. For each number, ask the user to choose the type of number they want to enter.
5. Based on the user's choice, read the number and store it in the corresponding field of the union.
6. Increment the counter for the corresponding field of the union.
7. Repeat steps 4-6 until all the numbers have been entered.
8. Print the numbers entered in each format by iterating through the array and printing the values stored in the corresponding fields of the union.

## CODE:

```c
#include <stdio.h>
#include <stdlib.h>
union Number {
    char number[100];
    int num;
    float fnum;
    double dnum;
};


int main() {
    int size,choice;
    int number_counter = 0, num_counter = 0, fnum_counter = 0, dnum_counter = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    union Number numbers[size];
    printf("Enter %d numbers: \n", size);
    for (int i=0; i<size; i++) {
        printf("Enter the type of number you want to store:\n");
        printf("1. String\n2. Integer\n3. Float\n4. Double\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
                printf("Enter the number: ");
                scanf("%s",numbers[i].number);
                number_counter++;
                break;
            case 2:
                printf("Enter the number: ");
                scanf("%d",&numbers[i].num);
                num_counter++;
                break;
            case 3:
                printf("Enter the number: ");
                scanf("%f",&numbers[i].fnum);
                fnum_counter++;
                break;
            case 4:
                printf("Enter the number: ");
                scanf("%lf",&numbers[i].dnum);
                dnum_counter++;
                break;
            default:
                printf("Invalid choice");
                break;
        }
    }
    printf("The numbers are:\n");
    if (number_counter > 0) {
        printf("The string numbers are: ");
        for (int i = 0; i < number_counter; i++) {
            printf("%s\n ", numbers[i].number);
        }
    }
    if (num_counter > 0) {
        printf("The integer numbers are: ");
        for (int i = number_counter; i < number_counter+num_counter; i++) {
            printf("\n%d ", numbers[i].num);
        }
    }
    if (fnum_counter > 0) {
        printf("The float numbers are: ");
        for (int i = num_counter+number_counter; i < num_counter+number_counter+fnum_counter; i++) {
            printf("\n%f ", numbers[i].fnum);
        }
    }
    if (dnum_counter > 0) {
        printf("The double numbers are: ");
        for (int i = num_counter+number_counter+fnum_counter; i < num_counter+number_counter+fnum_counter+dnum_counter; i++) {
            printf("\n%lf ", numbers[i].dnum);
        }
    }
    return 0;
}
```
<div style="page-break-after: always"></div>

## OUTPUT:

```
$ Vishal/Record/ ./union
Enter the size of the array: 2
Enter 2 numbers:
Enter the type of number you want to store:
1. String
2. Integer
3. Float
4. Double
Enter your choice: 1
Enter the number: one
Enter the type of number you want to store:
1. String
2. Integer
3. Float
4. Double
Enter your choice: 2
Enter the number: 2
The numbers are: 
The string numbers are: one
The integer numbers are: 2
```

## RESULT:
An array of numbers in various formats will be created and stored in a union. The numbers will be printed in the corresponding formats.

<div style="page-break-after: always"></div>

## AIM: 
Read two strings str1 and str2 from the user. The size of each string should be allocated dynamically which is entered by the user. A new string str3 should concatenate the first half of str1 and second half of str2. The size of str3 should also be estimated in runtime and allocated sufficient memory dynamically to hold relevant parts of str1 and str2.

Note: If length is odd, then first half is integer part of division by 2 and second half is length minus integer part (i.e, if length is 5, then first half is 2
chars, and 3 chars (i.e., 5-2) is the second half).

## ALGORITHM:

1. Define a Main Function

```
length(char*) This Function calculates the Length of the Given String Argument
```

2. Define two Strings Dynamically and get the Inputs from the User and store them Accordingly. Define the Lengths of Both the String and Declare a variable which will be used to hold the values of half lengths of both the string and declare a variable to hold the length of String Three as well

3. As given in the above Question when the Length of String One is Odd we need to only store the integer part in it's half length variable and we have to store ((strlentwo / 2) - strlentwo) in the half length variable of String Two

4. Then we dynamically allocate String Three with its length = halflenstrone + halflenstrtwo

5. We use two seperate while loops to copy the appropriate characters from strone and strtwo to strthree

6. Print String Three

## CODE:

#include <stdio.h>
#include <stdlib.h>

```c
// This Function Calculates the Length of the Given String Argument
int length(char *str){
  int count = 0;
  while(*str){
    count++;
    str++;
  }
  return count;
}

int main() {
  char *str_one = malloc(100 * sizeof(char)), *str_two = malloc(100 * sizeof(char)); // Dynamically Allocating String One
  printf("String One: ");
  scanf("%s", str_one);
  getchar();
  printf("String Two: ");
  scanf("%s", str_two);
  getchar();

  // Defining the Length of String One, String Two and Half Length of those two as well. Then we define the length of String Three as 0
  int str_len_one = length(str_one), str_len_two = length(str_two), half_len_one = 0, half_len_two = 0, str_three_len = 0;

  // If the Length of String One is Odd then the Integer part of str_len_one / 2 will be stored in half_len_one and str_len_two - (str_len_two / 2) will be stored in half_len_two
  if(str_len_one % 2 != 0){
    half_len_one = str_len_one / 2;
    half_len_two = str_len_two - (str_len_two / 2);
  } else {
    half_len_one = str_len_one / 2; // Else the Half Length finding follow the Basic division by 2
    half_len_two = str_len_two / 2;
  }

  str_three_len = half_len_one + half_len_two; // Defining the Length of String Three as per the Condition
  char *str_three = malloc(str_three_len * sizeof(char)); // Dynamically Allocating the Space for String Three
  char *str_three_ptr = str_three; // Creating a Pointer to String three so that we won't modify the actual pointer pointing to the area allocated for string three

  // We know str_three_len = half_len_one + half_len_two. So we traverse through the str_one string for half_len_one number of times and we are storing those characters in str_three_ptr which in turn stores it in str_three
  while(*str_one && half_len_one){
    *str_three_ptr++ = *str_one++; // Incrementing str_three_ptr and str_one so that the chars of str_one will be assigned to str_three
    half_len_one--; // Decrements half_len_one so that the loop will exit when half_len_one becomes zero
  }

  char *str_two_end = str_two + half_len_two; // Since we need to assign the second half of the str_two we create a pointer which points to the second half of the string str_two and assign the characters in str_two till the half_len_two becomes zero

  while(*str_two && half_len_two){
    *str_three_ptr++ = *str_two_end++;
    half_len_two--;
  }

  printf("String Three: %s\n", str_three);
}
```

## OUTPUT:

```
Vishal/Record/ ./Concat
String One: abc
String Two: wxyz
STR_THREE: ayz
```

## RESULT:

The above program succesfully concatenates the two input strings according to the Condition given

<div style="page-break-after: always"></div>

## AIM:
The aim of this code is to manage data related to waiters, items, and bills in a restaurant. It allows the user to add new waiters, items, and bills, and also provides functionality to print the list of waiters, items, and bills, and a summary of sales made by each waiter for each item.

## ALGORITHM:
1. Initialize structs for waiters, items, and bills, and corresponding sizes for each struct.
2. Implement functions to add new waiters, items, and bills, and update the corresponding sizes.
3. Implement functions to print the list of waiters, items, and bills.
4. Implement a function to print the summary of sales made by each waiter for each item. This function will iterate through the bills array and update a summary array with the sales made by each waiter for each item. It will then print the summary array along with the names of the waiters and items.

## CODE:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define WAITERS 5
#define ITEMS 5



struct waiter {
    int id;
    char name[100];
};

struct Bill {
    int waiter_id;
    int item_id;
    float cost;
};

struct Item {
    int id;
    char name[100];
    float price;
};

void addWaiter(struct waiter *waiters, int *size) {
    printf("Enter the name of the waiter: ");
    scanf("%s", waiters[*size].name);
    waiters[*size].id = *size + 1;
    *size += 1;
    printf("Waiter added successfully\n\n");
}

void addItem(struct Item *items, int *size) {
    printf("Enter the name of the item: ");
    scanf("%s", items[*size].name);
    items[*size].id = *size + 1;
    *size += 1;
    printf("Item added successfully\n\n");
}

void addBill(struct Bill *bills, int *size) {
    printf("Enter the waiter id: ");
    scanf("%d", &bills[*size].waiter_id);
    printf("Enter the item id: ");
    scanf("%d", &bills[*size].item_id);
    printf("Enter the cost of the item: ");
    scanf("%f", &bills[*size].cost);
    *size += 1;
    printf("Bill added successfully\n\n");
}

void printWaiters(struct waiter *waiters, int size) {
    printf("The waiters are:\n");
    for (int i=0; i<size; i++) {
        printf("%d. %s\n", i+1, waiters[i].name);
    }
    printf("\n\n");
}

void printItems(struct Item *items, int size) {
    printf("The items are:\n");
    for (int i=0; i<size; i++) {
        printf("%d. %s - %frs\n", i+1, items[i].name, items[i].price);
    }
    printf("\n\n");
}

void printBills(struct Bill *bills, int size) {
    printf("The bills are:\n");
    for (int i=0; i<size; i++) {
        printf("The waiter id is: %d\n", bills[i].waiter_id);
        printf("The item id is: %d\n", bills[i].item_id);
        printf("The cost of the item is: %0.2f\n", bills[i].cost);
        printf("\n");
    }
    printf("\n");
}

void line() {
    printf("\n------------------------------------------------------------------\n"); 
    
}

void printSummary(struct Bill *bills, int size, struct waiter *waiters, int waiter_size, struct Item *items, int item_size) {
    float summary[item_size][waiter_size];
    line();
    for (int i=0; i<item_size; i++) {
        for (int j=0; j<waiter_size; j++) {
            summary[i][j] = 0;
        }
    }
    
    for (int i=0; i<size; i++) {
        summary[bills[i].item_id-1][bills[i].waiter_id-1] += bills[i].cost;
    }
    
    printf("\tWaiter\t");
    for (int i=0; i<waiter_size; i++) {
        printf("\t%s\t", waiters[i].name);
    }
    line();
    
    for (int i=0; i<item_size; i++) {
        printf("\t%s\t", items[i].name);
        float total = 0;
        for (int j=0; j<waiter_size; j++) {
            printf("\t%0.2f\t", summary[i][j]);
            total += summary[i][j];
        }
        printf("\t%0.2f\n", total);
    }
    printf("\tTotal\t");
    for (int i=0; i<waiter_size; i++) {
        float total = 0;
        for (int j=0; j<item_size; j++) {
            total += summary[j][i];
        }
        printf("\t%0.2f\t", total);
    }
    printf("\n");
}


int main() {
    struct waiter waiters[WAITERS];
    int waiter_size = 0;
    struct Item items[ITEMS];
    int item_size = 0;
    struct Bill bills[100];
    int bill_size = 0;
    int choice;
    while (true) {
        printf("1. Add a waiter\n");
        printf("2. Add an item\n");
        printf("3. Add a bill\n");
        printf("4. Display waiters\n");
        printf("5. Display items\n");
        printf("6. Display bills\n");
        printf("7. Display summary\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                addWaiter(waiters, &waiter_size);
                break;
            case 2:
                addItem(items, &item_size);
                break;
            case 3:
                addBill(bills, &bill_size);
                break;
            case 4:
                printWaiters(waiters, waiter_size);
                break;
            case 5:
                printItems(items, item_size);
                break;
            case 6:
                printBills(bills, bill_size);
                break;
            case 7:
                printSummary(bills, bill_size, waiters, waiter_size, items, item_size);
                break;
            case 8:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
```

<div style="page-break-after: always"></div>

## OUTPUT:
```
$ Vishal/Record/ ./restaurant_bill
1. Add a waiter
2. Add an item
3. Add a bill
4. Display waiters
5. Display items
6. Display bills
7. Display summary
8. Exit
Enter your choice: 1
Enter the name of the waiter: aditya
Enter your choice: 1
Enter the name of the waiter: vishal
Waiter added successfully
Enter your choice: 2
Enter the name of the item: pizza
Item added successfully
Enter your choice: 2
Enter the name of the item: burger
Item added successfully
Enter your choice: 3
Enter the waiter id: 1
Enter the item id: 1
Enter the cost of the item: 100
Bill added successfully
Enter your choice: 3
Enter the waiter id: 1
Enter the item id: 2
Enter the cost of the item: 50
Bill added successfully
Enter your choice: 3
Enter the waiter id: 2
Enter the item id: 1
Enter the cost of the item: 200
Bill added successfully
Enter your choice: 7
------------------------------------------------------------------
        Waiter           aditya           vishal        
------------------------------------------------------------------
        pizza           100.00           200.00           300.00
        burger          50.00            0.00            50.00
        Total           150.00           200.00           350.00
```
## RESULT:
Hence, a restaurant bill management system is designed.

<div style="page-break-after: always"></div>


## AIM:
To generate the salary slip of an employee using a structure and functions.

## ALGORITHM:
1. Declare a structure `salary` with the following members: name, id, basic salary, dearness allowance, house rent allowance, provident fund, gross salary, net salary.
2. Define the `getInput()` function to get the input from the user. This function takes a pointer to the salary structure as an argument.
3. Define the `compute()` function to calculate the gross salary and net salary. This function also takes a pointer to the salary structure as an argument.
4. Define the `display()` function to display the salary slip. This function also takes a pointer to the salary structure as an argument.
5. In the main function, create an object of the salary structure and call the `getInput()` function to get the input from the user.
6. Call the `compute()` function to calculate the gross salary and net salary.
7. Call the `display()` function to display the salary slip.

## CODE:
```c
#include <stdio.h>
#include <string.h>

struct salary {
    char name[100]; // Employee name
    int id;     // Employee ID
    int basic;  // Basic Salary
    int da;     // Dearness Allowance
    int hra;    // House Rent Allowance
    int pf;     // Provident Fund
    int gross;  // Gross Salary
    int net;    // Net Salary
};
void getInput(struct salary *s1) {
    printf("Enter the name of the employee: ");
    scanf("%s", s1->name);
    printf("Enter the ID of the employee: ");
    scanf("%d", &s1->id);
    printf("Enter the basic salary of the employee: ");
    scanf("%d", &s1->basic);
    printf("Enter the DA of the employee: ");
    scanf("%d", &s1->da);
    printf("Enter the HRA of the employee: ");
    scanf("%d", &s1->hra);
    printf("Enter the PF of the employee: ");
    scanf("%d", &s1->pf);
}
void compute(struct salary *s1) {
    s1->gross = s1->basic + s1->da + s1->hra;   // Gross Salary is the sum of Basic salary dearness allowance and house rent allowance
    s1->net = s1->gross - s1->pf;      // Net Salary is the gross salary minus the provident fund
}
void display(struct salary *s1) {
    printf("The salary slip of %s is as follows: ", s1->name);
    printf("\n--------------------------------------------");
    printf("\n Name: %s", s1->name);
    printf("\n ID: %d", s1->id);
    printf("\n---------------------------------");
    printf("\n| Basic: %d | DA: %d | HRA: %d |", s1->basic, s1->da, s1->hra);
    printf("\n---------------------------------");
    printf("\n| Gross: %d | PF: %d | Net: %d |", s1->gross, s1->pf, s1->net);
    printf("\n---------------------------------");
}

int main() {
    struct salary s1;
    getInput(&s1);
    compute(&s1);
    display(&s1);
    return 0;
}
```

## OUTPUT:
```
$ Vishal/Record/ ./salary_slip
Enter the name of the employee: Aditya
Enter the ID of the employee: 1
Enter the basic salary of the employee: 10000
Enter the DA of the employee: 1000
Enter the HRA of the employee: 500
Enter the PF of the employee: 500
The salary slip of Aditya is as follows:
--------------------------------------
 Name: Vishal
 ID: 1
-------------------------------------
| Basic: 10000 | DA: 1000 | HRA: 500 |
-------------------------------------
| Gross: 11500 | PF: 500 | Net: 11000 |
-------------------------------------

```

## RESULT:
The salary slip of the employee is generated and displayed on the screen with the required formatting.

<div style="page-break-after: always"></div>


## AIM:
The aim of this code is to create a program that can store and manipulate data about students, including their name, roll number, marks in various subjects, total marks, rank, date of birth, age, and gender.

## ALGORITHM:
1. Define a struct and an enum to store data about a student.
2. Define a function `totalMarks` to calculate the total marks of a student.
3. Define a function `getData` to input data about multiple students.
4. Define a function `printData` to print data about multiple students.
5. In the `main` function, ask the user for the number of students and call the `getData` and `printData` functions to input and display the data about the students.

## CODE:
```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SUBJECTS 5

typedef struct date {
    int day;
    int month;
    int year;
} date;

typedef enum gender {
    MALE, FEMALE, TRANSGENDER
} gender;

typedef struct student {
    int rollnum;
    char name[100];
    int marks[SUBJECTS];
    int totalMarks;
    int rank;
    date dateofbirth;
    int age;
    gender genderOfStudent;
} student;

int totalMarks(student *s) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum = sum + s->marks[i];
    }
    return sum;
}


void getData(student *s, int n) {
    int input;
    for (int i = 0; i < n; i++) {
        printf("Enter the name of student %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter the roll number of the student: ");
        scanf("%d", &s[i].rollnum);
        printf("\nEnter the marks of %s: ", s[i].name);
        for (int j = 0; j < 5; j++) {
            printf("\nEnter the marks of subject %d: ", j+1);
            scanf("%d", &s[i].marks[j]);
        }
        s[i].totalMarks = totalMarks(&s[i]);
        printf("Enter the date of birth of the student  (dd mm yyyy) : ");
        scanf("%d %d %d", &s[i].dateofbirth.day, &s[i].dateofbirth.month, &s[i].dateofbirth.year);
        printf("Enter the age of the student: ");
        scanf("%d", &s[i].age);
        printf("Enter the gender: \n1. MALE\n2. FEMALE\n3. TRANSGENDER\n");
        scanf("%d", &input);
        /*
        if (input == 1 ) {
            s[i].genderOfStudent = MALE
        }
        else if (input == 2) {
            s[i].genderOfStudent = FEMALE
        }
        else if (input == 3) {
            s[i].genderOfStudent
        
        */
        s[i].genderOfStudent = (input == 1) ? MALE : (input == 2) ? FEMALE : TRANSGENDER;

    }
}

void printData(student *s, int n) {
    for (int i = 0; i < n; i++) {
        char gender[100];
        printf("The details of student %d are: ", i+1);
        printf("\nName: %s", s[i].name);
        switch (s[i].genderOfStudent) {
            case MALE:
                snprintf(gender, sizeof(gender), "\nGender: MALE");
                break;
            case FEMALE:
                snprintf(gender, sizeof(gender), "\nGender: FEMALE");
                break;
            case TRANSGENDER:
                snprintf(gender, sizeof(gender), "\nGender: TRANSGENDER");
                break;
        };
        
        printf(gender);
        printf("\nRoll number: %d", s[i].rollnum);
        printf("\nMarks: ");
        for (int j = 0; j < 5; j++) {
            printf("\n\tSubject %d: %d", j+1, s[i].marks[j]);
        }
        printf("\nTotal marks: %d", s[i].totalMarks);
        printf("\nRank: %d", s[i].rank+1);
        printf("\nDate of birth: %d/%d/%d", s[i].dateofbirth.day, s[i].dateofbirth.month, s[i].dateofbirth.year);
        printf("\nAge: %d", s[i].age);
        printf("\n\n\n");       
    }
}


void computeRank(student *students, int n) {
    // sort students in descending order of total marks
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].totalMarks < students[j + 1].totalMarks) {
                student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            };
        };
    };

    // assign ranks to students
    for (int i=0; i<n; i++) {
        students[i].rank = i;        
    };
    
    // if total marks of two students are same, assign the same rank to both of them
    for (int i=0; i<n; i++) {
        if (students[i].totalMarks == students[i+1].totalMarks) {
            students[i+1].rank = students[i].rank;
        };
    };

}


int main() {
    int n;
    printf("\nEnter the number of students: ");
    scanf("%d", &n);
    student s[n];
    getData(s, n);
    computeRank(s, n);
    printData(s, n);
    return 0;   
}
```
## OUTPUT:
```
$ Vishal/Record/ ./marksheet
Enter the number of students: 2
Enter the name of student 1: Aditya
Enter the roll number of the student: 1

Enter the marks of Aditya:
Enter the marks of subject 1: 90
Enter the marks of subject 2: 80
Enter the marks of subject 3: 70
Enter the marks of subject 4: 80
Enter the marks of subject 5: 90
Enter the date of birth of the student  (dd mm yyyy) : 21 10 2004
Enter the age of the student: 18
Enter the gender: 
1. MALE
2. FEMALE
3. TRANSGENDER
1
Enter the name of student 2: Vishal
Enter the roll number of the student: 2

Enter the marks of Vishal:
Enter the marks of subject 1: 80
Enter the marks of subject 2: 90
Enter the marks of subject 3: 90
Enter the marks of subject 4: 70
Enter the marks of subject 5: 70

Enter the date of birth of the student  (dd mm yyyy) : 01 01 2000
Enter the age of the student: 23
Enter the gender: 
1. MALE
2. FEMALE
3. TRANSGENDER
1
The details of student 1 are: 
Name: Aditya
Gender: MALE
Roll number: 1
Marks:
        Subject 1: 90
        Subject 2: 80
        Subject 3: 70
        Subject 4: 80
        Subject 5: 90
Total marks: 410
Rank: 1
Date of birth: 21/10/2004
Age: 18


The details of student 2 are:
Name: Vishal
Gender: MALE
Roll number: 2
Marks:
        Subject 1: 80
        Subject 2: 90
        Subject 3: 90
        Subject 4: 70
        Subject 5: 70
Total marks: 400
Rank: 2
Date of birth: 1/1/2000
Age: 23

```

## RESULT:
The program will get data for n students, compute and display their ranks, and print the mark sheet of a particular student with all their details.
