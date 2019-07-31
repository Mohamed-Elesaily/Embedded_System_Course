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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main()
{

  unsigned char test[SIZE] = {34, 201, 190, 154, 8, 194, 2, 6,
                              114, 88, 45, 76, 123, 87, 25, 23,
                              200, 122, 150, 90, 92, 87, 177, 244,
                              201, 6, 12, 60, 8, 2, 5, 67,
                              7, 87, 250, 230, 99, 3, 100, 90};

  /* Other Variable Declarations Go Here */
  unsigned char ele;
  /* Statistics and Printing Functions Go Here */
 // print_array(test,SIZE);
  sort_array(test,SIZE);
  print_array(test,SIZE);
  print_statistics(find_median(test,SIZE));
  print_statistics(find_mean(test,SIZE));
  print_statistics(find_maximum(test,SIZE));
  print_statistics(find_minimum(test,SIZE));
}
/* Add other Implementation File Code Here */
void print_statistics(int parm)
{
  printf("%d", parm);
  printf("\n");
}
void print_array(unsigned char *ptr, int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d", ptr[i]);
    printf("\n");
  }
}
int find_median(unsigned char *ptr, int index)
{
  unsigned char first, second;
  if ((index % 2) == 0)
  {
    first = ptr[index/2];
    second = ptr[(index / 2) - 1];
    return (first + second) / 2;
  }
  else
  {
    first = ptr[index / 2];
    return first;
  }
}

int find_mean(unsigned char *ptr, int size)
{
  int avrage = 0;
  for (int i = 0; i < size; i++)
  {
    avrage = avrage + *ptr;
    ptr++;
  }
  avrage = avrage / size;
  return avrage;
}
int find_maximum(unsigned char *ptr, int size){
  return ptr[0];
}
int find_minimum(unsigned char *ptr, int size){
    return ptr[size-1];
}

void sort_array(unsigned char *ptr, int size)
{ int swap;
  for(int i=0;i<size;i++){
    for(int j=i;j<size;j++){
      if(ptr[i]<=ptr[j]){
        swap=ptr[i];
        ptr[i]=ptr[j];
        ptr[j]=swap;
      }
    }
  }
}
