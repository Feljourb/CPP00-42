#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << static_cast<char>(std::toupper(av[i][j]));
			j++;
		}
		i++;
	}
	std::cout << std::endl;
	return (0);
}
