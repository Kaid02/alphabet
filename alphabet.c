#include<stdio.h>
#include<conio.h>
	int main()
		{
			char c;
			
			printf("Enter the character : ");
			scanf("%d",&c);
			
			((c>='a'&&c<="z")||(c>'A'&& c<='Z') )?
			printf("%c is Alphabet",c):printf("%c is not Alphabet",c);
			
			return 0;
		}