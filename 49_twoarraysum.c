#include<stdio.h>
main()
{
    	int arr1[30], arr2[30], sum[60];
	int i, j, k, n1, n2;
	scanf("%d", &n1);
	for (i = 0; i < n1; i++) {
		scanf("%d", &arr1[i]);
	}
	scanf("%d", &n2);
	for (i = 0; i < n2; i++) {
		scanf("%d", &arr2[i]);
	}
 
	i = 0;
	j = 0;
	k = 0;
	while (i < n1 && j < n2) {
		if (arr1[i] <= arr2[j]) {
			sum[k] = arr1[i];
			i++;
			k++;
		} 
		else 
		{
			sum[k] = arr2[j];
			k++;
			j++;
		}
	}
	while (i < n1)
	{
		sum[k] = arr1[i];
		i++;
		k++;
	}
 
	while (j < n2) {
		sum[k] = arr2[j];
		k++;
		j++;
	}
	printf("\nMerged array is :");
	for (i = 0; i < n1 + n2; i++)
		printf("%d ", sum[i]);
 
    return 0;
    
}
