# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fkhan <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/06/11 10:56:27 by fkhan             #+#    #+#              #
#    Updated: 2018/06/11 11:31:40 by fkhan            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/sh/bin

gcc -o get_next_line.o -c get_next_line.c
gcc -o main.o -c main.c
gcc -o test_gnl main.o get_next_line.o -I libft/includes -L libft/ -lft
