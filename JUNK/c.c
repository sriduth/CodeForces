#include <stdio.h>
#include <float.h>
static void force_fpf() /* A dummy function */
{
    float x, *y; /* Just declares two variables */
    y = &x;      /* Forces linkage of FP formats */
    x = *y;      /* Suppress warning message about x */
}


int main()
{
    force_fpf();
    struct emp
    {
        char name[25];
        int age;
        float sal;
    };
    struct emp e[2];
    int i=0;
    for(i=0; i<2; i++){
        scanf("%s %d %f", e[i].name, &e[i].age, &e[i].sal);
        printf("%s %d %d\n",e[i].name, e[i].age, e[i].sal);
    }

    // Floating point linkage error
    for(i=0; i<2; i++)
        scanf("%s %d %f", e[i].name, e[i].age, &e[i].sal);
    return 0;
}

