#include "./common.h"
#include <stdio.h>

void print(char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
}

void test00()
{
    // test for 00
    printf("\ntest 00:\n");
	char str1[] = "Hello";
	char str2[] = "Goodbye";
	ft_strcpy(str2, str1);
    printf("Hello : ");
	print(str2);

    char str3[] = "Hello";
	char str4[] = "";
	ft_strcpy(str4, str3);
    printf("<empty> : ");
	print(str4);
}

void test01()
{
    // test for 01
    printf("\ntest 01:\n");
	char str1[] = "Hello";
	char str2[] = "Goodbye";
	ft_strncpy(str2, str1, 6);
    printf("Hello : ");
	print(str2);

    char str3[] = "Hello";
	char str4[] = "";
	ft_strncpy(str4, str3, 1);
    printf("<empty> : ");
	print(str4);
}

void test03()
{
    int o;
    o = 2;
    printf("\ntest 03:\n");
    o = ft_str_is_numeric("");
    printf("1: %d\n", o);
    o = ft_str_is_numeric("09");
    printf("0: %d\n", o);
    o = ft_str_is_numeric("*qs-df");
    printf("0: %d\n", o);
}

void test04()
{
    int n;
    n = 2;
    printf("\ntest 04:\n");
    n = ft_str_is_lowercase("");
    printf("1: %d\n", n);
    n = ft_str_is_lowercase("0dc9:_a");
    printf("0: %d\n", n);
    n = ft_str_is_lowercase("qsdfaz");
    printf("1: %d\n", n);
    n = ft_str_is_lowercase("ZsDfAz");
    printf("0: %d\n", n);
}

void test05()
{
    int m;
    m = 2;
    printf("\ntest 05:\n");
    m = ft_str_is_uppercase("");
    printf("1: %d\n", m);
    m = ft_str_is_uppercase("0dc9:_a");
    printf("0: %d\n", m);
    m = ft_str_is_uppercase("QSDFAZ");
    printf("1: %d\n", m);
    m= ft_str_is_uppercase("ZsDfAz ");
    printf("0: %d\n", m);
}

void test06()
{
    int l;
    char non_printable[] = {127, 'a'};
    l = 2;
    printf("\ntest 06:\n");
    l = ft_str_is_printable("");
    printf("1: %d\n", l);
    l = ft_str_is_printable(non_printable);
    printf("0: %d\n", l);
    l = ft_str_is_printable("q*sd{faz");
    printf("1: %d\n", l);
    l = ft_str_is_printable(" ZsDf~Az");
    printf("1: %d\n", l);
}

void test07()
{
    printf("\ntest 07:\n");
    char i[] = "abCdeF";
    printf("ABCDEF: ");
    ft_strupcase(i);
    print(i);
    
    char j[] = "01234";
    ft_strupcase(j);
    printf("01234: ");
    print(j);

    char k[] = " {$^¨}";
    ft_strupcase(k);
    printf(" {$^¨} : ");
    print(k);
}

void test08()
{
    printf("\ntest 08:\n");
    char h[] = "ZASSF";
    ft_strlowcase(h);
    printf("zassf: ");
    print(h);

    char i[] = "aBcDeF";
    printf("abcdef: ");
    ft_strlowcase(i);
    print(i);
    
    char j[] = "01234";
    ft_strlowcase(j);
    printf("01234: ");
    print(j);

    char k[] = " {$^¨}";
    ft_strlowcase(k);
    printf(" {$^¨} : ");
    print(k);
}

void test09()
{
    printf("\ntest 09:\n");
    char h[] = "tHis Has*bEeN+grEat 1uN! ";
    ft_strcapitalize(h);
    printf("This Has*Been+Great 1un! : ");
    print(h);
}

int main(void)
{
	test00();
    test01();
    test03();
    test04();
    test05();
    test06();
    test07();
    test08();
    test09();
	return(0);
}
