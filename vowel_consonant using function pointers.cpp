#include<stdio.h>
void vowel_consonant(char);
void (*ptr)(char);
main()
{
	char x;
	printf("enter character ");
	scanf("%c",&x);
	ptr=&vowel_consonant;
	printf("%u\n",ptr);
	//vowel_consonant(x);
	ptr(x);
}
void vowel_consonant(char x)
{
	if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u')
	printf("vowel");
	else
	printf("cosonant");
}
