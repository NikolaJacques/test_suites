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
    char s1[] = "Same";
    char s2[] = "Same";
    char s3[] = "Samurai";
    assert(*s1);
    assert(*s2);
    assert(*s3);
    i = ft_strcmp(s1, s2);
    j = strcmp(s1, s2);
    printf("%d : %d\n", i, j);
    i = ft_strcmp(s1, s3);
    j = strcmp(s1, s3);
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
    assert(*s1);
    assert(*s2);
    i = ft_strncmp(s1, s2, 3);
    j = strncmp(s1, s2, 3);
    printf("%d : %d\n", i, j);
    i = ft_strncmp(s1, s2, 4);
    j = strncmp(s1, s2, 4);
    printf("%d : %d\n", i, j);
}

void test02()
{
    printf("\ntest 02:\n");
    char s1[10] = "Going";
    char s2[5] = "Home";
    char s3[10] = "Going";
    assert(*s1);
    assert(*s2);
    assert(*s3);
    ft_strcat(s1, s2);
    printf("%s : ", s1);
    strcat(s3, s2);
    printf("%s\n", s3);
}

void test03()
{
    printf("\ntest 03:\n");
    char s1[10] = "Going";
    char s2[5] = "Home";
    char s3[10] = "Going";
    assert(*s1);
    assert(*s2);
    assert(*s3);
    ft_strncat(s1, s2, 2);
    printf("%s : ", s1);
    strncat(s3, s2, 2);
    printf("%s\n", s3);
    
}

void test04()
{
    printf("\ntest 04:\n");
    char s1[11] = "Flatliners";
    char s2[] = "line";
    char *s3;
    char *s4;
    assert(*s1);
    assert(*s2);
    s3 = ft_strstr(s1, s2);
    printf("%s : ", s3);
    s4 = strstr(s1, s2);
    printf("%s\n", s3);
    
}

void test05()
{
    printf("\ntest 05:\n");
    int i, j;
    i = 0;
    j = 0;

    char s1[12] = "Concat";
    char s2[] = "enate";
    assert(*s1);
    assert(*s2);
    i = ft_strlcat(s1, s2, 12);

    char s3[12] = "Concat";
    char s4[] = "enate";
    assert(*s3);
    assert(*s4);
    j = strlcat(s3, s4, 12);
    
    printf("%d : %d\n", i, j);
}



int main(void)
{
	test00();
    test01();
    test02();
    test03();
    test04();
    test05();
    printf("\n");
	return(0);
}
