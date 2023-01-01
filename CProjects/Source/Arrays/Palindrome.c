#include <stdio.h>
#define CHAR_LEN(x) (sizeof(x)/sizeof(char))

int main(){
  char ex_str[] = "raceca";
  int size = CHAR_LEN(ex_str) - 1, is_palindrome = 0;

  for(int i = 0; i < CHAR_LEN(ex_str) && !is_palindrome; i++){
    if(ex_str[i] != ex_str[--size]) is_palindrome = 1;
  }

  (!is_palindrome) ? printf("Palindrome\n") : printf("Nope\n");

}
