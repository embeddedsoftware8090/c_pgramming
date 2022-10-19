
#include<stdio.h>
void main(int argc ,char **argv)
{
    char ch;
    int i = 0;
    
    if (argc!=3)
    {
       printf("Usage: ./a.out \n");
       return ;
    }
    FILE *file = fopen(argv[2],"r");//
    if (file == 0)
    {
        printf("File not present \n");
        return;
    }
    else{
        while ((ch = fgetc(file)) != -1)
        {
            if (argv[2][2]==ch)
            {
                i++;
            }
        }
        printf("char %s is present %d time in the provided char file.\n",argv[2],i);
    }
}

