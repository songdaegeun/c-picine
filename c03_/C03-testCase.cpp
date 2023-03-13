/* ************************************************************************** */
/*                                                                            */

/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:28:13 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/13 16:53:29 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 1 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 1 ? printf( GREEN "\"%d\"\n" RESET, ret) : printf( RED "\"%d\"\n" RESET, ret);
int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	int res1 = ft_strcmp(s1, s2);
	int res2 = strcmp(s1, s2);

	printf( YELLOW "\nCase 1 " RESET);
	PASS(res1 == res2)
	printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n\n", s2);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s3[] = "Hallo";
	char s4[] = "Hello";
	res1 = ft_strcmp(s3, s4);
    res2 = strcmp(s3, s4);
 
    printf( YELLOW "\nCase 2 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s3);
	printf("s2: %s\n\n", s4);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s5[] = "Hello";
	char s6[] = "HelaloA";
	res1 = ft_strcmp(s5, s6);
    res2 = strcmp(s5, s6);

    printf(YELLOW "\nCase 3 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s5);
	printf("s2: %s\n\n", s6);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");


	char s7[] = "Hello";
	char s8[] = "HelloA";
	res1 = ft_strcmp(s7, s8);
    res2 = strcmp(s7, s8);

    printf(YELLOW "\nCase 4 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s7);
	printf("s2: %s\n\n", s8);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");

	char s9[] = "Hello";
	char s10[] = "";
	res1 = ft_strcmp(s9, s10);
    res2 = strcmp(s9, s10);

    printf(YELLOW "\nCase 5 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s9: %s\n", s9);
	printf("10: %s\n\n", s10);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", strcmp(s9, s10));
	printf("-------------------\n\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:38:04 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/13 16:57:21 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 1 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 1 ? printf( GREEN "\"%d\"\n" RESET, ret) : printf( RED "\"%d\"\n" RESET, ret);
int main()
{
	char s1[] = "Hello";
	char s2[] = "Hello";
	int res1 = ft_strncmp(s1, s2, 8);
	int res2 = strncmp(s1, s2, 8);

	printf( YELLOW "\nCase 1 " RESET);
	PASS(res1 == res2)
	printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n\n", s2);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");



	char s3[] = "Hallo";
	char s4[] = "Hello";
	res1 = ft_strncmp(s3, s4, 8);
    res2 = strncmp(s3, s4, 8);

    printf( YELLOW "\nCase 2 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s3);
	printf("s2: %s\n\n", s4);
	printf("Return values:\n");
	printf("my function: "); 
    RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");




	char s5[] = "Hello";
	char s6[] = "HelaloA";
	res1 = ft_strncmp(s5, s6, 8);
    res2 = strncmp(s5, s6, 8);

    printf(YELLOW "\nCase 3 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s5);
	printf("s2: %s\n\n", s6);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");





	char s7[] = "Hello";
	char s8[] = "HelloA";
	res1 = ft_strncmp(s7, s8, 8);
    res2 = strncmp(s7, s8, 8);

    printf(YELLOW "\nCase 4 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s1: %s\n", s7);
	printf("s2: %s\n\n", s8);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", res2);
	printf("-------------------\n\n");





	char s9[] = "Hello";
	char s10[] = "";
	res1 = ft_strncmp(s9, s10, 2);
    res2 = strncmp(s9, s10, 2);

    printf(YELLOW "\nCase 5 " RESET);
    PASS(res1 == res2)
    printf("\n");
	printf("-------------------\n");
	printf("s9: %s\n", s9);
	printf("10: %s\n\n", s10);
	printf("Return values:\n");
	printf("my function: "); 
	RET(res1 == res2, res1)
	printf("lib function: %d\n", strcmp(s9, s10));
	printf("-------------------\n\n");
}/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:42:40 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/14 17:17:36 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 0 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 0 ? printf( GREEN "\"%s\"\n" RESET, ret) : printf( RED "\"%s\"\n" RESET, ret);
int main()
{
	char str[10] = "Hello";
	char lib_str[10] = "Hello";
	char src[10] = " 42";
	char *r = ft_strcat(str, src);
	char *libr = strcat(lib_str, src);

	char str2[10] = "Hello";
	char lib_str2[10] = "Hello";
	char src2[] = "";
	char *r2 = ft_strcat(str2, src2);
	char *libr2 = strcat(lib_str2, src2);

	char str3[9] = "Hello";
	char lib_str3[9] = "Hello";
	char src3[10] = " 42";
	char *r3 = ft_strcat(str3, src3);
	char *libr3 = strcat(lib_str3, src3);

	char str4[33] = "Hello";
	char lib_str4[33] = "Hello";
	char src4[23] = " 42, je m'appelle John";
	char *r4 = ft_strcat(str4, src4);
	char *libr4 = strcat(lib_str4, src4);

	char str5[10] = "\0";
	char lib_str5[10] = "\0";
	char src5[7] = "Coucou";
	char *r5 = ft_strcat(str5, src5);
	char *libr5 = strcat(lib_str5, src5);


	printf(YELLOW "\nTEST1 : concatenate" RESET);
	PASS(strcmp(r, libr)) 
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n\n", src);
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r, libr), r)
	printf("lib function: \"%s\"\n\n", libr);
	printf("My  concatened str: ");
   	RET(strcmp(str, lib_str), str)
	printf("Lib concatened str: \"%s\"\n", lib_str);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST2 : src is null" RESET);
	PASS(strcmp(r2, libr2)) 
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src2);
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r2, libr2), r2)
	printf("lib function: \"%s\"\n\n", libr2);
	printf("My  concatened str: ");
   	RET(strcmp(str2, lib_str2), str2)
	printf("Lib concatened str: \"%s\"\n", lib_str2);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST3" RESET);
	PASS(strcmp(r3, libr3)) 
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src3);
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r3, libr3), r3)
	printf("lib function: \"%s\"\n\n", libr3);
	printf("My  concatened str: ");
   	RET(strcmp(str3, lib_str3), str3)
	printf("Lib concatened str: \"%s\"\n", lib_str3);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST4 :" RESET);
	PASS(strcmp(r4, libr4)) 
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src4);
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r4, libr4), r4)
	printf("lib function: \"%s\"\n\n", libr4);
	printf("My  concatened str: ");
   	RET(strcmp(str4, lib_str4), str4)
	printf("Lib concatened str: \"%s\"\n", lib_str4);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST5 : dest is null" RESET);
	PASS(strcmp(r5, libr5)) 
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "");
	printf("src: \"%s\"\n", src5);
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r5, libr5), r5)
	printf("lib function: \"%s\"\n\n", libr5);
	printf("My  concatened str: ");
   	RET(strcmp(str5, lib_str5), str5)
	printf("Lib concatened str: \"%s\"\n", lib_str5);
	printf("-------------------------------\n\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:52:21 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/14 17:16:50 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 0 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 0 ? printf( GREEN "\"%s\"\n" RESET, ret) : printf( RED "\"%s\"\n" RESET, ret);
