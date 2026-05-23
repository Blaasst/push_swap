/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 08:30:21 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/22 11:35:35 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	benchmark(t_ops **ops, t_count *count)
{
	ft_count(ops, count);
	count->total_ops = ft_lstsize((*ops)) - 1;
	printf("[bench] disorder: %lf%%\n"
		"[bench] strategy: %s\n"
		"[bench] total_ops: %d\n"
		"[bench] sa: %d  sb: %d  ss: %d  pa: %d  pb: %d\n"
		"[bench] ra: %d  rb: %d  rr: %d  rra: %d  rrb: %d  rrr: %d\n",
		count->disorder, count->strategy, count->total_ops,
		count->sa, count->sb, count->ss, count->pa, count->pb,
		count->ra, count->rb, count->rr, count->rra, count->rrb, count->rrr);
}
