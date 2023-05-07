#include <cs50.h>
#include <stdio.h>

int main(void)
{
	//Create a string array 
	string words[2];

	//Set the first index of the array to HI!
	words[0] = "HI!";
	//Set the second index of the array to BYE!
	words[1] = "BYE!";

	//A string reprezents an array of characters, 
	//we can print each character out with simple indexing
	//There is a special character at the end of each string, that is a NUL character (ASCII 0 value)
	//and the printf function is implemented in a way to detect the NUL character
	//When we use string, this NUL character is automatically added to the end of the string 
	printf("%c%c%c\n", words[0][0], words[0][1], words[0][2]);
	printf("%c%c%c%c\n", words[1][0], words[1][1], words[1][2], words[1][3]);
}