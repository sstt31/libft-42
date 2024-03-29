

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	ptr = (char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}

/* int main() {
    char str[20]= "hi";
	printf("Before clearing: '%s'\n", str);

    size_t size = 20;
	ft_bzero(str,  size);
    printf("Modified string: %s\n", str);

    return 0;
}  */