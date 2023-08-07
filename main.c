/* #include <stdio.h>
#include <ctype.h>
#include "libft.h"
#include <stdlib.h>
#include <string.h>
 */
/* //test ft_isalpha
int main(void)
{
	int a = 'A';
	int b = 'a';
	int c = 'B';
	int d = 'b';
	int e = 'Z';
	int f = 'z';
	int g = '1';
	int h = '0';
	int i = '\\';
	int j = '?';
	int k = '#';
	int l = 0;
	int m = '}';
	int n = ']';
	int o = '+';
	 */
	/* printf("ft_isalpha\n");
	printf("%d\n", ft_isalpha(a));
	printf("%d\n", ft_isalpha(b));
	printf("%d\n", ft_isalpha(c));
	printf("%d\n", ft_isalpha(d));
	printf("%d\n", ft_isalpha(e));
	printf("%d\n", ft_isalpha(f));
	printf("%d\n", ft_isalpha(g));
	printf("%d\n", ft_isalpha(h));
	printf("%d\n", ft_isalpha(i));
	printf("%d\n", ft_isalpha(j));
	printf("%d\n", ft_isalpha(k));
	printf("%d\n", ft_isalpha(l));
	printf("%d\n", ft_isalpha(m));
	printf("%d\n", ft_isalpha(n));
	printf("%d\n", ft_isalpha(o));
	
	printf("ft_isdigit\n");
	printf("%d\n", ft_isdigit(a));
	printf("%d\n", ft_isdigit(b));
	printf("%d\n", ft_isdigit(c));
	printf("%d\n", ft_isdigit(d));
	printf("%d\n", ft_isdigit(e));
	printf("%d\n", ft_isdigit(f));
	printf("%d\n", ft_isdigit(g));
	printf("%d\n", ft_isdigit(h));
	printf("%d\n", ft_isdigit(i));
	printf("%d\n", ft_isdigit(j));
	printf("%d\n", ft_isdigit(k));
	printf("%d\n", ft_isdigit(l));
	printf("%d\n", ft_isdigit(m));
	printf("%d\n", ft_isdigit(n));
	printf("%d\n", ft_isdigit(o));
	
	printf("original isdigit\n");
	printf("%d\n", isdigit(a));
	printf("%d\n", isdigit(b));
	printf("%d\n", isdigit(c));
	printf("%d\n", isdigit(d));
	printf("%d\n", isdigit(e));
	printf("%d\n", isdigit(f));
	printf("%d\n", isdigit(g));
	printf("%d\n", isdigit(h));
	printf("%d\n", isdigit(i));
	printf("%d\n", isdigit(j));
	printf("%d\n", isdigit(k));
	printf("%d\n", isdigit(l));
	printf("%d\n", isdigit(m));
	printf("%d\n", isdigit(n));
	printf("%d\n", isdigit(o)); */
	
	/* printf("ft_isalnum\n");
	printf("%d\n", ft_isalnum(a));
	printf("%d\n", ft_isalnum(b));
	printf("%d\n", ft_isalnum(c));
	printf("%d\n", ft_isalnum(d));
	printf("%d\n", ft_isalnum(e));
	printf("%d\n", ft_isalnum(f));
	printf("%d\n", ft_isalnum(g));
	printf("%d\n", ft_isalnum(h));
	printf("%d\n", ft_isalnum(i));
	printf("%d\n", ft_isalnum(j));
	printf("%d\n", ft_isalnum(k));
	printf("%d\n", ft_isalnum(l));
	printf("%d\n", ft_isalnum(m));
	printf("%d\n", ft_isalnum(n));
	printf("%d\n", ft_isalnum(o));
	
	printf("original isalnum\n");
	printf("%d\n", isalnum(a));
	printf("%d\n", isalnum(b));
	printf("%d\n", isalnum(c));
	printf("%d\n", isalnum(d));
	printf("%d\n", isalnum(e));
	printf("%d\n", isalnum(f));
	printf("%d\n", isalnum(g));
	printf("%d\n", isalnum(h));
	printf("%d\n", isalnum(i));
	printf("%d\n", isalnum(j));
	printf("%d\n", isalnum(k));
	printf("%d\n", isalnum(l));
	printf("%d\n", isalnum(m));
	printf("%d\n", isalnum(n));
	printf("%d\n", isalnum(o)); */

	/* printf("original atoi\n");
	printf("%d\n", atoi("+--1234567"));
	printf("%d\n", atoi("1234567"));
	printf("%d\n", atoi("-1234567"));
	printf("%d\n", atoi("?"));
	printf("%d\n", atoi("\n"));
	printf("%d\n", atoi("2147483647"));
	printf("%d\n", atoi("-2147483648"));

	printf("ft_atoi\n");
	printf("%d\n", ft_atoi("+--1234567"));
	printf("%d\n", ft_atoi("1234567"));
	printf("%d\n", ft_atoi("-1234567"));
	printf("%d\n", ft_atoi("?"));
	printf("%d\n", ft_atoi("\n"));
	printf("%d\n", ft_atoi("2147483647"));
	printf("%d\n", ft_atoi("-2147483648"));
 */
	/* printf("original isascii\n");
	printf("%d\n", isascii(a));
	printf("%d\n", isascii(b));
	printf("%d\n", isascii(c));
	printf("%d\n", isascii(d));
	printf("%d\n", isascii(h));
	printf("%d\n", isascii(i));
	printf("%d\n", isascii(j));

	printf("ft_isascii\n");
	printf("%d\n", ft_isascii(a));
	printf("%d\n", ft_isascii(b));
	printf("%d\n", ft_isascii(c));
	printf("%d\n", ft_isascii(d));
	printf("%d\n", ft_isascii(h));
	printf("%d\n", ft_isascii(i));
	printf("%d\n", ft_isascii(j)); */

 /*   printf("original isprint\n");
	printf("%d\n", isprint(a));
	printf("%d\n", isprint(b));
	printf("%d\n", isprint(c));
	printf("%d\n", isprint(d));
	printf("%d\n", isprint(h));
	printf("%d\n", isprint(i));
	printf("%d\n", isprint('\t')); 
	printf("del = %d\n", isprint(127));

 	printf("ft_isprint\n");
	printf("%d\n", ft_isprint(a));
	printf("%d\n", ft_isprint(b));
	printf("%d\n", ft_isprint(c));
	printf("%d\n", ft_isprint(d));
	printf("%d\n", ft_isprint(h));
	printf("%d\n", ft_isprint(i));
	printf("%d\n", ft_isprint('\t'));   */

	/* printf("original itoa\n");
	snprintf("%d\n", itoa(+ -1234567));
	snprintf("%d\n", itoa(1234567));
	snprintf("%d\n", itoa(-1234567));
	snprintf("%d\n", itoa('?'));
	snprintf("%d\n", itoa(' '));
	snprintf("%d\n", itoa('\n'));
	snprintf("%d\n", itoa(2147483647));
	snprintf("%d\n", itoa(-2147483648)); */
