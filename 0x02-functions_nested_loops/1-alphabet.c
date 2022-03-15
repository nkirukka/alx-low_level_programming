#include <stdio.h>


void print_alphabet()
{
int i;
i = 97;
while (i < 123)
{
putchar(i);
i++;
}
putchar(10);
return;
}

int main(void)
{
print_alphabet();
return (0);
}
