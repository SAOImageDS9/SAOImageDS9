/* nd.c
 */

#include <xos.h>
#include <fitsy.h>

void *ft_alloc2d(size, xstar, ystar, xsize, ysize)
	int	 size;
	int	 xstar;
	int	 ystar;
        int      xsize;
        int      ysize;
{
	void *ptr;

    Malloc(ptr, xsize * ysize * size);
    return ft_make2d(ptr, size, xstar, ystar, xsize, ysize);
}


char **ft_make2d(ptr, size, xstar, ystar, xsize, ysize)
        char    *ptr;
	int	 size;
	int	 xstar;
	int	 ystar;
        int      xsize;
        int      ysize;
{
    char **ptr2d;
 
    if ( ptr == NULL ) 		return NULL;

    Malloc(ptr2d, ysize * sizeof(void *));

    if ( ptr2d == NULL ) 	return NULL;

    for (; ysize--;) {
        ptr2d[ysize] = ptr + xsize * ysize * size - xstar * size;
    }
    return ptr2d - ystar;
}

void ft_free2d(ptr2d, size, xstar, ystar)
	char	**ptr2d;
	int	  size;
	int	  xstar;
	int	  ystar;
{
	free(&ptr2d[ystar][xstar * size]);
	free(&ptr2d[ystar]);
}
