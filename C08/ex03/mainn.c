#include <stdio.h>
#include "ft_point.h"
void set_point(t_point *point)
{
    point->x = 13;
    point->y = 37;
}
int main(void)
{
    t_point point;
    set_point(&point);
    printf("%d\n", point.x);
    printf("%d\n", point.y);
    return (0);
}