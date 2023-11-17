#include <stdlib.h>

int		ft_strlen(const char *s)
{
	int		i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		n;
	char	*str;

	i = ft_strlen(s) + 1;
	n = 0;
	if (!(malloc((sizeof str) * i + 1)))
		return (0);
	str = malloc((sizeof str) * i + 1);
	while (s[n])
	{
		str[n] = s[n];
		++n;
	}
	str[n] = '\0';
	return (str);
}

#include <stdio.h>
int main()
{
  char *src = "ahahah";
  char *ptr = ft_strdup(src);
  printf("%s\n", ptr);
}
