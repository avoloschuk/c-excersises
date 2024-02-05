/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoloshchuk <avoloshchuk@fairwaydev.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:48:38 by avoloshchuk       #+#    #+#             */
/*   Updated: 2021/09/06 08:48:38 by avoloshchuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i;
    int size;

    if (min >= max)
        return (NULL);
    size = max - min;
    range = (int *)malloc(sizeof(*range) * size);
    if (!range)
        return (NULL);
    i = 0;
    while (i < size)
    {
        range[i] = min + i;
        i++;
    }
    return (range);
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}