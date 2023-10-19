void count_by(unsigned x, unsigned n, unsigned result[n])
{
    unsigned int i;

    i = 0;
    while (i < n)
    {
        result[i] = (x * i) + x;
        i++;
    }
}