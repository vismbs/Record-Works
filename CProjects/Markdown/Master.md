# PROGRAMMING IN C LAB
## Name: Nitin
## Reg.No: 22110347

<div style="page-break-after: always"></div>

# LOOPS

## AIM:
Print this pattern using loops, get the number of rows as an input from the
user.

```
*
* *
* * *
```

## ALGORITHM:

The above program loads a Pattern corresponding to the number of input rows given by the user.

1. Declare the necessary headers for the file to run.

2. Declare an integer ```n``` to hold the number of iterations input from the user.

3. Declare two ```loop``` loops. One for printing newline whenever the closing condition is reached in the second ```loop``` loop which is used to print the ```*```  characters.

## CODE:

```c
#include <stdio.h>  
  
int main(void){  
   int n;  
   printf("Enter the Number of Rows: ");  
   scanf("%d", &n);  
   for(int i = 1; i <= n; i++){  
     for(int j = 0; j < i; j++){  
        printf("*");  
     }  
     printf("\n");  
   }  
}  
```

## OUTPUT:

```
$ Nitin/CProjects/ ./Pattern
Enter the Number of Rows: 2
*
* *
```

## RESULT:

Hence this Program prints this pattern using loops and gets the number of rows as an input from the
user.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopOne.png" alt="FLOWCHART" height="800px"/>

# AIM:
Print a triangle shaped pattern using * like the pattern given below, get the number of rows as an input from the user.

```
*
* *
* * *
```

## ALGORITHM:

The above program loads a Pattern corresponding to the number of input rows given by the user.

1. Declare the necessary headers for the file to run.

2. Declare an integer ```n``` to hold the number of iterations input from the user.

3. Declare three ‘for’ loops. One for printing newline whenever the closing condition is reached in the second ‘for’ loop which is used to print the ‘*’ characters and the third ‘for’ loop to add appropriate number of spaces to generate the above pattern.

## CODE:

```c
#include <stdio.h>

int main(void){
  int n;
  printf("Enter the Number of Rows: ");
  scanf("%d", &n);

  for(int i = 1; i <= n; i++){
    for(int j = 0; j < i; j++){
      if(j == 0){
         for(int k = n - i; k > 0; k--){
          printf(" ");
        }
      }
      printf("* ");
    }
    printf("\n");
  }
} 
```
<div style="page-break-after: always"></div>

## OUTPUT:

```
$ Nitin/CProjects/ ./Pattern
Enter the Number of Rows: 5
	*
   * *
  * * *
 * * * *
* * * * *
```
## RESULT:

Hence this program prints a triangle shaped pattern using * like the pattern given abovea and gets the number of rows as an input from the user.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopTwo.png" alt="FLOWCHART" height="800px"/>

# AIM:
Get an input of n numbers and find the largest and smallest out of the entered array.

## ALGORITHM:
1. Get the size of the Array and the Elements of the Array using a ```for``` loop.
2. Declare two integers ```big``` and ```small```. Set ```big``` to 0 and small to the first element of the array.
3. Declare a ```for``` loop to iterate through the array.
4. Define two if conditions, one to check whether the current number is bigger than the ```big``` and another one to check whether the current number is smaller than the ```small```.
5. If any of those conditions satisfy make sure to re-initialize the appropriate variable and set it to the current number inside the for loop.
6. Print the Biggest and the Smallest element in the Array.

## CODE:

```c
#include<stdio.h>

int main(void){
  int elem, big, small;
  printf("Enter the Number of Elements in the Array: ");
  scanf("%d", &elem);
  getchar();

  int arr[elem];

  for(int i = 0; i < elem; i++){
    printf("Elem %d: ", i);
    scanf("%d", &arr[i]);
    getchar();
  }

  big = 0;
  small = arr[0];

  for(int i = 0; i < elem; i++){
    if(arr[i] > big){
      big = arr[i];
    }

    if(arr[i] < small){
      small = arr[i];
    }
  }

  printf("Big: %d | Small: %d\n", big, small);
} 
```


## OUTPUT:

```
$ Nitin/CProjects/ ./BigSmall
Enter the Number of Elements in the Array: 3
Elem 0: 1
Elem 1: 2
Elem 2: 3
Big: 3 | Small: 1
```
## RESULT:

Hence this program takes an input of n numbers and finds the largest and smallest out of the entered array.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopThree.png" alt="FLOWCHART" height="800px"/>

# AIM:
If a five-digit number is input through the keyboard, write a program to calculate the sum of its digits.

## ALGORITHM:
1. Declare a Character and an Integer as a Counter and an Integer to hold the Sum.
2. Define a While Loop using the Common Idiomatic Condition ((Character = getchar()) != ‘\n’).
3. Define an if Condition to break out of the loop when the counter gets to 5. 
4. Increment the counter every time the user enters the character and add that character to sum.
5. Before adding that Character to the Sum you have to subtract it by 48 in order to get the number or else, you’ll end up adding the ASCII value instead.
6. Print the Sum.

## CODE:

```c
#include <stdio.h>

int main(void){
  char inp = 0;
  int sum = 0, counter = 0;

  while(((inp = getchar()) != '\n') && counter < 5){
    sum += (inp - 48);
    counter++;
  }

  printf("%d", sum);
}
```

## OUTPUT:

```
$ Nitin/CProjects/ ./Fivesum
12345
15
```

## RESULT:

Hence a five-digit number is input through the keyboard in this program and it calculates the sum of its digits.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopFour.png" alt="FLOWCHART" height="800px"/>

# AIM:
A cashier has currency notes of denominations 10, 50 and 100. If the amount to be withdrawn is input through the keyboard in hundreds, find the total number of currency notes of each denomination the cashier will have to give to the withdrawer. Use while loops to solve this problem.

## ALGORITHM:

1. Step 1: PRINT AMOUNT :
2. Step 2: SET amount := 0, ten := 0, fifty := 0, hundreds := 0
3. Step 3: READ  amount
4. Step 4: Repeat step 1 to  3 while amount > 10
5. Step 1: if amount > = 100 then :
6. Step 1: SET amount := amount - 100
7. Step 2: SET hundreds := hundreds + 1
8. End of if block
9. Step 2: else :
10. Step 1: if amount > = 50 then :
11. Step 1: SET amount := amount - 50
12. End of if block
13. Step 2: SET fifty := fifty + 1
14. End of else block
15. Step 3: else :
16. Step 1: if amount > = 10 then :
17. Step 1: SET amount := amount - 10
18. End of if block
19. Step 2: SET ten := ten + 1
20. End of else block
21. End of while block
22. Step 4: PRINT hundreds , fifty , ten , amount

<div style="page-break-after: always"></div>

## CODE:

