int ft_strncmp(char *s1, char *s2, unsigned int n){
	int	i;

	i = 0;
	while (i <= n){
		if (s1[i] != s2[i])
			return (s1[i] > s2[i] ? 1 : -1);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int main(){
	printf("%d", ft_strncmp("ayoub", "ayoub", 4));
	return (0);
}
