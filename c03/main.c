#include "./common.h"
#include <stdio.h>
#include <string.h>
#include <assert.h>

void test00()
{
    printf("\ntest 00:\n");
    int i, j;
    i = 0;
    j = 0;
    char s1[] = "same";
    char s2[] = "same";
    char s3[] = "samurai";
    char s4[] = "sage";
    assert(s1);
    assert(s2);
    assert(s3);
    assert(s4);
    i = ft_strcmp(s1, s2);
    j = strcmp(s1, s2);
    printf("%d : %d\n", i, j);
    i = ft_strcmp(s1, s3);
    j = strcmp(s1, s3);
    printf("%d : %d\n", i, j);
    i = ft_strcmp(s1, s4);
    j = strcmp(s1, s4);
    printf("%d : %d\n", i, j);
}

void test01()
{
    printf("\ntest 01:\n");
    int i, j;
    i = 0;
    j = 0;
    char s1[] = "Same";
    char s2[] = "Sammy";
    char s3[] = "Samantha";
    assert(s1);
    assert(s2);
    assert(s3);
    i = ft_strncmp(s1, s2, 3);
    j = strncmp(s1, s2, 3);
    printf("%d : %d\n", i, j);
    i = ft_strncmp(s1, s2, 4);
    j = strncmp(s1, s2, 4);
    printf("%d : %d\n", i, j);
    i = ft_strncmp(s1, s3, 4);
    j = strncmp(s1, s3, 4);
    printf("%d : %d\n", i, j);
}

void test02()
{
    printf("\ntest 02:\n");
    char s1[10] = "Going";
    char s2[5] = "Home";
    char s3[10] = "Going";
    char *s4 = NULL;
    char *s5 = NULL;
    assert(s1);
    assert(s2);
    assert(s3);
    s4 = ft_strcat(s1, s2);
    assert(s4);
    printf("%s : ", s1);
    s5 = strcat(s3, s2);
    assert(s5);
    printf("%s\n", s3);
}

void test03()
{
    printf("\ntest 03:\n");
    char s1[10] = "Going";
    char s2[5] = "Home";
    char s3[10] = "Going";
    char *s4 = NULL;
    char *s5 = NULL;
    assert(s1);
    assert(s2);
    assert(s3);
    s4 = ft_strncat(s1, s2, 2);
    assert(s4);
    printf("%s : ", s4);
    s5 = strncat(s3, s2, 2);
    assert(s5);
    printf("%s\n", s5);
    
}

void test04()
{
    printf("\ntest 04:\n");
    char s1[] = "Flatliners";
    char s2[] = "liners";
    char *s3 = NULL;
    char *s4 = NULL;
    assert(s1);
    assert(s2);
    s3 = ft_strstr(s1, s2);
    assert(s3);
    printf("%s : ", s3);
    s4 = strstr(s1, s2);
    assert(s4);
    printf("%s\n", s3);

    char s5[] = "";
    char *s6 = NULL;
    char *s7 = NULL;
    s6 = ft_strstr(s1, s5);
    assert(s6);
    printf("%s : ", s6);
    s7 = strstr(s1, s5);
    assert(s7);
    printf("%s\n", s7);

    char s8[] = "lambda";
    char *s9 = NULL;
    char *s10 = NULL;
    s9 = ft_strstr(s1, s8);
    assert(!s9);
    printf("%s : ", s9);
    s10 = strstr(s1, s8);
    assert(!s10);
    printf("%s\n", s10);
}

void test05()
{
    printf("\ntest 05:\n");
    int i, j;
    i = 0;
    j = 0;

    char s1[12] = "Concat";
    char s2[] = "enate";
    assert(s1);
    assert(s2);
    i = ft_strlcat(s1, s2, 12);

    char s3[12] = "Concat";
    char s4[] = "enate";
    assert(s3);
    assert(s4);
    j = strlcat(s3, s4, 12);

    printf("%s : %s\n", s1, s3);
    printf("%d : %d\n", i, j);

    char s5[12] = "Concat";
    char s6[] = "enate";
    assert(s5);
    assert(s6);
    i = ft_strlcat(s5, s6, 8);

    char s7[12] = "Concat";
    char s8[] = "enate";
    assert(s7);
    assert(s8);
    j = strlcat(s7, s8, 8);

    printf("%s : %s\n", s5, s7);
    printf("%d : %d\n", i, j);

    char s9[12] = "test";
    char s10[] = "y";
    assert(s5);
    assert(s2);
    i = ft_strlcat(s9, s10, 0);

    char s11[12] = "test";
    char s12[] = "y";
    assert(s7);
    assert(s8);
    j = strlcat(s11, s12, 0);

    printf("%s : %s\n", s9, s11);
    printf("%d : %d\n", i, j);
}

void test5bis()
{
    	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";
	char s7a[20] = "Shorter";
	char s8a[] = "ThanMyself";
	char s7b[20] = "Shorter";
	char s8b[] = "ThanMyself";

	printf("%s\n", ft_strlcat(s1a, s2a, 6) == strlcat(s1b, s2b, 6) ? "Success" : "Fail");
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s3a, s4a, 10) == strlcat(s3b, s4b, 10) ? "Success" : "Fail");
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s5a, s6a, 4) == strlcat(s5b, s6b, 4) ? "Success" : "Fail");
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
	printf("%s\n", ft_strlcat(s7a, s8a, 0) == strlcat(s7b, s8b, 0) ? "Success" : "Fail");
	printf("%s\n", strcmp(s7a, s7b) == 0 && strcmp(s8a, s8b) == 0 ? "Success" : "Fail");
}



int main(void)
{
	test00();
    test01();
    test02();
    test03();
    test04();
    test05();
    test5bis();
    printf("\n");
	return(0);
}