```c
#include <stdio.h>

int main() {
    printf("AMOUNT: ");
    int amount = 0, ten = 0, fifty = 0, hundreds = 0;
    scanf("%d", &amount);


    while (amount > 10) {
        if (amount >= 100) {
            amount -= 100;
            hundreds++;
        } else if (amount >= 50) {
            amount -= 50;
            fifty++;
        } else if (amount >= 10) {
            amount -= 10;
            ten++;
        }
    }

    printf("Denominations:\n100: \t%d\n50: \t%d\n10: \t%d\nCH: \t%d\n", hundreds, fifty, ten, amount);
}
```

<div style="page-break-after: always"></div>

## OUTPUT:

```
$ Nitin/CProjects/ ./Denominations
AMOUNT: 1589
Denominations:
100: 	15
50: 	1
10: 	3
CH: 	9
```

## RESULT: 

Hence this Cashier Problem is Solved

## FLOWCHART:
<img src="./LoopFive.png" alt="FLOWCHART" height="400px"/>

<div style="page-break-after: always"></div>

# AIM:
Write a program to display n natural numbers and find them sum of them.

## ALGORITHM:

1. Begin procedure main(void):-
2. Step 1: SET n := 0, sum := 0
3. Step 2: PRINT Enter N :
4. Step 3: READ  n
5. Step 4: Repeat step 1 to 3 while i < n ;
6. Step 1: PRINT i
7. Step 2: SET sum := sum + i
8. Step 3: SET i := i + 1
9. End of for block
10. Step 4: PRINT sum
11. End procedure

## CODE:

```c
#include<stdio.h>

int main(void){
  int n = 0, sum = 0;
  printf("Enter N: ");
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    printf("%d ", i);
    sum += i;
  }

  printf("\nSUM: %d", sum);
}
```

## OUTPUT:

```
$ Nitin/CProjects/ ./Natural
Enter N: 6
0 1 2 3 4 5
SUM: 15
```

## RESULT:

Hence this program displays n natural numbers and finds the sum of them.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopSix.png" alt="FLOWCHART" height="800px"/>

# AIM:
Find Fibonacci of n natural numbers.

## ALGORITHM:

1. Begin procedure main(void):-
2. Step 1: SET a := 0, b := 1, c := 0
3. Step 2: PRINT Enter N :
4. Step 3: READ  n
5. Step 4: Repeat step 1 to 6 while i < n ;
6. Step 1: if i = 0 then :
7. Step 1: PRINT a , b
8. End of if block
9. Step 2: PRINT a + b
10. Step 3: SET c := a + b
11. Step 4: SET a := b
12. Step 5: SET b := c
13. Step 6: SET i := i + 1
14. End of for block
15. End procedure

## CODE:

```c
#include <stdio.h>

int main(void){
  int a = 0, b = 1, n, c = 0;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    if(i == 0) printf("%d %d ", a, b);
    printf("%d ", a + b);
    c = a + b; a = b; b = c;
  }
}
```

## OUTPUT:

```
$ Nitin/CProjects/ ./Fibonacci
Enter N: 4
0 1 1 2 3 5
```

## RESULT:

This program finds the fibonacci series of n natural numbers.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopSeven.png" alt="FLOWCHART" height="800px"/>

<div style="page-break-after: always"></div>

# STRINGS AND ARRAYS

## AIM:
To check if the given string is a palindrome or not.

## ALGORITHM:
1. Get a string from the user and store it in a variable and then find the length of the string.
2. Check if the string is a palindrome by comparing the first character with the last character, second character with the second last character and so on.
3. If all the characters match, print the string is a palindrome. If any character does not match, print the string is not a palindrome.

## CODE:
```c
#include <stdio.h>
int main() {
    char str[100];
    int i, length = 0, flag = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    while (str[length] != '\0')
        length++;
    for (i = 0; i < length; i++) {
        if (str[i] != str[length - i - 1]) {
            flag = 1;
            break;
        }
    }
    if (flag) 
        printf("%s is not a palindrome", str);
    else 
        printf("%s is a palindrome", str);
    return 0;
}
```

## OUTPUT:
```
$ Nitin/CProjects/ ./palindrome
Enter a string: Sheehs
Sheehs is a palindrome
```

## RESULT:
The program will check if the given string is a palindrome or not and print the result accordingly.


<div style="page-break-after: always"></div>

## AIM:
To get two matrixes as input from the user and perform matrix addition and matrix multiplication on them

## ALGORITHM:
1. Get the number of rows and columns for the first matrix from the user and store them in variables row_input1 and column_input1
2. Create a 2D array called matrix1 with row_input1 rows and column_input1 columns
3. Create a pointer array called matrix_ptr with row_input1 elements
4. Assign the address of each row in matrix1 to each element in matrix_ptr
5. Call the function get_matrix_input() to get the values for each element in matrix1 from the user
6. Get the number of rows and columns for the second matrix from the user and store them in variables row_input2 and column_input2
7. Create a 2D array called matrix2 with row_input2 rows and column_input2 columns
8. Create a pointer array called matrix2_ptr with row_input2 elements
9. Assign the address of each row in matrix2 to each element in matrix2_ptr
10. Call the function get_matrix_input() to get the values for each element in matrix2 from the user
11. Get the choice of operation from the user
12. If the choice is 1, perform matrix addition by calling the function matrix_addition() and passing it the required parameters
13. If the choice is 2, perform matrix multiplication by calling the function matrix_multiplication() and passing it the required parameters

