#include <iostream>

int main()
{
	std::string text;

	text = "Hello";
	std::cout << "napisz tekst na pocz�tku" << text<<"\n";
	std::cout << "d�ugo�� �a�cucha to: " << text.length() << "\n";
	std::cout << "czy zmienna jest pusta: " << text.empty() << "\n";
}
