

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else
	{
		if (n < 0)
		{
			n *= -1;
			ft_putchar_fd('-', fd);
		}
		if (n <= 9)
			ft_putchar_fd(n + '0', fd);
		if (n > 9)
		{
			ft_putnbr_fd(((n / 10)), fd);
			ft_putnbr_fd(((n % 10)), fd);
		}
	}
}

/* int main() {
    int fileDescriptor = 1; 
    int myNumber = -2147483648;

    ft_putnbr_fd(myNumber, fileDescriptor);

    return 0;
} */