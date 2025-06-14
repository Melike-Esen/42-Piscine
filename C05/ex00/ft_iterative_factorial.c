/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meesen <meesen@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 14:34:17 by meesen            #+#    #+#             */
/*   Updated: 2025/03/13 10:27:37 by meesen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	r;

	r = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		r = r * nb;
		nb--;
	}
	return (r);
}

/*#include <stdio.h>
int main (void)
{
	int n1 = 5;
	printf("Faktöriyel(%d) = %d\n", n1, ft_iterative_factorial(n1));  
}*/
