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
 * @file stats.h
 * 
 * @brief  In this module have functions definition
 *
 *  <Add Extended Description Here>
 *
 * @author Mohamed Elesaily
 * @date 30/7/2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief  Print function 
 *
 * It take one paramter and print it
 * 
 * @param parm it can be median, mean or any thing but must be integer   
 *
 * @return doesn't return any thing
 */
void print_statistics(int parm);



/**
 * @brief Function that take array, his size and print array elements
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * @return doesn't return any thing
 */
void print_array(unsigned char * ptr, int size);

/**
 * @brief Function return median
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * @return median
 */
int find_median(unsigned char *ptr, int index);





/**
 * @brief Function return mean
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * @return mean
 */
int find_mean(unsigned char *ptr, int size);



/**
 * @brief Function return maximum
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * array must be sorted by sort_array function
 * 
 * @return maximum
 */
int find_maximum(unsigned char *ptr, int size);



/**
 * @brief Function return minimum
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * array must be sorted by sort_array function
 * 
 * @return minimum
 */
int find_minimum(unsigned char *ptr, int size);
/**
 * @brief Function that sort array
 * 
 * @param ptr It pointer that points to first element address  
 * @param size Integer value contains array size
 * 
 * @return doesn't return any thing
 */


void sort_array(unsigned char *ptr, int size);
#endif /* __STATS_H__ */
