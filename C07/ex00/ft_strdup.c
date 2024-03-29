/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avoloshchuk <avoloshchuk@fairwaydev.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 08:48:38 by avoloshchuk       #+#    #+#             */
/*   Updated: 2021/09/06 08:48:38 by avoloshchuk      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> // For malloc

char *ft_strdup(char *src) {
    int len = 0;
    while (src[len]) // Calculate the length of the source string
        len++;
    
    // Allocate memory for the duplicate string, including the null terminator
    char *dup = (char *)malloc((len + 1) * sizeof(char));
    if (dup == NULL) // Check if the memory allocation was successful
        return NULL;
    
    // Copy the source string into the duplicate string using a while loop
    int i = 0;
    while (i <= len) { // <= to include the null terminator
        dup[i] = src[i];
        i++;
    }
    
    return dup; // Return the duplicate string
}

#include <stdio.h>
int main(int argc, char const *argv[])
{
	char	*res;

	res = ft_strdup("Hello mac");
	printf("%s\n", res);
	return 0;
}