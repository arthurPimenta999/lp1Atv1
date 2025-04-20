#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

int hasUpper(const char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (isupper(str[i]))
        {
            return 1; // Retorna 1 se encontrar uma letra maiúscula
        }
    }

    return 0; // Retorna 0 se não encontrar nenhuma letra maiúscula
}

int hasLower(const char *str)
{
    for (int i = 0; str[i]; i++)
    {
        if (islower(str[i]))
        {
            return 1; // Retorna 1 se encontrar uma letra maiúscula
        }
    }

    return 0; // Retorna 0 se não encontrar nenhuma letra maiúscula
}

int isEqual(const char str1[], const char str2[])
{
    if (strcmp(str1, str2) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int hasDigit(const char str[])
{
    for (int i = 0; str[i]; i++)
    {
        if (isdigit(str[i]))
        {
            return 1; // Retorna 1 se encontrar um dígito
        }
    }

    return 0; // Retorna 0 se não encontrar nenhum dígito
}

int has6Char(const char str[])
{
    int charCount = strlen(str);

    if (charCount < 6)
        return 0;

    return 1;
}

int main(void)
{
    char palavra1[100];
    char palavra2[100];

    printf("Insira a primeira palavra: ");
    scanf("%s", palavra1);
    printf("\nInsira a segunda palavra: ");
    scanf("%s", palavra2);

    if (
        isEqual(palavra1, palavra2) &&
        has6Char(palavra1) &&
        hasLower(palavra1) &&
        hasUpper(palavra1) &&
        hasDigit(palavra1))
    {
        return printf("\nNova senha ok.");
    }
    else
        return printf("Senha inválda.");
}