/* 
	printf("ft_itoa\n");
	printf("%c\n", *ft_itoa(+ -1234567));
	printf("%c\n", *ft_itoa(1234567));
	printf("%c\n", *ft_itoa(-1234567));
	printf("%c\n", *ft_itoa(' '));
	printf("%c\n", *ft_itoa('\n'));
	printf("%c\n", *ft_itoa(2147483647));
	printf("%c\n", *ft_itoa(-2147483648));
 */
/* 
	printf("original strlen\n");
	printf("%zu\n", strlen("12345678"));
	printf("%zu\n", strlen(" "));
	printf("%zu\n", strlen("????"));
	printf("%zu\n", strlen("abcDDDD"));
	
 	printf("ft_strlen\n");
	printf("%zu\n", ft_strlen("12345678"));
	printf("%zu\n", ft_strlen(" "));
	printf("%zu\n", ft_strlen("????"));
	printf("%zu\n", ft_strlen("abcDDDD"));
 */





//teste strdup
/* #include<stdio.h>
#include<string.h>
int main()
{
    char source[] = "GeeksForGeeks";
	char s[] = "HELLO WORLD";

    char* target = strdup(source);
	char* targ = ft_strdup(s);
    printf("%s\n", target);
	printf("%s\n", targ);	
    return 0;
} */