## CODE:
```c
#include <stdio.h>

int get_matrix_input(int rows, int cols, int *array_val[]) {
    for (int i=0; i<rows; i++) {         
        for (int j = 0; j<cols; j++) {   
            printf("\nEnter the element %d %d: ", i+1, j+1);
            scanf("%d", &array_val[i][j]);
        }
    }
    return 0;
}

void print_matrix(int rows, int cols, int *array_val[]) {
    for (int i=0; i<rows; i++) {         
        for (int j = 0; j<cols; j++) {   
            printf("%d ", array_val[i][j]);
        }
        printf("\n");
    }
}

void matrix_addition(int row1, int col1, int row2, int col2, int *array_val1[], int *array_val2[], int *array_val3[]) {
    if (row1 != row2 || col1 != col2) {
        printf("Addition operation cannot be performed on the given two matrices\n");
        return;
    }
    for (int i=0; i<row1; i++) {         
        for (int j = 0; j<col1; j++) {   
            array_val3[i][j] = array_val1[i][j] + array_val2[i][j];
        }
    }
}

void matrix_multiplication(int row1, int col1, int row2, int col2, int *array_val1[], int *array_val2[], int *array_val3[]) {
    if (col1 != row2) {
        printf("Multiplication operation cannot be performed on the given two matrices\n");
        return;
    }
    for (int i=0; i<row1; i++) {         
        for (int j = 0; j<col2; j++) {   
            array_val3[i][j] = 0;
            for (int k=0; k<col1; k++) {
                array_val3[i][j] = array_val3[i][j] + array_val1[i][k] * array_val2[k][j];
            }
        }
    }
}

int main() {
    int row_input1, column_input1, row_input2, column_input2;
    printf("Enter the number of rows for the first matrix: ");
    scanf(" %d", &row_input1);
    printf("Enter the number of columns for the first matrix: ");
    scanf(" %d", &column_input1);
    int matrix1[row_input1][column_input1];
    int choice;
    int *matrix_ptr[row_input1];
    for (int i=0; i<row_input1; i++) {  
        matrix_ptr[i] = matrix1[i];
    }
    get_matrix_input(row_input1, column_input1, matrix_ptr);
    printf("Enter the number of rows for the second matrix: ");
    scanf(" %d", &row_input2);
    printf("Enter the number of columns for the second matrix: ");
    scanf(" %d", &column_input2);
    int matrix2[row_input2][column_input2];
    int *matrix2_ptr[row_input2];
    for (int i=0; i<row_input2; i++) {
        matrix2_ptr[i] = matrix2[i];
    }
    get_matrix_input(row_input2, column_input2, matrix2_ptr);
    printf("What operations do you want to perform on the two matrices? \n");
    printf("1. Addition \n");
    printf("2. Multiplication \n");
    printf("Enter your choice: ");
    scanf(" %d", &choice);
    if (choice == 1) {
        int matrix3[row_input2][column_input2];
        int *matrix3_ptr[row_input2];
        for (int i=0; i<row_input2; i++) {
            matrix3_ptr[i] = matrix3[i];
        }
        matrix_addition(row_input1, column_input1, row_input2, column_input2, matrix_ptr, matrix2_ptr, matrix3_ptr);
        printf("The matrix is: \n");
        print_matrix(row_input1, column_input1, matrix3_ptr);
    }
    else if (choice == 2) {
        int matrix3[row_input1][column_input2];
        int *matrix3_ptr[row_input1];
        for (int i=0; i<row_input1; i++) {
            matrix3_ptr[i] = matrix3[i];
        }
        matrix_multiplication(row_input1, column_input1, row_input2, column_input2, matrix_ptr, matrix2_ptr, matrix3_ptr);
        printf("The matrix is: \n");
        print_matrix(row_input1, column_input2, matrix3_ptr);
    }
    else {
        printf("Invalid choice");
    }
}
```

## OUTPUT:

```
$ Nitin/CProjects/ ./matrix_operations
Enter the number of rows for the first matrix: 2
Enter the number of columns for the first matrix: 2
Enter the element 1 1: 1
Enter the element 1 2: 2
Enter the element 2 1: 3
Enter the element 2 2: 4
Enter the number of rows for the second matrix: 2
Enter the number of columns for the second matrix: 2
Enter the element 1 1: 5
Enter the element 1 2: 6
Enter the element 2 1: 7
Enter the element 2 2: 8
What operations do you want to perform on the two matrices?
1. Addition
2. Multiplication
Enter your choice: 1
The matrix is:
6 8
10 12
```

## RESULT:
The user will be able to get two matrixes as input and perform matrix addition and matrix multiplication on them. The result of the operation will be printed to the screen.

<div style="page-break-after: always"></div>

## AIM:
To get an array of elements, reverse it and print it to the user.
## ALGORITHM:
1. Get the length of the array from the user and then get the elements of the array from the user.
2. Reverse the array by storing each element of the original array at the corresponding position in the 4.reversed array starting from the last element.
3. Print the reversed array to the user.

## CODE:
```c
int main() {
    int array[100], array_reverse[100], array_length;
    printf("Enter the length of the array: ");
    scanf("%d", &array_length);
    printf("Enter the elements of the array: \n");
    for (int i=0; i<array_length; i++) {
        printf("Enter the element at index %d: ", i); 
        scanf("%d", &array[i]);
    }
    for (int i=0; i<array_length; i++) {
        array_reverse[i] = array[array_length-i-1];
    }
    printf("The reversed array is: ");
    for (int i=0; i<array_length; i++) 
        printf("%d ", array_reverse[i]);
    return 0;
}
```
## OUTPUT:
```
$ Nitin/CProjects/ ./array_reverse
Enter the length of the array: 5
Enter the elements of the array:
Enter the element at index 0: 1
Enter the element at index 1: 2
Enter the element at index 2: 3
Enter the element at index 3: 4
Enter the element at index 4: 5
The reversed array is: 5 4 3 2 1
```

## RESULT:
An array of elements will be obtained from the user, reversed and printed to the user.

<div style="page-break-after: always"></div>

## AIM:
Write a program to input an array, apply bubble sort and search for an element in the sorted or unsorted array
## ALGORITHM:
1. Declare an array and get its input from the user
2. Ask the user if they want to sort the array
3. If the user wants to sort the array, apply bubble sort and store the sorted array in a new array
4. If the user does not want to sort the array, use the original unsorted array
5. Ask the user to enter the element that they want to search for in the array
6. Search for the element in the array using a search function
7. If the element is not found, print a message saying it is not present in the array
8. If the element is found, print a message saying it is present in the array and its index
## CODE:
```c
#include <stdio.h>

void get_array_input(int array_length, int array_val[]) {
    for (int i=0; i<array_length; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &array_val[i]);
    }
}

void print_array(int array_length, int array_val[]) {
    for (int i=0; i<array_length; i++) {
        printf("%d ", array_val[i]);
    }
    printf("\n");
}

int array_length(int array_val[]) {
    int array_length = 0;
    for (int i=0; array_val[i] != '\0'; i++) {
        array_length++;
    }
    return array_length;
}

void bubble_sort(int array_length, int array_val[], int sorted_array[]) {
    int temp;
    // Store the contents in the sorted array
    for (int i=0; i<array_length; i++) {
        sorted_array[i] = array_val[i];
    }
    // Sort the array
    for (int i=0; i<array_length; i++) {
        for (int j=0; j<array_length-i-1; j++) {
            if (sorted_array[j] > sorted_array[j+1]) {
                temp = sorted_array[j];
                sorted_array[j] = sorted_array[j+1];
                sorted_array[j+1] = temp;
            }
        }
    }
}

int search_array(int array_length, int array_val[], int search_val) {
    int search_index = -1;
    for (int i=0; i<array_length; i++) {
        if (array_val[i] == search_val) {
            search_index = i;
            break;
        }
    }
    return search_index;
}

void search_or_sort(int array[], int array_length) {
    int search_input;
    printf("Enter the number that you want to search in the array: ");
    scanf("%d", &search_input);
    int search_index = search_array(array_length, array, search_input);
    if (search_index == -1) {
        printf("The element %d is not present in the array\n", search_input); 
    } else {
        printf("The element %d is present in the array at index %d\n", search_input, search_index);
    }
    printf("The array is: ");
    print_array(array_length, array);
}

int main() {
    int array_length_input;
    printf("Enter the length of the array: ");
    scanf("%d", &array_length_input);
    int array_val[array_length_input];
    char sort_input;
    int sorted_array[array_length_input];
    get_array_input(array_length_input, array_val);
    printf("Do you want to sort the array? (y/n): ");
    scanf(" %c", &sort_input);
    if (sort_input == 'y') {
        bubble_sort(array_length_input, array_val, sorted_array);
        search_or_sort(sorted_array, array_length_input);
    } else {
        search_or_sort(array_val, array_length_input);
    }

}
```

