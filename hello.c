#include <stdio.h>
struct inf
{
    char ten[30];
    int age;
    char gt[30];
};


int main()
{
    struct inf thk=
    {
    	.age=19,
    	.ten="Kien",
    	.gt="nam"
	};

    printf("ten la %s, age la %d, gt la %s", thk.ten, thk.age, thk.gt);
    
    return 0;
}