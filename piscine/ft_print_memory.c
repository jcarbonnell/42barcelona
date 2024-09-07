/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cjulien- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 10:47:30 by cjulien-          #+#    #+#             */
/*   Updated: 2024/08/13 10:48:55 by cjulien-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// Helper function to print a single character
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Helper function to print an unsigned int as hexadecimal
void    ft_putnbr_hex(unsigned int nbr)
{
    char    hex_digits[16];
    char    hex_buffer[8];
    int     i;
    int     digit;

    hex_digits[0] = '0';
    hex_digits[1] = '1';
    hex_digits[2] = '2';
    hex_digits[3] = '3';
    hex_digits[4] = '4';
    hex_digits[5] = '5';
    hex_digits[6] = '6';
    hex_digits[7] = '7';
    hex_digits[8] = '8';
    hex_digits[9] = '9';
    hex_digits[10] = 'a';
    hex_digits[11] = 'b';
    hex_digits[12] = 'c';
    hex_digits[13] = 'd';
    hex_digits[14] = 'e';
    hex_digits[15] = 'f';

    i = 0;
    if (nbr == 0)
    {
        ft_putchar('0');
        return;
    }
    while (nbr > 0)
    {
        digit = nbr % 16;
        hex_buffer[i++] = hex_digits[digit];
        nbr /= 16;
    }
    while (--i >= 0)
    {
        ft_putchar(hex_buffer[i]);
    }
}

// Main function to print memory
void    *ft_print_memory(void *addr, unsigned int size)
{
    unsigned char   *ptr;
    unsigned int    i;
    unsigned int    j;

    if (size == 0)
    {
        return (addr);
    }
    ptr = (unsigned char *)addr;
    i = 0;
    while (i < size)
    {
        ft_putnbr_hex((unsigned long)(ptr + i));
        ft_putchar(':');
        ft_putchar(' ');
        j = 0;
        while (j < 16)
        {
            if (i + j < size)
            {
                ft_putnbr_hex(ptr[i + j]);
            }
            else
            {
                ft_putchar(' ');
                ft_putchar(' ');
            }
            if (j % 2 == 1)
            {
                ft_putchar(' ');
            }
            j++;
        }
        ft_putchar(' ');
        j = 0;
        while (j < 16 && i + j < size)
        {
            if (ptr[i + j] >= 32 && ptr[i + j] <= 126)
            {
                ft_putchar(ptr[i + j]);
            }
            else
            {
                ft_putchar('.');
            }
            j++;
        }
        ft_putchar('\n');
        i += 16;
    }
    return (addr);
}