## OUTPUT:
```
$ Nitin/CProjects/ ./sorting_and_searching
Enter the length of the array: 5
Enter the element 1: 3
Enter the element 2: 2
Enter the element 3: 1
Enter the element 4: 5
Enter the element 5: 4
Do you want to sort the array? (y/n): y
Enter the number that you want to search in the array: 3
The element 3 is present in the array at index 2
```

## RESULT:
The program will take an array as input from the user, apply bubble sort if requested, and search for an element in the sorted or unsorted array. It will then print a message indicating whether the element was found and its index in the array.

<div style="page-break-after: always"></div>

## AIM:
To find if a given substring is present in a given string and if it is present, to find the number of occurrences of the substring in the string.

## ALGORITHM
1. Initialize two variables: `string_length` to store the length of the given string and `substring_counter` to store the number of occurrences of the substring in the string. Initialize `length` to the length of the given string and `substring_length` to the length of the given substring.
2. Use a loop to iterate through the characters of the given string.
3. If the current character of the string is equal to the first character of the substring, use another loop to check if the characters following the current character in the string match the characters of the substring.
4. If all the characters match, increment the `substring_counter` by 1 and continue the loop. If the characters do not match, break the loop and continue with the outer loop.
5. After the loops, check if the `substring_counter` is equal to 0. If it is, print that the substring is not present in the string. If it is not equal to 0, print that the substring is present in the string and the number of occurrences.

## CODE:
```c
#include <stdio.h>

int string_length(char string[]) {
    int string_length = 0;
    for (int i=0; string[i] != '\0'; i++) {
        string_length++;
    }
    return string_length;
}

int substring_counter(char string[], char substring[]) {
    int substring_counter = 0;
    int length = string_length(string);
    int substring_length = string_length(substring);
    for (int i=0; i<length; i++) {
        if (string[i] == substring[0]) {
            for (int j=0; j<substring_length; j++) {
                if (string[i+j] == substring[j]) {
                    if (j == substring_length-1) {
                        substring_counter++;
                    }
                }
                else {
                    break;
                }
            }
        }
    }
    return substring_counter;
}

int main() {
    char string[100], substring[100];
    printf("Enter the string: ");
    scanf("%[^\n]d", string);
    printf("Enter the substring: ");
    scanf("%s", substring);
    int substrings = substring_counter(string, substring);
    if (substrings == 0) {
        printf("The substring is not present in the string");
    }
    else {
        printf("The substring is present in the string %d times", substrings);
    }
    return 0;
}
```

## OUTPUT:
```
$ Nitin/CProjects/ ./substring
Enter the string: HelloThere
Enter the substring: llo
The substring is present in the string 1 times
```

## RESULT:
The program will find if a given substring is present in a given string and if it is present, the number of occurrences of the substring in the string.

<div style="page-break-after: always"></div>

## AIM:
Find the mean, mode, range, variance and the standard deviation of a set of N integers, and also make the elements of the array unique.

## ALGORITHM:
1. Initialize variables for mean, range, variance, standard deviation, and mode.
2. Declare an integer called `length` to store the size of the array and then based on the `length` create the array
3. Declare a function called `get_input` to get the input values for the array. The function takes in three arguments: the array, the length of the array, and a boolean value to indicate if the elements in the array should be unique or not.
4. Declare a function called `print_array` to print the elements of the array. The function takes in two arguments: the array and its length. Use a for loop to iterate through the array and print each element.
5. Declare the functions called `compute_mean`, `compute_mode`, and `compute_range` to calculate the mean, mode, and range of the array respectively. The functions take in two arguments: the array and its length. Use a for loop to iterate through the array and calculate the mean, mode, and range.
6. Declare a function called `compute_variance` and `compute_std_deviation` to calculate the variance and standard deviation of the array respectively. The functions take in two arguments: the array and its length. Use the functions `compute_mean` and `compute_range` to calculate the variance and standard deviation.
7. In the main function call the function `get_input` to get the input values for the array. Then compute the mean, mode, range, variance, and standard deviation of the array. Finally, print the mean, mode, range, variance, and standard deviation of the array.


## CODE:

```c
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

bool is_unique(float *array, int length, float val) {
    for (int i=0; i<length; i++) {
        if (array[i] == val) {
            return false;
        }
    }
    return true;
}
void get_input(float *array, int length, bool unique) {
    float _temp[length]; 
    for (int i=0; i<length; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%f", &_temp[i]);
        if (is_unique(_temp, i, _temp[i] && unique)) {
            array[i] = _temp[i];
        } else {
            i--;
        }
        // Can also be minfied as
        // is_unique(_temp, i, _temp[i]) ? array[i] = _temp[i] : i--; 
    }
}
void print_array(float *array_val, int array_length) {
    for (int i=0; i<array_length; i++) {
        printf("%0.2f ", array_val[i]);
    }
    printf("\n");
}
float compute_mean(float *array, int length) {
    float sum = 0;
    for (int i=0; i<length; i++) {
        sum = sum + array[i];
    }
    return sum/length;
}
int compute_mode(float *array, int length) {
    float mode = array[0];
    int mode_count = 1;
    for (int i=0; i<length; i++) {
        int count = 1;
        for (int j=i+1; j<length; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }
        if (count > mode_count) {
            mode = array[i];
            mode_count = count;
        }
    }
    return mode;
}
float compute_range(float *array, int length) {
  float min = array[0];
  float max = array[0];
  for (int i = 1; i < length; i++) {
    if (array[i] < min) {
      min = array[i];
    }
    if (array[i] > max) {
      max = array[i];
    }
  }
  return max - min;
}
float compute_variance(float *array, int length) {
  float mean_val = compute_mean(array, length);
  float variance = 0;
  for (int i = 0; i < length; i++) {
    variance += (array[i] - mean_val) * (array[i] - mean_val);
  }
  return variance / length;
}
float compute_std_deviation(float *array, int length) {
  return sqrt(compute_variance(array, length));
}

int main() {
    float mean, range, variance, std_deviation;
    int mode;
    int length;
    printf("Enter the size of the array: ");
    scanf("%d", &length);
    float *array = (float *) malloc(length * sizeof(float)); 
    get_input(array, length, false);
    print_array(array, length);
    mean = compute_mean(array, length);
    mode = compute_mode(array, length);
    range = compute_range(array, length);
    variance = compute_variance(array, length);
    std_deviation = compute_std_deviation(array, length);
    printf("\nThe mean of the array is %0.3f", mean);
    printf("\nThe mode of the array is %d", mode);
    printf("\nThe range of the array is %0.3f", range);
    printf("\nThe variance of the array is %0.3f", variance);
    printf("\nThe standard deviation of the array is %0.3f", std_deviation);
}
```
## OUTPUT:
```
$ Nitin/CProjects/ ./mean_median_mode
Enter the size of the array: 5
Enter the element 1: 1
Enter the element 2: 2
Enter the element 3: 3
Enter the element 4: 4
Enter the element 5: 5
1.00 2.00 3.00 4.00 5.00

The mean of the array is 3.000
The mode of the array is 1
The range of the array is 4.000
The variance of the array is 2.000
The standard deviation of the array is 1.414
```
## RESULT:
The mean, mode, range, variance and standard deviation of the array will be printed.

