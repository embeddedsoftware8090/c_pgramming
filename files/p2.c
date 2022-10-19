//write a program to read the data character by character from the file.
#include<stdio.h>
int main(int argc,char *argv[1])  //command line arguments
{
           if(argc != 2) {  //no.of arguments must be 2
           printf("Usage : ./a.out file\n");
           return 0;
           }
   
          FILE *fp = fopen("data1.txt","r"); //opens the file in read mode
  
          if(fp == NULL) {  //checking the file is exist or not
          printf("file doesn't exist\n");
          return 0;
          }
  
          char ch;
          while( (ch = fgetc(fp)) != EOF ) //reads all the characters from file.
          printf("%c",ch); //prints every character.
}

