/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acesar-m <acesar-m@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 09:35:26 by acesar-m          #+#    #+#             */
/*   Updated: 2024/10/08 12:09:26 by acesar-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalpha(int a);

int ft_isalpha(int a)
{
    if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122))
        return (1);
    return (0);
}