int main()
{
	char str[10] = "Hello";
	char lib_str[10] = "Hello";
	char src[10] = " 42";
	char *r = ft_strncat(str, src, 4);
	char *libr = strncat(lib_str, src, 4);

	char str2[10] = "Hello";
	char lib_str2[10] = "Hello";
	char src2[] = "";
	char *r2 = ft_strncat(str2, src2, 6);
	char *libr2 = strncat(lib_str2, src2, 6);

	char str3[9] = "Hello";
	char lib_str3[9] = "Hello";
	char src3[10] = " 42";
	char *r3 = ft_strncat(str3, src3, 2);
	char *libr3 = strncat(lib_str3, src3, 2);

	char str4[33] = "Hello";
	char lib_str4[33] = "Hello";
	char src4[23] = " 42, je m'appelle John";
	char *r4 = ft_strncat(str4, src4, 22);
	char *libr4 = strncat(lib_str4, src4, 22);

	char str5[10] = "\0";
	char lib_str5[10] = "\0";
	char src5[7] = "Coucou";
	char *r5 = ft_strncat(str5, src5, 6);
	char *libr5 = strncat(lib_str5, src5, 6);


	printf(YELLOW "\nTEST1 : concatenate" RESET);
	PASS(strcmp(r, libr))
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n\n", src);
	printf("size: 4\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r, libr), r)
	printf("lib function: \"%s\"\n\n", libr);
	printf("My  concatened str: ");
   	RET(strcmp(str, lib_str), str)
	printf("Lib concatened str: \"%s\"\n", lib_str);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST2 : src is null" RESET);
	PASS(strcmp(r2, libr2))
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src2);
	printf("size: 6\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r2, libr2), r2)
	printf("lib function: \"%s\"\n\n", libr2);
	printf("My  concatened str: ");
   	RET(strcmp(str2, lib_str2), str2)
	printf("Lib concatened str: \"%s\"\n", lib_str2);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST3 Concatenate only 2 characteres from src RESET");
	PASS(strcmp(r3, libr3))
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src3);
	printf("size: 2\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r3, libr3), r3)
	printf("lib function: \"%s\"\n\n", libr3);
	printf("My  concatened str: ");
   	RET(strcmp(str3, lib_str3), str3)
	printf("Lib concatened str: \"%s\"\n", lib_str3);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST4 : Concatenate all characteres from src RESET");
	PASS(strcmp(r4, libr4))
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src4);
	printf("size: 22\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r4, libr4), r4)
	printf("lib function: \"%s\"\n\n", libr4);
	printf("My  concatened str: ");
   	RET(strcmp(str4, lib_str4), str4)
	printf("Lib concatened str: \"%s\"\n", lib_str4);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST5 : dest is null" RESET);
	PASS(strcmp(r5, libr5))
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "");
	printf("src: \"%s\"\n", src5);
	printf("size: 6\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r5, libr5), r5)
	printf("lib function: \"%s\"\n\n", libr5);
	printf("My  concatened str: ");
   	RET(strcmp(str5, lib_str5), str5)
	printf("Lib concatened str: \"%s\"\n", lib_str5);
	printf("-------------------------------\n\n");
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:56:29 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/14 18:41:54 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 0 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 0 ? printf( GREEN "\"%s\"\n" RESET, ret) : printf( RED "\"%s\"\n" RESET, ret);
int main()
{
	char str[] = "Hello les loulous";
	char str2[] = "";
    char to_find[] = "lou";
    char to_find2[] = "";
    char to_find3[] = "jonathan";
    char to_find4[] = "Hello les loulous";
    char to_find5[] = "Hello les louloust";
    char to_find6[] = "H";

	char *r = ft_strstr(str, to_find);
	char *libr = strstr(str, to_find);

	char *r2 = ft_strstr(str, to_find2);
	char *libr2 = strstr(str, to_find2);

	char *r3 = ft_strstr(str, to_find3);
	char *libr3 = strstr(str, to_find3);

	char *r4 = ft_strstr(str2, to_find);
	char *libr4 = strstr(str2, to_find);

	char *r5 = ft_strstr(str, to_find4);
	char *libr5 = strstr(str, to_find4);

	char *r6 = ft_strstr(str, to_find5);
	char *libr6 = strstr(str, to_find5);

	char *r7 = ft_strstr(str, to_find6);
	char *libr7 = strstr(str, to_find6);




	printf(YELLOW "\nTEST1 : There is an occurence" RESET);
	PASS(strcmp(r, libr))
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n\n", to_find);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r, libr), r)
	printf("lib function: \"%s\"\n\n", libr);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST2 : to_find parameter is empty" RESET);
	PASS(strcmp(r2, libr2))
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n", to_find2);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r2, libr2), r2)
	printf("lib function: \"%s\"\n\n", libr2);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST3 : There is no occurence");
	PASS((r3 == 0 && libr3 == 0) == 0)
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n", to_find3);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
	RET((r3 == 0 && libr3 == 0) == 0, r3)
	printf("lib function: \"%s\"\n\n", libr3);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST4 : str is empty");
	PASS((r4 == 0 && libr4 == 0 ) == 0)
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str2);
	printf("to_find: \"%s\"\n", to_find);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET((r4 == 0 && libr4 == 0) == 0, r4)
	printf("lib function: \"%s\"\n\n", libr4);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST5 : str and to_find is same" RESET);
	PASS(strcmp(r5, libr5))
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n", to_find4);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r5, libr5), r5)
	printf("lib function: \"%s\"\n\n", libr5);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST6 : to_find has one more different char" RESET);
	PASS((r6 == 0 && libr6 == 0) == 0)
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n", to_find5);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET((r6 == 0 && libr6 == 0) == 0, r6)
	printf("lib function: \"%s\"\n\n", libr6);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST7 : to_find is H" RESET);
	PASS(strcmp(r7, libr7))
	printf("\n" );
	printf("-------------------------------\n");
	printf("str: \"%s\"\n", str);
	printf("to_find: \"%s\"\n", to_find6);
	printf("\n" );
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(strcmp(r7, libr7), r7)
	printf("lib function: \"%s\"\n\n", libr7);
	printf("-------------------------------\n\n");

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jontonde <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 18:24:04 by jontonde          #+#    #+#             */
/*   Updated: 2023/02/14 18:50:08 by jontonde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#define RED   "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"
#define PASS(res) res == 1 ? printf( GREEN " (\xE2\x9C\x93)" RESET ) : printf( RED " (x)"  RESET );
#define RET(res, ret) res == 1 ? printf( GREEN "\"%u\"\n" RESET, ret) : printf( RED "\"%u\"\n" RESET, ret);
int main()
{
	char dest[10] = "Hello";
	char lib_dest[10] = "Hello";
	char src[10] = " 42";
	unsigned int r = ft_strlcat(dest, src, 4);
	unsigned int libr = strlcat(lib_dest, src, 4);

	char dest2[10] = "Hello";
	char lib_dest2[10] = "Hello";
	char src2[] = "";
	unsigned int r2 = ft_strlcat(dest2, src2, 6);
	unsigned int libr2 = strlcat(lib_dest2, src2, 6);

	char dest3[9] = "Hello";
	char lib_dest3[9] = "Hello";
	char src3[10] = " 42";
	unsigned int r3 = ft_strlcat(dest3, src3, 8);
	unsigned int libr3 = strlcat(lib_dest3, src3, 8);


	char dest4[33] = "Hello";
	char lib_dest4[33] = "Hello";
	char src4[23] = " 42, je m'appelle John";
	unsigned int r4 = ft_strlcat(dest4, src4, 33);
	unsigned int libr4 = strlcat(lib_dest4, src4, 33);


	char dest5[1] = "\0";
	char lib_dest5[1] = "\0";
	char src5[7] = "Coucou";
	unsigned int r5 = ft_strlcat(dest5, src5, 1);
	unsigned int libr5 = strlcat(lib_dest5, src5, 1);


	char dest6[120] = "Hello ";
	char lib_dest6[120] = "Hello ";
	char src6[7] = "Coucou";
	unsigned int r6 = ft_strlcat(dest6, src6, 100);
	unsigned int libr6 = strlcat(lib_dest6, src6, 100);


	printf(YELLOW "\nTEST1 : size parameter is smaller than $dest + 1" RESET);
	PASS(r == libr)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src:  \"%s\"\n", src);
	printf("size: 4\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(r == libr, r)
	printf("lib function: \"%u\"\n\n", libr);
	printf("My  concatened dest: \"%s\"\n", dest);
	printf("Lib concatened dest: \"%s\"\n", lib_dest);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST2 : src parameter is null" RESET);
	PASS(r2 == libr2)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src2);
	printf("size: 6\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(r2 == libr2, r2)
	printf("lib function: \"%u\"\n\n", libr2);
	printf("My  concatened dest: \"%s\"\n", dest2);
	printf("Lib concatened dest: \"%s\"\n", lib_dest2);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST3 : There is no occurence");
	PASS(r3 == libr3)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src3);
	printf("size: 8\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
	RET(r3 == libr3, r3)
	printf("lib function: \"%u\"\n\n", libr3);
	printf("My  concatened dest: \"%s\"\n", dest3);
	printf("Lib concatened dest: \"%s\"\n", lib_dest3);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf(YELLOW "\nTEST4 : dest is empty");
	PASS(r4 == libr4)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello");
	printf("src: \"%s\"\n", src4);
	printf("size: 33\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(r4 == libr4, r4)
	printf("lib function: \"%u\"\n\n", libr4);
	printf("My  concatened dest: \"%s\"\n", dest4);
	printf("Lib concatened dest: \"%s\"\n", lib_dest4);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST5 : dest and src is same" RESET);
	PASS(r5 == libr5)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "");
	printf("src: \"%s\"\n", src5);
	printf("size: 1\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(r5 == libr5, r5)
	printf("lib function: \"%u\"\n\n", libr5);
	printf("My  concatened dest: \"%s\"\n", dest5);
	printf("Lib concatened dest: \"%s\"\n", lib_dest5);
	printf("-------------------------------\n\n");

	usleep(500000);

	printf( YELLOW "\nTEST6 : src has one more different char" RESET);
	PASS(r6 == libr6)
	printf("\n" );
	printf("-------------------------------\n");
	printf("dest: \"%s\"\n", "Hello ");
	printf("src: \"%s\"\n", src6);
	printf("size: 100\n\n");
	printf("Returned value:\n");
	printf("My  function: ");
   	RET(r6 == libr6, r6)
	printf("lib function: \"%u\"\n\n", libr6);
	printf("My  concatened dest: \"%s\"\n", dest6);
	printf("Lib concatened dest: \"%s\"\n", lib_dest6);
	printf("-------------------------------\n\n");

}