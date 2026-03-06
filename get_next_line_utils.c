size_t	ft_strlen(const char	*str)
{
	size_t	len;
	
	len = 0;
	if (!str)
		return (0);
	while (str[len])
		len++;
	return(len);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*re;

	if (!s1)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	re = (char *)malloc(s1_len + s2_len + 1);
	if (!re)
		return (NULL);
	ft_memcpy(re, s1, s1_len);
	ft_memcpy(re + s1_len, s2, s2_len);
	re[s1_len + s2_len] = '\0';
	return (re);
}
