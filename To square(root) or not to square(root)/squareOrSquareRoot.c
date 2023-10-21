int ft_sqrt(int nb)
{
    int i;
    int b;

    i = 0;
    b = 1;
    if (nb < 0)
        return (0);
    while (nb > 0)
    {
        nb = nb - b;
        i++;
        b += 2;
        if (nb == 0)
            return (i);
    }
    return (0);
}

int ft_pow(int nbr, int pow)
{
    int temp;

    temp = nbr;
    while (pow > 1)
    {
        temp = temp * nbr;
        pow--;
    }
    return (temp);
}

int *squareOrSquareRoot(int *array, int length)
{
    int i;

    i = 0;
    while (i < length)
    {
        if (ft_sqrt(array[i]) == 0)
            array[i] = ft_pow(array[i], 2);
        else
            array[i] = ft_sqrt(array[i]);
        i++;
    }
    return (array);
}