## AIM:
To display the corresponding ASCII characters for a given string.

## ALGORITHM:
1. Declare a character array called string_input to store the string input by the user.
2. Prompt the user to enter a string and use the scanf function to store the input in the string_input array.
3. Initialize a loop to iterate through the elements of the string_input array.
4. Inside the loop, print the ASCII value of each character in the string using the printf function.
5. Repeat the process for each character in the string until the end of the string is reached.

## CODE:
```c
#include <stdio.h>

int main() {
    char string_input[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", string_input);
    printf("The ascii characters are: ");
    for (int i=0; string_input[i] != '\0'; i++) {
        printf("\nThe ascii value of character %c in the string is: %d", string_input[i], string_input[i]);
    }
    printf("\n");
}
```


## OUTPUT:
```
$ Nitin/CProjects/ ./string_to_ascii
Enter the string: Hello
The ascii characters are:
The ascii value of character H in the string is: 72
The ascii value of character e in the string is: 101
The ascii value of character l in the string is: 108
The ascii value of character l in the string is: 108
The ascii value of character o in the string is: 111
```

## RESULT:
The program will output the ASCII values of each character in the given string.

<div style="page-break-after: always"></div>

## AIM:
Reverse a string using minimum number of exchanges without using any library function.

## ALGORITHM:
1. Take a string as input from the user
2. Find the length of the string
3. Initialize a for loop with index i and iterate it until i<(string_length/2)
4. Inside the for loop, swap the characters at the index i and string_length-i-1
5. Print the reversed string

## CODE:
```c
#include <stdio.h>

int string_reverse(char *string_input) {
    int string_length = 0;
    for (int i=0; string_input[i] != '\0'; i++) {
        string_length++;
    }
    for (int i=0; i<string_length/2; i++) {
        char temp = string_input[i];
        string_input[i] = string_input[string_length-i-1];
        string_input[string_length-i-1] = temp;
    }
    return 0;
}

int main() {
    char string_input[100];
    printf("Enter the string: ");
    scanf(" %[^\n]s", string_input);
    string_reverse(string_input);
    printf("The reversed string is: %s", string_input);
}
```

## OUTPUT:
```
$ Nitin/CProjects/ ./string_reverse
Enter the string: Hello World
The reversed string is: dlroW olleH
```

## RESULT:
The given string is reversed and printed on the screen.

<div style="page-break-after: always"></div>

## AIM:
To implement a function that compares two strings ignoring case sensitivity and returns 1 if the strings are equal.

## ALGORITHM:
1. Define a function `string_compare(char *string1, char *string2)` that takes in two strings as input also initialize a variable i to 0.
2. Using a `while` loop, iterate through the characters of the two strings and compare them using the `tolower()` function.
3. If the characters at the `i`th position in both strings are equal, increment `i` and continue the loop.
4. If the characters at the `i`th position in either string is a null character, break the loop.
5. If the strings are equal, return 0. If the first string is shorter than the second string, return -1. Otherwise, return 1.
6. In the `main()` function, prompt the user to enter two strings and store them in variables `string1` and `string2`.
7. Call the `string_compare()` function with `string1` and `string2` as arguments and store the result in a variable `result`.
8. Based on the value of `result`, print the appropriate message indicating the comparison result.

## CODE:
```c
#include <stdio.h>
#include <ctype.h>

int string_compare(char *string1, char *string2) {
    int i = 0;
    while (tolower(string1[i]) == tolower(string2[i])) {
        if (string1[i] == '\0' || string2[i] == '\0') {
            break;  // If any one of the string ends, break the loop
        }
        i++;
    }
    if (string1[i] == '\0' && string2[i] == '\0') {
        return 0;   // if both strings are equal then return 0
    } else if (string1[i] == '\0' && string2[i] != '\0') {
        return -1;  // if string1 is less than string2 then return -1
    } else {
        return 1;   // if string1 is greater than string2 then return 1
    }
}

int main() {
    char string1[100];
    char string2[100];
    printf("Enter the first string: ");
    scanf("%s", string1);
    printf("Enter the second string: ");
    scanf("%s", string2);
    int result = string_compare(string1, string2);
    if (result == 0) {
        printf("The strings are equal");
    } else if (result == -1) {
        printf("The second string is greater tha the first string");
    } else {
        printf("The first string is greater than the second string");
    }

}
```
## OUTPUT:
```
$ Nitin/CProjects/ ./string_compare
Enter the first string: vishal
Enter the second string: VISHAL
The strings are equal
```

## RESULT:
The function `string_compare()` will compare the two input strings ignoring case sensitivity and return 1 if they are equal, 0 if the first string is shorter than the second string, and -1 if the second string is shorter than the first string.


<div style="page-break-after: always"></div>

