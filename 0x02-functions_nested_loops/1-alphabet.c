/*
 * File: 1-alphabet.c
 * Auth: Ihu Kingsley Ominyi
*/

#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line.
*/
void printAlphabetLowercase(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
    printf("\n");
}

int main() {
    printAlphabetLowercase();
    return 0;
}
