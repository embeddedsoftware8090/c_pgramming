#include <stdio.h>

enum suit {club = 0,diamonds = 10,hearts = 20,spades = 3 } card;

int main() 
{
    card = club;
	printf("Size of enum variable = %ld bytes \n", sizeof(card));	
	return 0;
}

// #include <stdio.h>

// enum week { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday,Sunday};

// int main()
// {
//     // creating today variable of enum week type
//     enum week today;
//     today = Wednesday;
//     printf("Day %d \n",today + 1 );
//     return 0;
// }