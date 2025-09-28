/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex04/test.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 18:18
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 18:18
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./replacer.hpp"

void	test1(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "test1";

	testFile.open(fileName.c_str());
	if (!testFile)
	{
		throwError("Error encountered while testing the 1st.");
		return ;
	}
	testFile << "tus labios son mi vicio" << std::endl;
	testFile << "por un beso tuyo todo lo arriesgo" << std::endl;
	testFile << "y tu corazón palpita con el mío" << std::endl;
	testFile << "es el tempo perfecto" << std::endl;
	testFile << "beso a beso me dí cuenta que" << std::endl;
	testFile << "te necesito hoy igual que ayer" << std::endl;
	testFile << "así como eres yo quiero tenerte" << std::endl;

	funct(fileName, "beso", "fantasma");
	testFile.close();
}

void	test2(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "test2";

	testFile.open(fileName.c_str());
	if (!testFile)
	{
		throwError("Error encountered while testing the 2nd.");
		return ;
	}

	funct(fileName, "abc", "def");
	testFile.close();
}

void	test3(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "somerandomfilename";

	funct(fileName, "abc", "def");
	testFile.close();
}

void	test4(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "test4";

	testFile.open(fileName.c_str());
	if (!testFile)
	{
		throwError("Error encountered while testing the 4th.");
		return ;
	}
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "don't leave me hanging on like a yo-yo" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "i don't wanna miss it when you hit that high" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "'cause i'm not planning on going solo";

	funct(fileName, "", "");
	testFile.close();
}

void	test5(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "test5";

	testFile.open(fileName.c_str());
	if (!testFile)
	{
		throwError("Error encountered while testing the 4th.");
		return ;
	}
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "don't leave me hanging on like a yo-yo" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "i don't wanna miss it when you hit that high" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "'cause i'm not planning on going solo";

	funct(fileName, "a", "");
	testFile.close();
}

void	test6(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "test6";

	testFile.open(fileName.c_str());
	if (!testFile)
	{
		throwError("Error encountered while testing the 4th.");
		return ;
	}
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "don't leave me hanging on like a yo-yo" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "i don't wanna miss it when you hit that high" << std::endl;
	testFile << "wake me up before you go-go" << std::endl;
	testFile << "'cause i'm not planning on going solo" << std::endl;
	funct(fileName, "", "a");
	testFile.close();
}

void	test7(int (*funct)(std::string, std::string, std::string))
{
	std::ofstream	testFile;
	std::string		fileName = "custom.txt";

	funct(fileName, "a", "A");
	testFile.close();
}

void	testAll(int (*funct)(std::string, std::string, std::string))
{
	std::cout << "\e[1;95m1\n\e[0m";
	test1(funct);
	std::cout << "\e[1;95m2\n\e[0m";
	test2(funct);
	std::cout << "\e[1;95m3\n\e[0m";
	test3(funct);
	std::cout << "\e[1;95m4\n\e[0m";
	test4(funct);
	std::cout << "\e[1;95m5\n\e[0m";
	test5(funct);
	std::cout << "\e[1;95m6\n\e[0m";
	test6(funct);
	std::cout << "\e[1;95m7\n\e[0m";
	test7(funct);
	std::cout << "\e[1;95mAll of 7 tests are complete.\n\e[0m";
}

int main (void)
{
	int	(*funct)(std::string, std::string, std::string) = replacer;
	testAll(funct);
	/*
	std::remove("test1");
	std::remove("test1.replace");
	std::remove("test2");
	std::remove("test2.replace");
	std::remove("test3");
	std::remove("test3.replace");
	std::remove("test4");
	std::remove("test4.replace");
	std::remove("test5");
	std::remove("test5.replace");
	std::remove("test6");
	std::remove("test6.replace");
	std::remove("test7");
	std::remove("test7.replace");
	*/
}
