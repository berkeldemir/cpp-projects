/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/Main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-06 21:02
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-06 21:02
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./PhoneBook.hpp"

int main(void)
{
	std::string		input;
	PhoneBook		book;

    std::cout << "+ --------------------------------------- +" << std::endl;
    std::cout << "|         Welcome to beldemir's           |" << std::endl;
    std::cout << "| _____ _               _____         _   |" << std::endl;
    std::cout << "||  _  | |_ ___ ___ ___| __  |___ ___| |_ |" << std::endl;
    std::cout << "||   __|   | . |   | -_| __ -| . | . | '_||" << std::endl;
    std::cout << "||__|  |_|_|___|_|_|___|_____|___|___|_,_||" << std::endl;
    std::cout << "|    Valid Commands: ADD, SEARCH, EXIT    |" << std::endl;
    std::cout << "+ --------------------------------------- +" << std::endl;

                                         
  	while (1)
	{
		getline(std::cin, input);
		if (input == "ADD")
			book.add();
		else if (input == "SEARCH")
			book.search();
		else if (input == "EXIT")
			break;
		else if (!input[0])
			continue;
        else
            std::cout << "Please enter a valid command!" << std::endl;
		std::cout << std::endl;
	}
    return (0);
}
