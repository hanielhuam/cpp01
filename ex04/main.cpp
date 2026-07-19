/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmacedo- <hanielhuam@hotmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/17 20:28:26 by hmacedo-          #+#    #+#             */
/*   Updated: 2026/07/17 20:28:28 by hmacedo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

static int	validatefiles(char *fileName, std::fstream &inputFile, 
	std::ofstream &outputFile)
{
	std::string	outputString;
	inputFile.open(fileName, std::ios::in);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: can´t open input file" << std::endl;
		return (1);
	}
	outputString = fileName;
	outputString += ".replace";
	outputFile.open(outputString.c_str(), std::ios::out);
	if (!outputFile.is_open())
	{
		inputFile.close();
		std::cerr << "Error: can´t open output file" << std::endl;
		return (1);
	}
	return (0);
}

static std::string	getInputText(std::fstream &input)
{
	std::string text;
	std::string temp;

	while (getline(input, temp))
	{
		text += temp;
		if (input.eof())
			break;
		text += "\n";
	}
	return (text);
}

static std::string	replaceWords(std::string text, std::string find, std::string replace)
{
	std::size_t	pos;

	pos = text.find(find, 0);
	while (pos != std::string::npos)
	{
		text.erase(pos, find.length());
		text.insert(pos, replace);
		pos += replace.length();
		pos = text.find(find, pos);
	}
	return (text);
}

int	main(int argc, char **argv)
{
	std::string		find;
	std::string 	replace;
	std::fstream	inputFile;
	std::ofstream	outputFile;
	std::string		text;

	if (argc != 4)
	{
		std::cerr << "Error: you need 3 arguments (inputFile, find, replace)" << std::endl;
		return (1);
	}
	validatefiles(argv[1], inputFile, outputFile);
	find = argv[2];
	replace = argv[3];
	text = getInputText(inputFile);
	inputFile.close();
	text = replaceWords(text, find, replace);
	outputFile << text;
	outputFile.close();
	return (0);
}