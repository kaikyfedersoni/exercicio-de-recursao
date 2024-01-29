#include <stdio.h>



int num(int x, int y)

{

    if (x == 0)

        if (y == 1) 

        return 1;

        else return 0;

    else

        return (1 + num(x/10,0));

}



int main()

{

    int x;

    scanf("%d", &x);

    printf("%d\n", num(x, 1));

    return 0;

}

