#include "iter.hpp"

void	put_char(char c)
{ std::cout << c; }

void	put_string(char *str)
{
	while (str && *str)
		put_char(std::toupper(*str++));
    put_char('\n');
}

int	main(int ac, char **av)
{
    std::cout << "Array of char =\n";
    ::iter(av[0], strlen(av[0]), put_char);

    std::cout << "\n\nArray of std::string =\n";
    if (ac > 1)
        ::iter(av + 1, ac - 1, put_string);

    return (0);
}