## AIM:
To remove all the vowels from a given string using an array.
## ALGORITHM:
1. Create a function called `string_length` that takes a string as input and returns the length of the string.
2. Create a function called `remove_vowels` that takes a string as input and removes all the vowels from the string. 
3. Initialize an array of vowels and iterate through the string. For each character in the string, check if it is a vowel by comparing it to each element in the array of vowels. If it is a vowel, remove it from the string by shifting all the subsequent characters in the string one position to the left.
4. In the main function, get a string from the user and call the `remove_vowels` function with the string as input. Print the resulting string.
## CODE:
```c
#include <stdio.h>

int string_length(const char *string) {
    int string_length = 0;
    for (int i=0; string[i] != '\0'; i++) {
        string_length++;
    }
    return string_length;
}

void remove_vowels(char *string) {
    int length = string_length(string);
    char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    for (int i=0; i<length; i++) {
        for (int j=0; j<10; j++) {
            if (string[i] == vowels[j]) {
                for (int k=i; k<length; k++) {
                    string[k] = string[k+1];
                }
                i--;
                break;
            }
        }
    }
}

int main() {
    char string[100];
    printf("Enter a string: ");
    scanf(" %[^\n]s", string);
    remove_vowels(string);
    printf("The string after removing vowels is: %s", string);
}
```
## OUTPUT:
```
$ Nitin/CProjects/ ./remove_vowels
Enter a string: Yoink
The string after removing vowels is: Ynk
```

## RESULT:
The program will remove all the vowels from the given string and print the resulting string to the screen.

<div style="page-break-after: always"></div>

# FUNCTIONS

## AIM:
Write a function that reads N and prints from N to 0 using recursion.

## ALGORITHM

