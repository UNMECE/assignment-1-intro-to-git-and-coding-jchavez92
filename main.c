
#include <stdio.h>
#include <math.h>

int main()
{
	double sum(int arr[], int arrsize)
	{
	        double  total = 0;
	        for (int i = 0; i < arrsize; i++)
	        {
	                total += arr[i];
	        };
	        return total;
	};

	double avg(int arr[], int arrsize)
	{
	        double  total = sum(arr,arrsize);
	        total = total / arrsize;
	        return total;
	};

	double std(int arr[], int arrsize)
	{
	        double average = avg(arr,arrsize);
	        double squaredsum = 0.0;

	        for (int i = 0; i < arrsize; i++)
	        {
	                double diff = arr[i] - average;
	                squaredsum += (diff * diff);
	        };
	        double subtotal = squaredsum / arrsize;
	        double total = sqrt(subtotal);
	        return total;
	};
	
	int i;
	double A1;
	double A2;
	double A3;

	int array1[2] = {1,2};  printf("\n\n1st Array is: %i %i\n", array1[0],array1[1]); //create array1 for average
	int array2[3] = {1,3,4};  printf("2nd Array is: %i %i %i\n", array2[0],array2[1],array2[2]); //create array1 for average
	int array3[4] = {1,4,5,6};  printf("3rd Array is: %i %i %i %i\n", array3[0],array3[1],array3[2],array3[3]); //create array1 for average
	
	printf("\n\nSee Calculations Below:\n\n");
	A1 = avg(array1,2);  printf("The Average of Array1 is: %f\n",A1);
	A1 = std(array1,2);  printf("The Standard Deviation of Array1 is: %f\n",A1);
	A1 = sum(array1,2);  printf("The Sum of Array1 is: %f\n\n",A1);
	A2 = avg(array2,3);  printf("The Average of Array2 is: %f\n",A2);
	A2 = std(array2,3);  printf("The Standard Deviation of Array2 is: %f\n",A2);
	A2 = sum(array2,3);  printf("The Sum of Array2 is: %f\n\n",A2);
	A3 = avg(array3,4);  printf("The Average of Array3 is: %f\n",A3);
	A3 = std(array3,4);  printf("The Standard Deviation of Array3 is: %f\n",A3);
	A3 = sum(array3,4);  printf("The Sum of Array3 is: %f\n\n\n",A3);
};

