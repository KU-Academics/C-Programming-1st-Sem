// count the number of words in a sentence
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
	char s[100];
	printf("enter the sentence: ");
	scanf("%[^;]s", s); //("%[^\n]s")
	//puts(s);
	printf("%ld\n", strlen(s));

	return 0;
}
