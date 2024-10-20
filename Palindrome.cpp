#include <iostream>
#include <string>

#define String std::string

int main()
{
	std::cout << "Entrez une chaine de caract" << char(138) << "re pour s'il s'agit d'un palindrome : ";
	String input = "defaut";
	std::cin >> input;
	//Convertion en tableau de char*
	const char* a = input.c_str();
	char* b = new char[input.length() + 1];

	for (int i = 0; i < input.length(); i++)
	{
		b[i] = a[(input.length() - 1) - i];
	}

	for (int i = 0; i < input.length(); i++)
	{
		std::cout << b[i];
	}

	std::cout << std::endl;

	if (input._Equal(b))
	{
		std::cout << "La cha" << char(140) << "ne est un palindrome" << std::endl;
	}
	else
	{
		std::cout << "La cha" << char(140) << "ne n'est pas un palindrome" << std::endl;
	}

	delete[] b; //Lib�ration de la m�moire
	return 0;
}