#include<stdio.h>
int vowel(char c)
{
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
	{
		printf("vowel");
	}
	else
	{
		printf("consonant");
	}
	return 0;
}
	int main()
	{
		char c;
		printf("enter character\n");
		scanf("%c",&c);
		vowel(c);
		return 0;
}

