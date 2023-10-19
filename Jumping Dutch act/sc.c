#include <unistd.h>
char* sc(int n)
{
    int i;

    i = n;
    if (n >= 2 && n <= 6)
    {
        while (i <= n && i >= 2)
        {
            if (i == 2)
                write(1, "Aa~ Pa! Aa!", 11);
            else 
                write(1, "Aa~ ", 4);
            i--;
        }
    }
    else if (n >= 2 && n > 6)
    {
        while (i <= n && i >= 1)
        {
            if (i == 1)
                write(1, "Pa!", 3);
            else 
                write(1, "Aa~ ", 4);
            i--;
        }
    }
    write(1, "", 1);
}

int main()
{
    sc(10);
    return (0);
}