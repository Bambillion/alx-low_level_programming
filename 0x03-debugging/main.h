#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

/**
  * positive_or_negative - this function tests if a number
  * is positive or negative or zero
  *
  * @i: is the integer to be tested
  */

void positive_or_negative(int i);

/**
  * largest_number - this function returns the largest value
  * of three integers
  * @a: The first integer
  * @b:The second integer to be compared
  * @c:The third integer to be compared
  */

int largest_number(int a, int b, int c);

/**
  * print_remaining_days - this function prints how many days are
  * left in the year
  * @month: month in number format
  * @day: day of the month
  * @year: year
  * Return: void
  */

void print_remaining_days(int month, int day, int year);

/**
  * -converts day of month to day of year without 
  * accounting for leap year
  * @month: month in number 
  * @day: day of month
  * Return: day of year
  */

int convert_day(int month, int day);

#endif /* MAIN_H */
