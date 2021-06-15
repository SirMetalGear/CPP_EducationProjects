/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlorette <mlorette@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 19:45:19 by mlorette          #+#    #+#             */
/*   Updated: 2021/04/13 13:47:35 by mlorette         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

static int	validation(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (argv[2][0] == 0 || argv[3][0] == 0)
		return (1);
	return (0);
}

static int	rewrite(char **argv, std::ifstream	&ifd, std::ofstream	&ofd)
{
	std::string		line;
	std::string 	s1 = argv[2];
	std::string 	s2 = argv[3];
	std::string		str;
	size_t			pos;
	size_t			s1_size = s1.length();

	while (std::getline(ifd, line) != 0)
	{
		pos = 0;
		while ((pos = line.find(s1, pos))!= std::string::npos)
		{
			line.replace(pos, s1_size, s2);
			pos += s2.length();
		}
		ofd << line << std::endl;
	}
	return (0);
}

static int	swap(char **argv)
{
	std::ifstream	ifd;
	std::ofstream	ofd;
	std::string		name = argv[1];

	ifd.open(argv[1]);
	if (ifd == 0)
	{
		std::cout << "File error\n";
		return (1);
	}
	ofd.open(name + ".replace");
	if (ofd == 0)
	{
		ifd.close();
		std::cout << "Failed to create output file\n";
		return (1);
	}
	rewrite(argv, ifd, ofd);
	ifd.close();
	ofd.close();
	return (0);
}

int			main(int argc, char **argv)
{
	if (validation(argc, argv) == 1)
	{
		std::cout << "Arguments error\n";
		return (1);
	}
	if ((swap(argv)) == 1)
		return (1);
	return (0);
}
