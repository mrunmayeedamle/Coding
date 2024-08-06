#include <stdio.h>
#include <time.h>

void TOH(int n, char rodA, char rodC, char rodB)
{
	if (n == 1)
	{
		printf("\nMove disk 1 from rod %c to rod %c",rodA ,rodC );
		return;
	}
	TOH(n-1, rodA, rodB, rodC);
	printf("\nMove disk %d from rod %c to rod %c", n, rodA, rodC);
	TOH(n-1, rodB, rodC,rodA);
}

int main()
{
    clock_t begin = clock();

	int no_of_disks ;
	printf("Enter number of disks: ");
	scanf("%d", &no_of_disks);
	TOH(no_of_disks, 'A','C','B');

	clock_t end = clock();

    double time = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("\nTime taken to execute: %f", time);
	return 0;
}
