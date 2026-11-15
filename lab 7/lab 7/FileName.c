#define _CRT_SECURE_NO_DEPRECATE
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>   


int main()
{
    char c;   

    setlocale(LC_ALL, "RUS");   

    printf("Введите символ: ");
    scanf("%c", &c);   

    switch (c)
    {
        
    case '0':
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("Это цифра\n");
        break;

        
    default:
        if ((c >= 'a' && c <= 'z') ||      // латинские строчные //
            (c >= 'A' && c <= 'Z'))        // латинские прописные //
        {
            printf("Это буква\n");
        }
        else
        {
            printf("Неизвестный символ\n");
        }
        break;
    }

    return 0;
}

int ex ()
{
    float x, y;
    char c;

    setlocale(LC_ALL, "Russian");

    printf("Введите выражение (например 2+3): ");
    scanf("%f%c%f", &x, &c, &y);

    switch (c)
    {
    case '+': printf("=%f", x + y); break;
    case '-': printf("=%f", x - y); break;
    case '*': printf("=%f", x * y); break;
    case '/': printf("=%f", x / y); break;
    default:  printf("Неизвестная операция\n"); break;
    }

    return 0;
}

int ex2()
{
    char c;

    setlocale(LC_ALL, "RUS");

    printf("Введите знак операции: ");
    scanf("%c", &c);

    switch (c)
    {
    case '+': printf("сложение\n");      break;
    case '-': printf("вычитание\n");     break;
    case '*': printf("умножение\n");     break;
    case '/': printf("деление\n");       break;
    default:  printf("неизвестный знак\n"); break;
    }

    return 0;
}
//дз

int ex3()
{
    char c;   

    setlocale(LC_ALL, "Russian");

    printf("Введите знак операции: ");
    scanf(" %c", &c);

    switch (c)
    {
    case '+': printf("сложение\n");         break;
    case '-': printf("вычитание\n");        break;
    case '*': printf("умножение\n");        break;
    case '/': printf("деление\n");          break;
    default:  printf("неизвестный знак\n"); break;
    }

    return 0;
}
