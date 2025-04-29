#include<stdio.h>
#define vowel_consonant(n) n=='a'||n=='e'||n=='i'||n=='o'||n=='u'?printf("vowel"):printf("consonant")
main()
{
	char x;
	printf("enter character:");
	scanf("%c",&x);
	vowel_consonant(x); 
}
