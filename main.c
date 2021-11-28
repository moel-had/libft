#include<stdio.h>
#include<string.h>
#include"libft.h"
int main()
{
	char *src = "Hello ";
	char dest[7];
	printf("%lu",ft_strlcpy(dest,src,-1));
}
