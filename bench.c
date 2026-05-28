/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bench.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jait-ame <jait-ame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 08:30:21 by jait-ame          #+#    #+#             */
/*   Updated: 2026/05/28 11:04:32 by jait-ame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	strat(t_type *type, t_count *count)
{
	if (type->adaptive == 0)
	{
		if (type->type == 1)
			count->strategy = "simple";
		else if (type->type == 2)
			count->strategy = "medium";
		else if (type->type == 3)
			count->strategy = "complex";
	}
	else if (type->adaptive == 1)
		count->strategy = "adaptive";
}

void	setup(t_count *count)
{
	count->sa = 0;
	count->sb = 0;
	count->ss = 0;
	count->pa = 0;
	count->pb = 0;
	count->ra = 0;
	count->rb = 0;
	count->rr = 0;
	count->rra = 0;
	count->rrb = 0;
	count->rrr = 0;
	count->total_ops = 0;
	return ;
}

void	benchmark(t_ops **ops, char **argv, int argc, t_type *type)
{
	t_count	*count;

	count = malloc(sizeof(t_count) * 1);
	setup(count);
	ft_count(ops, count);
	count->total_ops = ft_lstsize_ops((*ops));
	count->disorder = disorder(argv, argc, type);
	strat(type, count);
	ft_printf("[bench] disorder: %lf%%\n"
		"[bench] strategy: %s\n"
		"[bench] total_ops: %d\n"
		"[bench] sa: %d  sb: %d  ss: %d  pa: %d  pb: %d\n"
		"[bench] ra: %d  rb: %d  rr: %d  rra: %d  rrb: %d  rrr: %d\n",
		count->disorder, count->strategy, count->total_ops,
		count->sa, count->sb, count->ss, count->pa, count->pb,
		count->ra, count->rb, count->rr, count->rra, count->rrb, count->rrr);
}
