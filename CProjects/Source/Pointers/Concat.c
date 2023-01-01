#include <stdio.h>
#include <stdlib.h>


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


