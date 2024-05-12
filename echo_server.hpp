/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo_server.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: craimond <bomboclat@bidol.juis>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 17:43:43 by craimond          #+#    #+#             */
/*   Updated: 2024/05/12 15:17:41 by craimond         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ECHO_SERVER_HPP
# define ECHO_SERVER_HPP

# include <string>
# include <iostream>
# include <sys/socket.h>
# include <arpa/inet.h>
# include <unistd.h>
# include <cstring>
# include <cstdio>
# include <cstdlib>
# include <exception>
# include <errno.h>

using namespace std;

# define BUFFER_SIZE 1024


class WrongArgsException : public exception
{
	virtual const char* what() const throw()
	{
		return "Usage: ./echo_server <port>";
	}
};

class BindFailedException : public exception
{
	virtual const char* what() const throw()
	{
		return "Bind failed";
	}
};

class ListenFailedException : public exception
{
	virtual const char* what() const throw()
	{
		return "Listen failed";
	}
};

#endif