/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:23:45 by thlefebv          #+#    #+#             */
/*   Updated: 2023/07/30 14:23:47 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int size = 0;
    while(begin_list)
    {
        begin_list = begin_list->next;
        size++;
    }
    return(size);
}