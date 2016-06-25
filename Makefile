# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gtandeo <gtandeo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2014/12/07 10:52:01 by gtandeo           #+#    #+#              #
#    Updated: 2015/06/25 06:18:41 by gtandeo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

COLLEEN = Colleen

GRACE = Grace

SULLY = Sully

SRCCOLLEEN = Colleen.c

SRCGRACE = Grace.c

SRCSULLY = Sully.c

CFLAGS = -Wall -Wextra -Werror

all: $(COLLEEN) $(GRACE) $(SULLY)

$(NAME): $(SRC)
	cc $(CFLAGS) -o $(COLLEEN) $(SRCCOLLEEN)
	cc $(CFLAGS) -o $(GRACE) $(SRCGRACE)
	cc $(CFLAGS) -o $(SULLY) $(SRCSULLY)

clean:
	@rm -f Sully_5.c
	@rm -f Sully_4.c
	@rm -f Sully_3.c
	@rm -f Sully_2.c
	@rm -f Sully_1.c
	@rm -f Sully_0.c
	

fclean: clean
	@rm -f $(COLLEEN)
	@rm -f $(GRACE)
	@rm -f $(SULLY)
	@rm -f Sully_5
	@rm -f Sully_4
	@rm -f Sully_3
	@rm -f Sully_2
	@rm -f Sully_1
	@rm -f Sully_0

re: fclean all

.PHONY: fclean re
