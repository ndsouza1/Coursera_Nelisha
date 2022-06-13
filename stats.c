/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file<stats.c> 
 * @brief <Various function to compute mean, median, max, mean, and arrange array in descending order>
 *
 * <Calls functions to display statistics of an array including the mean, max 
 *         max, median; to display sorted array in descending order >
 
 * @author <Nelisha DSouza>
 * @date <20th APril 2022>
 *
 */



#include <stdio.h>
#include<string.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

 unsigned char * sort_array(unsigned char *t, int l)
 {
    //int sr[l];
    unsigned char temp;
    for (int i = 0; i < l; i++) {     
      for (int j = i+1; j < l; j++) 
        {     
          if(t[i] < t[j]) 
          {    
              temp = t[i];    
              t[i] = t[j];    
              t[j] = temp;    
          }     
        }     
      }  
    printf("Displaying sorted array in descending order: \n");
    for(int i = 0; i < l; i++)
    {
      printf("t[%d] = %d\n", i+1, t[i]);
    }    	
  }

 unsigned char find_median(unsigned char *t, int l)
 {
	  unsigned char median=0; 
     
    if(l%2 == 0) 
        median = (t[(l-1)/2] + t[l/2])/2.0; 
    
    else 
        median = t[l/2]; 
     
    return median; 
 }

  unsigned char find_minimum(unsigned char *t, int l)
 {
 	int min;
	 for (int i =0; i < l; i++)
	 {
		 if (t[0] > t[i])
		 {
			 t[0] = t[i];
		 }
	 }
	 min = t[0];
	 return min;
 }

 unsigned char find_maximum(unsigned char *t, int l)
 {
 	int max;
	 for (int i =0; i < l; i++)
	 {
		 if (t[0] < t[i])
		 {
			 t[0] = t[i];
		 }
	 }
	 max = t[0];
	 return max;
 }

 double find_mean(unsigned char *t, int l)
 {
	 double sum = 0.0;
	 double mean = 0.0;

	 for (int i =0; i < l; i++)
	 {
		 sum = sum + t[i];
	 }
	 mean = sum/l;

	 return mean;
 }

  void print_statistics(unsigned char *test, int l)
 {
	 printf("\nThe calculated mean is : %f", find_mean(test, l));
	 printf("\nThe maximum of the array is : %d", find_maximum(test, l));
	 printf("\nThe minimum of the array is : %d", find_minimum(test, l));
	 printf("\nThe median of the array is : %d", find_median(test, l));
 }

 void print_array(unsigned char *test, int l)
 {
    printf("\n");
    printf("Displaying elements of the array: \n");
    for(int i = 0; i < l; i++)
    {
      printf("test[%d] = %d\n", i+1, test[i]);
    }       
 }

void main() 
{

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  /* Statistics and Printing Functions Go Here */

 double mean = 0.0;
 unsigned char median = 0.0;
  unsigned int max = 0;
  unsigned int min = 0;
  unsigned int l = SIZE;

  unsigned char sorted_array[SIZE] = { 0 };
  int test_t[SIZE] = {0};


  print_array(test, l);


	sort_array(test, l);


  print_statistics(test, l);


}
