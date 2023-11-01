void between(int a, int b, int *integers)
{
    int     i;

    i = 0;
    while (a <= b)
    {
        integers[i] = a;
        a++;
        i++;
    }
}

int main()
{
    int a = 3;       // Replace with your desired values
    int b = 8;       // Replace with your desired values
    int result[100]; // Assuming a maximum of 100 integers

    between(a, b, result);

    printf("Integers between %d and %d are: ", a, b);

    for (int i = 0; i < (b - a + 1); i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}