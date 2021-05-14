/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libunit.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nohtou <nohtou@student.42.tokyo.jp>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/08 18:16:52 by nohtou            #+#    #+#             */
/*   Updated: 2021/05/14 14:54:19 by nohtou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBUNIT_H
# define LIBUNIT_H

# include <time.h>

typedef struct s_unit_test
{
	const char			*test_name;
	int					(*test_func)(void);
	struct s_unit_test	*next;
}	t_unit_test;

typedef struct s_unit_tests
{
	t_unit_test		*head;
	t_unit_test		*tail;
	int				success;
	int				total;
	struct timespec	start_time;
	struct timespec	end_time;
}	t_unit_tests;

void	init_tests(t_unit_tests *list);
void	free_tests(t_unit_tests *list);

int		load_test(t_unit_tests *unit_tests, const char *test_name,
			int (*test_func)(void));
int		launch_tests(t_unit_tests *unit_tests);

#endif
