#include <stdio.h>
/*
	First comment
*/
void	ft(void)
{
	char *str = "#include <stdio.h>%c/*%c%cFirst comment%c/*%cvoid	ft(void)%c{%c%cchar *str = %c%s%c;%c	printf(str, 10, 10, 10, 10, 9, 34, str, 34, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10);%c}%cint main()%c{%c	/* second comment */%c%cft();%c	return (0);%c}%c";
	printf(str, 10, 10, 10, 9, 10, 10, 10, 10, 9, 34, str, 34, 10, 10, 10, 10, 10, 10, 9, 10, 10, 10);
}
int main()
{
/*
	second comment
*/
	ft();
	return (0);
}
