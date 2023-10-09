#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <bsd/string.h>

#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

int main(void)
{
    // ex00
    // notes: if dest buffer smaller than src
    // even strcpy() has undefined behaviour
    // https://stackoverflow.com/questions/1601791/strcpy-when-dest-buffer-is-smaller-than-src-buffer
    // I assume we need not to define the behaviour in this case
    char src0[] = "test 123";
    char dest0[10];
    char * result_p = ft_strcpy(dest0, src0);

    printf("%s", dest0);
    printf("\nif a pointer to the destination string is returned: %s\n",
        dest0 == result_p ? "true" : "false");

    // ex01
    // 3 cases were tested and compared to strncpy()'s behaviour:
    // src buffer > or == or < dest buffer
    char src1[] = "test 123";
    char dest1[20];
    char * result_p1 = ft_strncpy(dest1, src1, 10);
    printf("%s\n", dest1);
    // check if '\0' is added
    printf("%s\n", dest1[8] == '\0' ? "true" : "false");
    printf("ft_str_is_printable%s\n", dest1[9] == '\0' ? "true" : "false");

    printf("if a pointer to the destination string is returned: %s\n",
        dest1 == result_p1 ? "true" : "false");

    // ex02
    printf("===== ex02 =====\n");
    printf("%s\n", ft_str_is_alpha("HeLLo") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_alpha("He1l0") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_alpha("15943") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_alpha("15:$943") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_alpha("") == 1 ? "true" : "false");


    // ex03
    printf("===== ex03 =====\n");
    printf("%s\n", ft_str_is_numeric("HeLLo") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_numeric("He1l0") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_numeric("15?943") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_numeric("15943") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_numeric("") == 1 ? "true" : "false");

    // ex04
    printf("===== ex04 =====\n");
    printf("%s\n", ft_str_is_lowercase("HeLLo") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_lowercase("He1l0") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_lowercase("15;943") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_lowercase("bugssss") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_lowercase("") == 1 ? "true" : "false");

    // ex05
    printf("===== ex05 =====\n");
    printf("%s\n", ft_str_is_uppercase("HeLLo") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_uppercase("He1l0") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_uppercase("15!943") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_uppercase("BUG*SSS;") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_uppercase("BUGSSS") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_uppercase("") == 1 ? "true" : "false");

    // ex06
    printf("===== ex06 =====\n");
    printf("%s\n", ft_str_is_printable("how;\fdoUdo?") == 0 ? "true" : "false");
    printf("%s\n", ft_str_is_printable("how;doUdo?") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_printable("howDoUDo?:))") == 1 ? "true" : "false");
    printf("%s\n", ft_str_is_printable("") == 1 ? "true" : "false");

    // ex07 & ex08
    char str[] = "hEllO123;$";

    char * p1 = ft_strupcase(str);
    printf("===== ex07 =====\n");
    printf("%s\n", str);
    printf("if the returned pointer is pointing to the string: %s\n",
        p1 == str ? "true" : "false");

    char * p2 = ft_strlowcase(str);
    printf("===== ex08 =====\n");
    printf("%s\n", str);
    printf("if the returned pointer is pointing to the string: %s\n",
        p2 == str ? "true" : "false");

    // ex09
    printf("===== ex09 =====\n");
    char str2[] = "salut, comment tU Vas ? 42mots quaRante-deux; cInquante+et+un";
    char * p3 = ft_strcapitalize(str2);
    printf("%15s : %s\n", "EXPECTED OUPUT", "Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un");
    printf("%15s : %s\n", "YOUR OUTPUT", str2);

    printf("if the returned pointer is pointing to the string: %s\n",
        p3 == str2 ? "true" : "false");

  
    // ex11
    char str11[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(str11);

    return (0);
}
