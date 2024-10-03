#include "libft.h"

char	*ft_strtrim(char const *str, char const *set)
{
	size_t	start;
	size_t	end;
	char	*dest;

	dest = 0;
	if (str && set)
	{
		start = 0;
		end = ft_strlen(str);
		while (str[start] && ft_strchr(set, str[start]))
			start++;
		while (str[end - 1] && ft_strchr(set, str[end - 1]) && end > start)
			end--;
		dest = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!dest)
			return (NULL);
		ft_strlcpy(dest, str + start, (end - start + 1));
	}
	return (dest);
}