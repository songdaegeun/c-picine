/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C02testcase                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:10:48 by jotondel          #+#    #+#             */
/*   Updated: 2023/02/10 15:34:09 by tondelierjo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int main(void)
{
    char str[] = "123456789";
    char dest[] = "abcdefghijklmnopqrstuvwxyz";
    char str1[] = "12";
    char dest1[] = "abcdefg";
    char str2[] = "";
    char dest2[] = "abcde";
	char str3[] = "You are my teacher";
	char dest3[] = "subject and subject and subject";

	printf("\n\n");
    printf("str : %s\ndest : %s\n", str, dest);
    printf("your function : %s\ncom function : %s\n", \
	ft_strcpy(dest, str), strcpy(dest, str));
    printf("\n\n");

    printf("str : %s\ndest : %s\n", str1, dest1);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest1, str1), strcpy(dest1, str1));
    printf("\n\n");
    
	printf("str : %s\ndest : %s\n", str2, dest2);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest2, str2), strcpy(dest2, str2));
    printf("\n\n");

    printf("str : %s\ndest : %s\n", str3, dest3);
    printf("your function : %s\ncom function : %s\n",\
	 ft_strcpy(dest3, str3), strcpy(dest3, str3));
    printf("\n\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 13:24:09 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/21 15:26:48 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char str[] = "123456789";
    char dest[] = "aaaaaaaaaa";
    char edest[] = "aaaaaaaaaa";
    char dest01[] = "aaaaaaaaaa";
    char edest01[] = "aaaaaaaaaa";
    char dest02[] = "aaaaaaaaaa";
    char edest02[] = "aaaaaaaaaa";

    char str1[] = "helloworld";
    char dest1[10] = "yolo";
    char edest1[10] = "yolo";
    char dest101[20] = "";
    char edest101[20] = ""; 
    char dest102[20];
    char edest102[20];

    char str2[] = "";
    char dest2[] = "abcde";
    char edest2[] = "abcde";
    char dest201[] = "abcde";
    char edest201[] = "abcde";


    printf("\n\nTEST1 : dest is bigger than src\n");
    printf("------------------------------------------------");
	printf("\n");
    printf("str : %s\ndest : %s\nsize : 7\n", str, dest);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest, str, 7), strncpy(edest, str, 7));
	printf("\n\n");
    printf("str : %s\ndest : %s\nsize : 0\n", str, dest01);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest01, str, 0), strncpy(edest01, str, 0));
	printf("\n\n");
    printf("str : %s\ndest : %s\nsize : 10\n", str, dest01);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest01, str, 10), strncpy(edest01, str, 10));
    printf("------------------------------------------------\n");

    printf("\n\n\nTEST2 : src is bigger than dest\n");
    printf("------------------------------------------------");
    printf("\n");
    printf("str : %s\ndest : %s\nsize : 4\n", str1, dest1);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest1, str1, 4), strncpy(edest1, str1, 4));
    printf("\n\n");
    printf("str : %s\ndest : [10]\nsize : 0\n", str1);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest101, str1, 0), strncpy(edest101, str1, 0));
    printf("\n\n");
    printf("str : %s\ndest : [20]\nsize : 20\n", str1);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest102, str1, 20), strncpy(edest102, str1, 20));
    printf("------------------------------------------------\n");

    printf("\n\n\nTEST3 : src is empty\n");
    printf("------------------------------------------------");
    printf("\n");
    printf("str : %s\ndest : %s\nsize : 2\n", str2, dest2);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest2, str2, 2), strncpy(edest2, str2, 2));
    printf("\n\n");
    printf("str : %s\ndest : %s\nsize : 0\n", str2, dest201);
    printf(" My function : ->|%s|<-\nlib function : ->|%s|<-\n",\
	ft_strncpy(dest201, str2, 0), strncpy(edest201, str2, 0));
    printf("------------------------------------------------\n");
	
    printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:13:37 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:02:33 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include<string.h>

int	ft_str_is_alpha(char *str);

int main(void)
{
    char str[] = "aBchWEOPghsdfEbkbjsoiE";
    char str1[] = "";
    char str2[] = "aARegAE1feSDQdvH";
    char str3[] = ";][;1=-`10976=234=-";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_alpha(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_alpha(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_alpha(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str3, ft_str_is_alpha(str3));
	printf("\n\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 16:58:37 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:03:54 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include<string.h>

int	ft_str_is_numeric(char *str);

int main(void)
{
    char str[] = "9816345089608716324";
    char str1[] = "";
    char str2[] = "1078623423l1465981253489";
    char str3[] = "12308764-96872378456";
    char str4[] = "-129385304345";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_numeric(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_numeric(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_numeric(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str3, ft_str_is_numeric(str3));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str4, ft_str_is_numeric(str4));
	printf("\n\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:04:25 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:05:25 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include<string.h>

int	ft_str_is_lowercase(char *str);

int main(void)
{
    char str[] = "aligywefbxlygsdcjhg";
    char str1[] = "";
    char str2[] = "aliugwefdlIsvluiscedf";
    char str3[] = "aef;iugaew:liaygefwef";
    char str4[] = "awefaewfuoiIawelfgliygawef";

	printf("\n\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_lowercase(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_lowercase(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_lowercase(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str3, ft_str_is_lowercase(str3));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str4, ft_str_is_lowercase(str4));
	printf("\n\n");

    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:14:05 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:06:00 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include<string.h>

int	ft_str_is_uppercase(char *str);

int main(void)
{
    char str[] = "DFLIUGAEWFKFSDZQSDF";
    char str1[] = "";
    char str2[] = "AWEFLLIGStDCWAEFDKUYFQW";
    char str3[] = "AEFULYZPQOWEFVWE]FLYGDS";
    char str4[] = "HFWDUSQMSDNwWEFQDYGFE";

	printf("\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_uppercase(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_uppercase(str1));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str2, ft_str_is_uppercase(str2));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n\n", str3, ft_str_is_uppercase(str3));
    printf("str : %s\nyour function : %d\nexpect :\
	 0\n", str4, ft_str_is_uppercase(str4));
	printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 17:24:54 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:07:11 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



/*
#include <stdio.h>
#include<string.h>

int	ft_str_is_printable(char *str);

int main(void)
{
    char str[] = "awe][f;./,dsvlg1=-`73rzef.,";
    char str1[] = "";
    char str2[] = "auhwefli\ngzewubfew";
    char str3[] = "\tAEFULYZPQOWEFVWE]FLYGDS";
    char str4[] = "HFWDUSQMSDNwWEFQDYGFE\f";

	printf("\n");
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str, ft_str_is_printable(str));
    printf("str : %s\nyour function : %d\nexpect :\
	 1\n\n", str1, ft_str_is_printable(str1));
    printf("str : auhwefli \\n gzewubfew\nyour function :\
	 %d\nexpect : 0\n\n", ft_str_is_printable(str2));
    printf("str : \\t AEFULYZPQOWEFVWE]FLYGDS\nyour function :\
	 %d\nexpect : 0\n\n", ft_str_is_printable(str3));
    printf("str : HFWDUSQMSDNwWEFQDYGFE\\f\nyour function :\
	 %d\nexpect : 0\n", ft_str_is_printable(str4));
	printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 18:25:12 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:09:13 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <string.h>

char	*ft_strupcase(char *str);

int main(void)
{
    char str[] = "abcdefghijklmnopqrstuvwxyz";
    char str1[] = "ABCDefghijkLMNOP";
    char str2[] = "a;b.c'd,e[f]g-h=i1j5k";

	printf("\n");
    printf("befor : %s\n", str);
    printf("after : %s\n\n", ft_strupcase(str));
    printf("befor : %s\n", str1);
    printf("after : %s\n\n", ft_strupcase(str1));
    printf("befor : %s\n", str2);
    printf("after : %s\n\n", ft_strupcase(str2));
	printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:43:48 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 14:10:14 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <string.h>

char	*ft_strlowcase(char *str);

int main(void)
{
    char str[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char str1[] = "abcdeFGHIJKlmnopqrs";
    char str2[] = "A;B.C'D,E[F]G-H=I1J5K";

	printf("\n");
    printf("befor : %s\n", str);
    printf("after : %s\n\n", ft_strlowcase(str));
    printf("befor : %s\n", str1);
    printf("after : %s\n\n", ft_strlowcase(str1));
    printf("befor : %s\n", str2);
    printf("after : %s\n\n", ft_strlowcase(str2));
	printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:46:42 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/20 15:12:58 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


/*
#include <stdio.h>
#include <string.h>


int main(void)
{
    char str[] = "salut, coMmEnt tU vas ? 42MOts \
	quarante-deux; cinquante+Et+un";
    char str1[] = "hello 42STUdeNts, i'M ba-tman.";
    char str2[] = "hi, i'm r+i+d+d+l+e+r. N+ow/i'1l \
	give -you9a 00sama11 r1dd1e-h-a-ha--ha- ";
    char str3[] = "";


	printf("\n");
    printf("before: %s\n", str);
    printf("after : %s\n", ft_strcapitalize(str));
    printf("expect: Salut, Comment Tu Vas ? 42mots  Quarante-Deux; \
Cinquante+Et+Un\n\n");
    printf("before: %s\n", str1);
    printf("after : %s\n", ft_strcapitalize(str1));
    printf("expect: Hello 42students, I'M Ba-Tman.\n\n");
    printf("before: %s\n", str2);
    printf("after : %s\n", ft_strcapitalize(str2));
    printf("expect: Hi, I'M R+I+D+D+L+E+R. N+Ow/I'1l	Give -You9a\
 00sama11 R1dd1e-H-A-Ha--Ha- \n\n");

    printf("before: \"%s\"\n", str3);
    printf("after : \"%s\"\n", ft_strcapitalize(str3));

	printf("\n");
    return (0);
}

*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jotondel <jotondel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 11:36:48 by jotondel          #+#    #+#             */
/*   Updated: 2022/04/21 15:03:33 by jotondel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int	size);

int main(void)
{
    char src[] = "123456789";
    char dest[] = "aaaaaaaaaa";
    char lib_dest[] = "aaaaaaaaaa";
    char dest01[] = "aaaaaaaaaa";
    char lib_dest01[] = "aaaaaaaaaa";
    char dest02[] = "aaaaaaaaaa";
    char lib_dest02[] = "aaaaaaaaaa";

    char src1[] = "helloworld";
    char dest1[10] = "yolo";
    char lib_dest1[10] = "yolo";
    char dest101[20] = "";
    char lib_dest101[20] = ""; 
    char dest102[20];
    char lib_dest102[20];

    char src2[] = "";
    char dest2[] = "abcde";
    char lib_dest2[] = "abcde";
    char dest201[] = "abcde";
    char lib_dest201[] = "abcde";

	printf("\n\nTEST1 : dest is bigger than src\n");
    printf("------------------------------------------------");
	printf("\n");
    printf("src : %s\ndest : %s\nsize : 7\n", src, dest);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest, src, 7), strlcpy(lib_dest, src, 7));
	printf("dest: 	  ->|%s|<-\n", dest);
	printf("lib_dest: ->|%s|<-\n", lib_dest);
	printf("\n\n");
    printf("src : %s\ndest : %s\nsize : 0\n", src, dest01);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest01, src, 0), strlcpy(lib_dest01, src, 0));
	printf("dest:     ->|%s|<-\n", dest01);
	printf("lib_dest: ->|%s|<-\n", lib_dest01);
	printf("\n\n");
    printf("src : %s\ndest : %s\nsize : 10\n", src, dest01);\
	ft_strlcpy(dest01, src, 10), strlcpy(lib_dest01, src, 10);
	printf("dest:     ->|%s|<-\n", dest02);
	printf("lib_dest: ->|%s|<-\n", lib_dest02);
    printf("------------------------------------------------\n");

    printf("\n\n\nTEST2 : src is bigger than dest\n");
    printf("------------------------------------------------");
    printf("\n");
    printf("src : %s\ndest : %s\nsize : 4\n", src1, dest1);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest1, src1, 4), strlcpy(lib_dest1, src1, 4));
	printf("dest:     ->|%s|<-\n", dest1);
	printf("lib_dest: ->|%s|<-\n", lib_dest1);
    printf("\n\n");
    printf("src : %s\ndest : [10]\nsize : 0\n", src1);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest101, src1, 0), strlcpy(lib_dest101, src1, 0));
	printf("dest:     ->|%s|<-\n", dest101);
	printf("lib_dest: ->|%s|<-\n", lib_dest101);
    printf("\n\n");
    printf("src : %s\ndest : [20]\nsize : 20\n", src1);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest102, src1, 20), strlcpy(lib_dest102, src1, 20));
	printf("dest:     ->|%s|<-\n", dest102);
	printf("lib_dest: ->|%s|<-\n", lib_dest102);
    printf("------------------------------------------------\n");

    printf("\n\n\nTEST3 : src is empty\n");
    printf("------------------------------------------------");
    printf("\n");
    printf("src : %s\ndest : %s\nsize : 2\n", src2, dest2);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest2, src2, 2), strlcpy(lib_dest2, src2, 2));
	printf("dest:     ->|%s|<-\n", dest2);
	printf("lib_dest: ->|%s|<-\n", lib_dest2);
    printf("\n\n");
    printf("src : %s\ndest : %s\nsize : 0\n", src2, dest201);
    printf(" My function : ->|%u|<-\nlib function : ->|%lu|<-\n",\
	ft_strlcpy(dest201, src2, 0), strlcpy(lib_dest201, src2, 0));
	printf("dest:     ->|%s|<-\n", dest201);
	printf("lib_dest: ->|%s|<-\n", lib_dest201);
    printf("------------------------------------------------\n");
	
    printf("\n");
    return (0);
}
*//* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 14:56:21 by jotondel          #+#    #+#             */
/*   Updated: 2023/01/27 21:04:43 by tondelierjo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <stdlib.h>

void	ft_putstr_non_printable(char *str);

int main(void)
{
    char str[] = "Coucou\ntu vas bien ?";
    char str1[] = {9, 10, 11, 12, 13, 32, 80,\
	 114, 105, 110, 116, 128, 130, 234, '\0'};
    char str2[] = "What \n is \t the \f non_printable\e  ";

	printf("\n");
    printf("\ninput :       Coucou\\ntu vas bien ?\n");
    printf("your result : ");
        fflush(NULL);

    ft_putstr_non_printable(str);
    printf("\nexpect :      Coucou\\0atu vas bien ?\n");

    printf("\n\n");
    printf("input : tab={9, 10, 11, 12, 13, 32, 80,\
	 114, 105, 110, 116, 128, 130, 234}\n");
    printf("your result : ");
    fflush(NULL);
    ft_putstr_non_printable(str1);
    printf("\nexpect :      \\09\\0a\\0b\\0c\\0d\
	 Print\\80\\82\\ea\n");

    printf("\n\n");
    printf("input :       What \\n is \\t the \\f\
	 non_printable\\e  \n");
    printf("your result : ");
    fflush(NULL);

    ft_putstr_non_printable(str2);
    printf("\nexpect :      What \\0a is \\09 the\
	 \\0c non_printable\\1b \n");
    printf("\n");
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tondelierjonathan <tondelierjonathan@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 17:49:55 by jotondel          #+#    #+#             */
/*   Updated: 2023/01/28 11:23:44 by tondelierjo      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
int main()
{
	char text[] = "Bonjo	ur les \0am\0inches\0c est foutoutce qu onpeut faire\
	avecprint_memory\0\0 lol\0lol\0 \0";
	//ft_print_memory(&text, 64);
	unsigned int size = 4000;
	ft_print_memory(text, size);
}