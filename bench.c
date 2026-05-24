/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 08:30:21 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/24 10:59:13 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	benchmark(t_ops **ops, char **argv, int argc, t_type *type)
{
	t_count	*count;

	count = malloc(sizeof(t_count) * 1);
	ft_count(ops, count);
	count->total_ops = ft_lstsize((*ops)) - 1;
	count->disorder = disorder(argv, argc, type);
	ft_printf("[bench] disorder: %lf%%\n"
		"[bench] strategy: %s\n"
		"[bench] total_ops: %d\n"
		"[bench] sa: %d  sb: %d  ss: %d  pa: %d  pb: %d\n"
		"[bench] ra: %d  rb: %d  rr: %d  rra: %d  rrb: %d  rrr: %d\n",
		count->disorder, count->strategy, count->total_ops,
		count->sa, count->sb, count->ss, count->pa, count->pb,
		count->ra, count->rb, count->rr, count->rra, count->rrb, count->rrr);
}