/*  test da to lower
#include <stdio.h>
int main(void)
{
	printf("%c\n", ft_tolower('A'));
	return (0);
} 

test ft to upper
#include <stdio.h>
int main(void)#include <stdio.h>
int main(void)
{
	char string[] = "teste";
	
	printf("%s\n", string);
	ft_bzero(string, 1);
	printf("%s\n", string);	
}
{
	printf("%c\n", ft_toupper('a'));
	return (0);
}

/**/
/* 
#include <stdio.h>
int main(void)
{
	char string[] = "teste";
	
	printf("%s\n", string);
	ft_bzero(string, 1);
	printf("%s\n", string);	
}
 */

/* #include <stdio.h>
int main(void)
{
	char string[] = "teste";
	printf("%s\n", string);
	printf("%s\n", ft_memset(string, 'O', 2));	
} */

/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char copy[] = "source";
	char dest_copy[] = "destiny";
	char move[] = "source";
	char dest_move[] = "destiny";
	
	printf("%s\n", copy);
	printf("%s\n", dest_copy);
	memcpy(dest_copy, copy, 11);
	printf("%s\n", copy);
	printf("%s\n", dest_copy);

	printf("%s\n", move);
	printf("%s\n", dest_move);
	memmove(dest_move, move, 11);
	printf("%s\n", move);
	printf("%s\n", dest_move);
}
 */
/* 
#include <stdio.h>
#include <string.h>
int main(void)
{
	char str1[] = "alo";
	char str2[] = "aloHa";
	
	printf ("%d\n", ft_memcmp(str1, str2, 2));
	printf ("%d\n", memcmp(str1, str2, 2));
} */

//#include <stdio.h>
/* #include <string.h>

int main () {
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '8';
   char *original;
   char *mine;

   original = memchr(str, ch, strlen(str));
   mine = ft_memchr(str, ch, strlen(str));

   printf("String after |%s|\n", original);
   printf("String after |%s|\n", mine);
   return (0);

} */

//teste rob strlcat
/* int main(void)
{
    char dest[20] = "12345ab";
    char src[20] = "67890";
    
    printf("Original:\n");
    printf("before dest: %s\n", dest);
    printf("before src: %s\n", src);
    strlcat(dest,src,10);
    printf("after dest: %s\n", dest);
    printf("after src: %s\n", src);
    printf("\n");

    char ft_dest[20] = "12345ab";
    char ft_src[20] = "67890";
    
    printf("ft_strlcat:\n");
    printf("before dest: %s\n", ft_dest);
    printf("before src: %s\n", ft_src);
    ft_strlcat(ft_dest, ft_src, 10);
    printf("after ft_dest: %s\n", ft_dest);
    printf("after ft_src: %s\n", ft_src);
    printf("\n");
} */

/* //test STRLCAT
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int	main(void)
{
	char source[] = "source";
	char dest[] = "dest";
	

 	char *source;
	char *dest;

	source = malloc(sizeof(char)* 7);
	dest = malloc(sizeof(char)* 20);

	source = "source";
	dest = "dest"; 
	printf("%s\n", source);
	printf("%s\n", dest);
	printf("%zu\n", strlcat(dest, source, 3));
	printf("%zu\n", ft_strlcat(dest, source, 3));
	printf("%s\n", source);
	printf("%s\n", dest);
	return (0);
}
 

//teste strlcpy
#include <bsd/string.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char src[6] = "costa";
	char dst[7] = "lisley";
	
	printf("%s\n", src);
	printf("%s\n", dst);
	printf("%zu\n", ft_strlcpy(dst, src, 4));
	printf("%zu\n", strlcpy(dst, src, 4));
	printf("%s\n", src);
	printf("%s\n", dst);
	return (0);
}
 */

