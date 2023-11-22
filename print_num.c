#include "main.h"

/**
 * print_num - print integer and decimal
 *
 * @args: arguments
 * Return: sucess
 */

int print_num(va_list args)
{
	int decimal = 1;  /* Utilisé pour obtenir le placement décimal */
	int cmp = 0;      /* Compteur du nombre de caractères imprimés */
	long int num = va_arg(args, int);  /* Récupère l'argument entier */
	long int digit;   /* Variable temporaire pour manipuler le nombre */

	if (num < 0)
	{
		cmp += _putchar('-');  /* Imprime le signe '-' pour les nombres négatifs */
		num *= -1;  /* Transforme le nombre en positif pour la suite */
	}

	if (num < 0)
	{
		cmp += _putchar('-');  /* Imprime le signe '-' pour les nombres négatifs */
		num *= -1;  /* Transforme le nombre en positif pour la suite */
	}

	if (num < 10)
		return (cmp += _putchar(num + '0'));
	digit = num;
	while (digit > 9)
	{
		decimal *= 10;
		digit /= 10;
	}

	while (decimal >= 1)
	{
		cmp += _putchar(((num / decimal) % 10) + '0');
		decimal /= 10;
	}

	return (cmp);  /* Retourne le nombre total de caractères imprimés */
}
