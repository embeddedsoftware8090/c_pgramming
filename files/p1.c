// write the data in file 
#include<stdio.h>
int main()
   {
           FILE *fp = fopen("data1.txt","w"); // opens the file in write mode
           fputc('B',fp); // writes the char into a file.
           fputc('A',fp);
           fputc('L',fp);
           fputc('K',fp);
           fputc('U',fp);
           fputc('M',fp);
           fputc('A',fp);
           fputc('R',fp);
           fputc(' ',fp);
           fputc('S',fp);
           fputc('H',fp);
           fputc('A',fp);
           fputc('R',fp);
           fputc('M',fp);
           fputc('A',fp);

           fclose(fp); //closes the file stream, so the data is saved in file.
           
  }

