#include <unistd.h>

int main(int ac,char **av)
{
	int i = 0;
	int b = ac - 1;
	if(ac > 1)
	{
		while(av[b][i] != '\0')
		{
			write(1, &av[b][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return 0;
}
