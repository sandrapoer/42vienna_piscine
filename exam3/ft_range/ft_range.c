#include <stdlib.h>

int *ft_range(int start, int end)
{
	int *numbers;
	int i = 0;

	if(start == end)
	{
		numbers = malloc(sizeof(int));
		numbers[i] = start;
	}
	if (start > end)
	{
		numbers = malloc(((start - end) + 1) * sizeof(int));
		while(start >= end)
		{
			numbers[i] = start;
			i++;
			start--;
		}
	}
	else if (start < end)
	{
		numbers = malloc(((end - start) + 1) * sizeof(int));
		while(start <= end)
		{
			numbers[i] = start;
			i++;
			start++;
		}
	}
	if (numbers == NULL)
		return (NULL);	
	return(numbers);
}

#include <stdio.h>
int main(int argc, char **argv)
{
	int *dup = ft_range((atoi(argv[1])), (atoi(argv[2])));
	int i= 0;
	while(i < (abs((atoi(argv[2])) - (atoi(argv[1])))+1))
	{
		printf("%d\n", dup[i]);
		i++;
	}
	free(dup);
	dup = NULL;
	return(0);
}