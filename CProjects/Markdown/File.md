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
Vishal/Records/ ./HandleOne FileO.txt FileT.txt FileTh.txt

FileT.txt ALREADY EXISTS. SHOULD I APPEND[Y/N]: Y

FILE APPENDED
FILE OVERWRITTEN
```

## RESULT:

Hence this is a program in C which accepts three file names as command line
arguments, file1 , file2 and file3 and copies the contents of file1 to file2 .
If file1 already exists it copies the contents to file2 otherwise it displays as no
such file. If file2 already exists,it  asks the user whether to overwrite the
existing contents or to append the contents and do accordingly and it
appends the details of file3 to file2 and counts the number of word
occurrences in file2