//teste strchr
/* #include <stdio.h>
#include <string.h>
int main () 
{
	char str[] = "https://www.helloworld.com";
	char str1[] = "?^^**#$)))";
	char str2[] = "1234567-1";
	char str3[] = "oi tudo bem?";
	char str4[] = "\0";
	char ch = '.';
	char ch1 = '*';
	char ch2 = '5';
	char ch3 = ' ';
	char ch4 = '\0';
	
	char *original;
	char *original1;
	char *original2;
	char *original3;
	char *original4;
	char *original5;
	char *mine;
	char *mine1;
	char *mine2;
	char *mine3;
	char *mine4;
	char *mine5;
	
	printf("%c\n", ch);
	printf("%c\n", ch1);
	printf("%c\n", ch2);
	printf("%c\n", ch3);
	printf("%c\n", ch4);
	printf("%s\n", str);
	printf("%s\n", str1);
	printf("%s\n", str2);
	printf("%s\n", str3);
	printf("%s\n", str4);
	
	original = strchr(str, ch);
	original1 = strchr(str1, ch1);
	original2 = strchr(str2, ch2);
	original3 = strchr(str3, ch3);
	original4 = strchr(str4, ch4);
	original5 = strchr(str3, ch2);
	printf("%s\n", original);
	printf("%s\n", original1);
	printf("%s\n", original2);
	printf("%s\n", original3);
	printf("%s\n", original4);
	printf("%s\n", original5);

	
	mine = ft_strchr(str,ch);
	mine1 = ft_strchr(str1,ch1);
	mine2 = ft_strchr(str2,ch2);
	mine3 = ft_strchr(str3,ch3);
	mine4 = ft_strchr(str4,ch4);
	mine5 = ft_strchr(str3, ch2);
	printf("%s\n", mine);
	printf("%s\n", mine1);
	printf("%s\n", mine2);
	printf("%s\n", mine3);
	printf("%s\n", mine4);
	printf("%s\n", mine5);

	return(0);
} */


/* teste strncmp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
    char str1[] = "stringum";
    char str2[] = "string2";
    char str3[] = " ";
    char str4[] = "\0";
    char str5[] = "-098967";

    int original;
    int original1;
    int original2;
    int original3;
    int original4;
    int mine;
    int mine1;
    int mine2;
    int mine3;
    int mine4;

    original = strncmp(str1, str2, 6);
    mine = ft_strncmp(str1, str2, 6);

    original1 = strncmp(str2, str5, 3);
    mine1 = ft_strncmp(str2, str5, 3);

    original2 = strncmp(str3, str4, 1);
    mine2 = ft_strncmp(str3, str4, 1);

    original3 = strncmp(str1, str2, 3);
    mine3 = ft_strncmp(str1, str2, 3);

    original4 = strncmp(str1, str5, 3);
    mine4 = ft_strncmp(str1, str5, 3);

    printf("Test original x mine: \n");
    printf("%d\n", original);
    printf("%d\n", mine);
    printf("Test original1 x mine1: \n");
    printf("%d\n", original1);
    printf("%d\n", mine1);
    printf("Test original2 x mine2: \n");
    printf("%d\n", original2);
    printf("%d\n", mine2);
    printf("Test original3 x mine3: \n");
    printf("%d\n", original3);
    printf("%d\n", mine3);
    printf("Test original4 x mine4: \n");
    printf("%d\n", original4);
    printf("%d\n", mine4);

}
*/