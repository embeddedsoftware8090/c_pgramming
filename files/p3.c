//  //Write a program to write characters into a file.
// #include<stdio.h>
// int main()
// {
//         FILE *fp = fopen("data.txt","w"); // opens the file in write mode
   
//         fputc('M',fp); // writes the char into a file.
//         fputc('A',fp);
//         fputc('N',fp);
// }



//use of fclose().
#include<stdio.h>
int main()
{
           FILE *fp = fopen("data.txt","w");
           fputc('U',fp);
           fputc('N',fp);
           fputc('I',fp);
           fputc('V',fp);
           fputc('I',fp);
           fputc('S',fp);
           fputc('I',fp);
           fputc('O',fp);
           fputc('N',fp);
           fputc('T',fp);
           fputc('E',fp);
           fputc('C',fp);
           fputc('H',fp);
           fputc('N',fp);
           fputc('O',fp);
           fputc('L',fp);
           fputc('O',fp);
           fputc('G',fp);
           fputc('Y' ,fp);
 
          fclose(fp); //closes the file stream, so the data is saved in file.
  
          while(1); //prog is in infinite loop 
}
