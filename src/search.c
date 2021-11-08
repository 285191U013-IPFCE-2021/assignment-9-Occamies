#include "search.h"
#include <stdbool.h>
#include <assert.h>
bool search(int a[], int n, int x)
{
    assert(n>=0);
    
    if (n==0)
        return (false);
        
    else if(n>0 & a[n-1]==x)
        return (true);

    else
        return(search(a,n-1,x));
}