1. Begin procedure prime_num(int i):-
2. Step 1: SET is_prime := 0
3. Step 2: Repeat step 1 to 2 while ( ( k < i ) { and ( ! is_prime ) ) ;
4. Step 1: if ((i % k) == 0) then :
5. Step 1: SET is_prime := is_prime + 1
6. Step 2: PRINT Is a Prime
7. Step 3: RETURN 
8. End of if block
9. Step 2: SET k := k + 1
10. End of for block
11. Step 2: PRINT Not a Prime
12. End procedure
    
## CODE:

```c
#include<stdio.h>

void rec_print_back(int i){
  if(i < 0){
    return;
  }
    printf("%d\n", i);
    rec_print_back(i - 1);
}

int main(){
  int N;
  printf("Enter N: ");
  scanf("%d", N);
  rec_print_back(N);
}
```
## OUTPUT:

```
Nitin/CProjects/ ./rec_print_back
Enter N: 3
2
1
0
```
## RESULT:
Hence this Program prints an Array Backwards

<div style="page-break-after: always"></div>

## AIM:
Write a function that determines whether a given number is prime or not using recursion.


## ALGORITHM

1. Begin procedure rec_print_back(int i):-
2. Step 1: if i < 0 then:
3. Step 1: RETURN 
4. End of if block
5. Step 2: PRINT i
6. End procedure

## CODE:

```c
#include <stdio.h>

void prime_num(int i){
  int is_prime = 0;
  for(int k = 2; ((k < i) && (is_prime < 2)); k++){
    if((i % k) == 0){
      is_prime++;
      printf("Not a Prime");
      return;
    }
  }
  printf("Is a Prime");
}

int main(){
  int N;
  printf("Enter N: ");
  scanf("%d", &N);
  prime_num(N);
}
```
## OUTPUT:

```
Nitin/CProjects/ .prime_num 
Enter N: 47
Is a Prime

Nitin/CProjects/ .prime_num
Enter N: 12
Not a Prime
```

## RESULT:

Hence this function determines whether a given number is prime or not using recursion.

## AIM:
Write a function that calculates the sum of all the elements in a given array using recursion.

## ALGORITHM

1. Begin procedure rec_sum_arr(int i [ ] , int size_int):-
2. Step 1: SET static sum := 0
3. Step 2: if size_int < 0 then :
4. Step 1: RETURN sum
5. End of if block
6. Step 3: else :
7. Step 1: SET sum := sum + * i
8. Step 2: RETURN rec_sum_arr ( + + i , - - size_int )
9. End of else block
10. End procedure

## CODE:

```c
#include<stdio.h>

int rec_sum_arr(int i[], int size_int){
  static int sum = 0;
  if(size_int < 0){
    return sum;
  }else{
    sum += *i;
    return rec_sum_arr(++i, --size_int);
  }
}

int main(){
  int N, arr[N];
  printf("Number of Elements: ");
  scanf("%d", &N);
  getchar();

  for(int i = 0; i < N; i++){
    printf("ELEM %d: ", i);
    scanf("%d", &arr[i]);
    getchar();
  }

  printf("SUM: %d", rec_sum_arr(arr, N));
}
```

<div style="page-break-after: always"></div>


## OUTPUT:

```
Nitin/CProjects/ .rec_sum_arr 
Number of Elements: 3
ELEM 0: 1
ELEM 1: 2
ELEM 2: 3
SUM: 6
```

## RESULT:

Hence this function calculates the sum of all the elements in a given array using recursion.

<div style="page-break-after: always"></div>

## AIM:
Write a function that reverses a string using recursion.

## ALGORITHM

1. Begin procedure rec_str_arr(char  arr , int i):-
2. Step 1: SET char_val := & arr [ i ]
3. Step 2: if i < 0 then :
4. Step 1: PRINT \ n
5. Step 2: RETURN 
6. End of if block
7. Step 3: else :
8. Step 1: PRINT * char_val
9. Step 2: RETURN rec_str_arr ( arr , - - i )
10. End of else block
11. End procedure

## CODE:

```c
#include<stdio.h>

void rec_str_arr(char *arr, int i){
  char *char_val = &arr[i];
  if(i < 0){
    printf("\n");
    return;
  }else{
    printf("%c", *char_val);
    return rec_str_arr(arr, --i);
  }
}

int main(){
  int N;
  char arr[N];

  printf("Number of Elements: ");
  scanf("%d", &N);
  getchar();

  for(int i = 0; i < N; i++){
    printf("ELEM %d: ", i);
    scanf("%c", &arr[i]);
    getchar();
  }

  rec_str_arr(arr, N);
}
```
## OUTPUT:

```
Nitin/CProjects/ .rec_str_arr 
Number of Elements: 2
ELEM 0: H
ELEM 1: I
IH
```
## RESULT:
Hence this function reverses a string using recursion.

<div style="page-break-after: always"></div>

## AIM:
Write a function that calculates the factorial of a given number using recursion.

## ALGORITHM

1. Begin procedure factorial(int i):-
2. Step 1: if i = 0 then :
3. Step 1: RETURN 1
4. End of if block
5. Step 2: else :
6. Step 1: RETURN i * factorial ( i - 1 )
7. End of else block
8. End procedure

## CODE:

```c
#include<stdio.h>

int factorial(int i){
  if(i == 0){
    return 1;
  }else{
    return i * factorial(i - 1);
  }
}

int main(){
  int N;

  printf("Number: ");
  scanf("%d", &N);
  getchar();

  printf("%d", factorial(N));
}
```
## OUTPUT:

```
Nitin/CProjects/ .factorial 
Number: 4
Factorial: 24
```

## RESULT

Hence this function calculates the factorial of a given number using recursion.

<div style="page-break-after: always"></div>

## AIM:
Write a function that generates the Fibonacci sequence using recursion.

## ALGORITHM

1. Begin procedure fibonacci(int i , int j , int counter):-
2. Step 1: if i = 0 then :
3. Step 1: PRINT i , j
4. End of if block
5. Step 2: if counter < 0 then :
6. Step 1: PRINT \ n
7. Step 2: RETURN 
8. End of if block
9. Step 3: else :
10. Step 1: PRINT i + j
11. End of else block
12. End procedure

## CODE:

```c
#include<stdio.h>

void fibonacci(int i, int j, int counter){
  if(i == 0){
    printf("%d %d ", i, j);
  }

  if(counter < 0){
    printf("\n");
    return;
  }else{
    printf("%d ", i + j);
    fibonacci(j, i + j, --counter);
  }
}

int main(){
  int N;

  printf("Count: ");
  scanf("%d", &N);
  getchar();

  fibonacci(0, 1, N);
}
```
## OUTPUT:

```
Nitin/CProjects/ .fibonacci 
Count: 5
0 1 1 2 3 5 8 13
```

## RESULT:

Hence this function generates the Fibonacci sequence using recursion.

<div style="page-break-after: always"></div>

## AIM:
Write a function that calculates the sum of all the even elements in a given array using recursion.

## ALGORITHM

1. Begin procedure rec_sum_arr(int i [ ] , int size_int):-
2. Step 1: SET static sum := 0
3. Step 2: if size_int < 0 then :
4. Step 1: RETURN sum
5. End of if block
6. Step 3: if  i % 2  = 0 then :
7. Step 1: SET sum := sum + * i
8. End of if block
9. Step 4: RETURN rec_sum_arr ( + + i , - - size_int )
10. End procedure

## CODE:

```c
#include<stdio.h>

int rec_eve_sum_arr(int i[], int size_int){
  static int sum = 0;
  if(size_int < 0){
    return sum;
  }
  if(*i % 2 == 0){
    sum += *i;
  }
  return rec_eve_sum_arr(++i, --size_int);
}

int main(){
  int N, arr[N];
  printf("Number of Elements: ");
  scanf("%d", &N);
  getchar();

  for(int i = 0; i < N; i++){
    printf("ELEM %d: ", i);
    scanf("%d", &arr[i]);
    getchar();
  }

  printf("SUM: %d", rec_eve_sum_arr(arr, N));
}
```

<div style="page-break-after: always"></div>


## OUTPUT:

```
Nitin/CProjects/ .rec_eve_sum_arr 
Number of Elements: 3
ELEM 0: 1
ELEM 1: 2
ELEM 2: 3
SUM: 2
```

## RESULT:

Hence this function calculates the sum of all the even elements in a given array using recursion.

<div style="page-break-after: always"></div>

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
$ Nitin/CProjects ./Transpose
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
$ Nitin/CProjects/ ./union
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
Nitin/CProjects/ ./Concat
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
$ Nitin/CProjects/ ./restaurant_bill
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
$ Nitin/CProjects/ ./salary_slip
Enter the name of the employee: Aditya
Enter the ID of the employee: 1
Enter the basic salary of the employee: 10000
Enter the DA of the employee: 1000
Enter the HRA of the employee: 500
Enter the PF of the employee: 500
The salary slip of Aditya is as follows:
--------------------------------------
 Name: Nitin
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
$ Nitin/CProjects/ ./marksheet
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
Enter the name of student 2: Nitin
Enter the roll number of the student: 2

Enter the marks of Nitin:
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
Name: Nitin
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

<div style="page-break-after: always"></div>

# FILE HANDLING

## AIM:
Write a program in C which accepts three file names as command line
arguments, file1 , file2 and file3 . Copy the contents of file1 to file2 .
If file1 already exists copy the contents to file2 otherwise display as no
such file. If file2 already exists, ask the user whether to overwrite the
existing contents or to append the contents and do accordingly. Now,
append the details of file3 to file2 and count the number of word
occurrences in file2


## ALGORITHM

1. Include the necessary headers stdio.h and unistd.h

```c
unistd.h includes file operations and is used to make sure that the file we are accessing actually exists. 
```
2. Parse the command line inputs. Check whether file one exists. If file one exists open the second or else throw an error.

3. Check whether file two exists or else create it. If file two exists already ask the user whether to append the contents of file one or overwrite it.

4. Check whether the file three exists if it exists append the contents of file three to file two or else exit the program and throw an error.

## CODE:

```c
#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){
  int counter = 0;
  if(access(argv[1], F_OK) == 0){
    FILE *file_one = fopen(argv[1], "r");
    if(access(argv[2], F_OK) == 0){
      char is_append = 0;
      char copy_chars = 0;
      printf("\n%s ALREADY EXISTS. SHOULD I APPEND[Y/N]: ", argv[2]);
      scanf("%c", &is_append);
      getchar();
      if(is_append == 'Y'){
        FILE *file_two = fopen(argv[2], "a+");
        while((copy_chars = fgetc(file_one)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE APPENDED");
        fclose(file_two);
      }else{
        FILE *file_two = fopen(argv[2], "w+");
        while((copy_chars = fgetc(file_one)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE OVERWRITTEN");
        fclose(file_two);
      }
      if(access(argv[3], F_OK) == 0){
        FILE *file_two = fopen(argv[2], "a+");
        FILE *file_three = fopen(argv[3], "r");
        while((copy_chars = fgetc(file_three)) != EOF){
          fputc(copy_chars, file_two);
        }
        printf("\nFILE OVERWRITTEN\n");
        fclose(file_two);
        fclose(file_three);
      }else{
        printf("\n%s DOES NOT EXIST. EXITING!!!\n", argv[3]);
      }
    }
    fclose(file_one);
  } else {
    printf("\n[ERROR] FILE DOES NOT EXIST\n");
  }
  FILE *file_two = fopen(argv[2], "r");
  char copy_chars = 0;
  while((copy_chars = fgetc(file_two)) != EOF){
    if(copy_chars == ' '){
      counter++;
    }
  }
  printf("NO OF WORDS: %d ", counter);
}
```

## OUTPUT:

```
Nitin/CProjects/ ./HandleOne FileO.txt FileT.txt FileTh.txt

FileT.txt ALREADY EXISTS. SHOULD I APPEND[Y/N]: Y

FILE APPENDED
FILE OVERWRITTEN
NO OF WORDS: 24
```

## RESULT:

Hence this is a program in C which accepts three file names as command line
arguments, file1 , file2 and file3 and copies the contents of file1 to file2 .
If file1 already exists it copies the contents to file2 otherwise it displays as no
such file. If file2 already exists,it  asks the user whether to overwrite the
existing contents or to append the contents and do accordingly and it
appends the details of file3 to file2 and counts the number of word
occurrences in file2


## AIM:

Write an interactive C program to maintain a list of names, addresses and telephone numbers. Store the information as records in a file by representing each record as a structure. Perform the following operations:

1. Add a new record at the end of file
2. Retrieve and display the entire record for a given name
3. List all names with their addresses and telephone numbers.

Note: Use 
```
fscanf
```
and 
```
fprintf
```
functions for reading and writing to the file.

## ALGORITHM:

1. Define a struct to hold the CProjects Specific Data.
2. Define three functions. One to add a CProjects. One to get the total records. One to get a specific record based on the Name.

```c
void add_rec() is used to append a CProjects by opening a file using fopen() in append mode and it gets the required inputs from the user and creates a new structure and assigns the inputs to it and then uses fprintf() to add the details to the opened file which is then closed to avoid memory leaks.

void get_rec() is used to get the total number of CProjects and their information. It opens the file in read mode and uses while loop to traverse through the file and the loop terminates when it reaches the end of file and this function prints out the records and its members.

void get_spec_rec() is the same as get_rec() but it asks for a specific record name from the user and compares it the records in the file using strcmp and if true it prints out the record.

```
3. Define main procedure and define a switch case inside a while loop controlled by a character-based loop ender and ask the user what he/she wants to do and perform operation and invoke functions depending on his/her choice.

4. End main procedure

## CODE: 

```c
#include<stdio.h>
#include <string.h>

typedef struct {
  char name[100];
  char address[100];
  char phone[100];
} CProjects;

void add_rec(){
  FILE *txt_file = fopen("File.txt", "a+");
  CProjects new_rec = {0};
  printf("******* ADDING A RECORD ********\n");
  printf("NAME: ");
  scanf("%s", new_rec.name);
  getchar();
  printf("ADDRESS: ");
  scanf("%s", new_rec.address);
  getchar();
  printf("PHONE: ");
  scanf("%s", new_rec.phone);
  getchar();
  fprintf(txt_file, "%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
  printf("******* ADDED THE RECORD ********\n");
  fclose(txt_file);
}

void get_rec(){
  FILE *txt_file = fopen("File.txt", "r");
  CProjects new_rec;
  while(!feof(txt_file)){
    fscanf(txt_file, "%s %s %s", new_rec.name, new_rec.address, new_rec.phone);
    printf("%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
  }
  fclose(txt_file);
}

void get_spec_rec(){
  FILE *txt_file = fopen("File.txt", "r");
  CProjects new_rec;

  char name[100];
  printf("Enter the Name: ");
  scanf("%s", name);
  getchar();

  while(!feof(txt_file)){
    fscanf(txt_file, "%s %s %s", new_rec.name, new_rec.address, new_rec.phone);
    if(!strcmp(name, new_rec.name)){
       printf("%s %s %s\n", new_rec.name, new_rec.address, new_rec.phone);
    }
  }
  fclose(txt_file);
}

int main(void){
  char end_char = 'Y';
  char op_char = 'G';

  while(end_char == 'Y'){
    printf("WHATCHU WANNA DO [ADD/GET/SPECGET]: ");
    scanf("%c", &op_char);
    getchar();

    switch(op_char){
      case 'A':
        add_rec();
        break;
      case 'G':
        get_rec();
        break;
      case 'S':
        get_spec_rec();
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
```

## OUTPUT:

```c
$ Nitin/CProjects/ ./Handle
WHATCHU WANNA DO [ADD/GET/SPECGET]: A
******* ADDING A RECORD ********
NAME: Nitin
ADDRESS: Street
PHONE: 9840
******* ADDED THE RECORD ********
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/SPECGET]: G
Nitin Street 9840
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/SPECGET]: S
Enter the Name: Nitin
Nitin Street 9840
CONTINUE [Y/N]: N
```

<div style="page-break-after: always"></div>

## RESULT:

Hence this program successfully gets the input from the user and adds the record, gets the record details and searches and prints a specific record.  

<div style="page-break-after: always"></div>

## AIM:

Bob is a librarian. He requires a system that can enable him to add new books, delete any existing book, search for the availability of books, and print all the books. The system should also be able to store the information about the books in a file and read from the file when the program is run. Create a structure called books and store the relevant information, and create separate user-defined functions for performing the above operations. Write a menu-driven program to get a choice from the librarian. Based on his choice, the corresponding functions should be invoked, and the structure should be updated. The program should also save the updated information to the file when the program is closed.

## ALGORITHM:

1. Define a Structure to the hold the Details of the Book. Define four functions. One to add books, one to get the total books added, one to check whether a book is available or not, one to delete the book.

```c
void add_book() is used to append a Book by opening a file using fopen() in append mode and it gets the required inputs from the user and creates a new structure and assigns the inputs to it and then uses fprintf() to add the details to the opened file which is then closed to avoid memory leaks.

void get_book() is used to get the total number of Books and their information. It opens the file in read mode and uses while loop to traverse through the file and the loop terminates when it reaches the end of file and this function prints out the records and its members.

void check_avail() is the same as get_book() but it asks for a specific book name from the user and compares it the book in the file using strcmp and if true it prints that the book is available.

void delete_book() creates a temporary file and asks the user for which book to delete and appends all the book to the temporary file except the book mentioned by the user for this it used strcmp and then it renames the temporary file to the actual text file in which we stored the information about the books and deletes the past file.
 
int number_of_lines() returns the number of lines in a file. This is used for preventing unneccesary iteration when traversing through a file.

```
3. Define main procedure and define a switch case inside a while loop controlled by a character-based loop ender and ask the user what he/she wants to do and perform operation and invoke functions depending on his/her choice.

4. End main procedure


## CODE:

```c

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
```

## OUTPUT:

```c
$ Nitin/CProjects/ WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: A
******* ADDING A BOOK ********
NAME: Refugee
AUTHOR NAME: Nitin
******* ADDED THE BOOK ********
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: G
Nitin Nitin
Refugee Nitin
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: D
BOOK NAME: Nitin
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: C
Enter the Name: Refugee
Refugee is Available XD
CONTINUE [Y/N]: Y
WHATCHU WANNA DO [ADD/GET/CHECK/DELETE/NTH]: G
Refugee Nitin
CONTINUE [Y/N]: N
```

<div style="page-break-after: always"></div>

## RESULT:

Hence this program successfully gets the input from the user and adds the book, gets the book details and checks for availability and deletes a specific record.  


