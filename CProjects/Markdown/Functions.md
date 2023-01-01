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
Vishal/Record/ ./rec_print_back
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
Vishal/Record/ .prime_num 
Enter N: 47
Is a Prime

Vishal/Record/ .prime_num
Enter N: 12
Not a Prime
```

## RESULT:

Hence this function determines whether a given number is prime or not using recursion.

<div style="page-break-after: always"></div>

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
Vishal/Record/ .rec_sum_arr 
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
Vishal/Record/ .rec_str_arr 
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
Vishal/Record/ .factorial 
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
Vishal/Record/ .fibonacci 
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
Vishal/Record/ .rec_eve_sum_arr 
Number of Elements: 3
ELEM 0: 1
ELEM 1: 2
ELEM 2: 3
SUM: 2
```

## RESULT:

Hence this function calculates the sum of all the even elements in a given array using recursion.

<div style="page-break-after: always"></div>

