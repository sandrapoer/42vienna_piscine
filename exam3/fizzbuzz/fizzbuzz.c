#include <unistd.h>

void putnbr(int i)
{
    char digit;

    if (i < 10)
    {
        digit = i + '0';
        write(1, &digit, 1);
    }
    else
    {
        putnbr(i / 10);
        digit = (i % 10) + '0';
        write(1, &digit, 1);
    }
}
int main(int argc, char **argv)
{
    (void)argc;
    (void)argv;
    int  nbr = 3;
    char    digit;
    write(1, "1", 1);
    write(1, "\n", 1);
    write(1, "2", 1);
    write(1, "\n", 1);
    while (nbr >= 3 && nbr <= 100)
    {
        if (!((nbr % 3 == 0) || (nbr % 5 == 0)))
        {
            putnbr(nbr);
        }
        else if ((nbr % 3 == 0) && (nbr % 5 == 0))
        {
            write(1, "Fizzbuzz", 8);
        }   
        else if (nbr % 3 == 0)
        {
            write(1, "Fizz", 4);
        }
        else if (nbr % 5 == 0)
        {
            write(1, "Buzz", 4);
        }
        write(1, "\n", 1);
        nbr++;
    }
    return (0);
}