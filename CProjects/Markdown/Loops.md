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
$ Vishal/Record/ ./Pattern
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
$ Vishal/Record/ ./Pattern
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
$ Vishal/Record/ ./BigSmall
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
$ Vishal/Record/ ./Fivesum
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
$ Vishal/Record/ ./Denominations
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
$ Vishal/Record/ ./Natural
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
$ Vishal/Record/ ./Fibonacci
Enter N: 4
0 1 1 2 3 5
```

## RESULT:

This program finds the fibonacci series of n natural numbers.

<div style="page-break-after: always"></div>

## FLOWCHART:
<img src="./LoopSeven.png" alt="FLOWCHART" height="800px"/>
