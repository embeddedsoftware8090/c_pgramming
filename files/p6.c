//write a program to copy a file data from one source file to multiple destination file.
#include<stdio.h>
int main(int argc,char *argv[])
{
           if(argc < 3) { //no.of arguments must be 3 or more than 3. 
           printf("Usage : ./a.out src_file dest_files\n");
           return 0;
           }
   
          FILE *fs = fopen(argv[1],"r");  //opening src_file in read mode
         if(fs == NULL) {  //checking src_file is exist or not.  
          printf("source file doesn't exist\n");
          return 0;
          }
  
          FILE *fd;   char ch;    int i;
         for(i=2;i<argc;i++) //loop iterations to open destination files for copy
          {
                  fd = fopen(argv[i],"w"); //opens the destination files
                  while( (ch = fgetc(fs)) != -1 ) //logic to read src_file char by char
                  fputc(ch,fd); //copy each char into destination file.
 
                  fclose(fd);  //closes the opened destion file.
                  rewind(fs);  //resets the file position indicator to start position.
          }
}









