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
 * @file <stats.h> 
 * @brief <definition of function to compute mean, median, max, mean, and arrange array in descending order >
 *
 * @description : This code analyzes the array to give aits mean, median, max, min, sort the array and display the statistics  and 
 * main() - The main entry point for your program
 * print_statistics() - A function that prints the statistics of an array including minimum, maximum, mean, and median.
 * print_array() -  Given an array of data and a length, prints the array to the screen
 * find_median() - Given an array of data and a length, returns the median value
 * find_mean() -  Given an array of data and a length, returns the mean
 * find_maximum() -  Given an array of data and a length, returns the maximum
 * find_minimum() -  Given an array of data and a length, returns the minimum
 * sort_array() - Given an array of data and a length, sorts the array from largest to smallest.  
 *
 * @author <Nelisha DSouza>
 * @date <20/04/2022>
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief <Returns mean of array>
 *
 * <Given an array of data and a length, returns the mean>
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <mean of the input array>
 */
double find_mean(unsigned char *t, int l);



/**
 * @brief <Returns max of array>
 *
 * <Given an array of data and a length, returns the maximum>
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <max of the input array>
 */
unsigned char find_maximum(unsigned char *t, int l);


/**
 * @brief <Returns min of array>
 *
 * < Given an array of data and a length, returns the minimum>
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <min of the input array>
 */
unsigned char find_minimum(unsigned char *t, int l);


/**
 * @brief <Returnn median of array>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <median of the input array>
 */
unsigned char find_median(unsigned char *t, int l);


/**
 * @brief <Returns descended array>
 *
 * <Given an array of data and a length, sorts the array from largest to smallest.>
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <descending order of input array>
 */
unsigned char * sort_array(unsigned char *t, int l);

/**
 * @brief <displays the statistics of the array>
 *
 * <A function that prints the statistics of an array including minimum,
 *  maximum, mean, and median.>
 *
 * @return <displays the statistics of the array>
 */
 void print_statistics(unsigned char *test, int l);

 /**
 * @brief <displays the input array>
 *
 *
 * @param <t> <array>
 * @param <l> <length of array>
 *
 * @return <displays the input array>
 */
 void print_array(unsigned char *test, int l);




#endif /* __STATS_H__ */
