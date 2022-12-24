#!/bin/bash

# A python program for a sorting algorithm (bogosort) 

import random as randomNums

def sorted (lst):
	# Returns True if the list is already sorted, False otherwise
	for i in range(len(lst) - 1):
		if lst[i] > lst[i + 1]:
			return False
	return True
		
def bogosort(lst):
	# Shuffles the list until it is sorted
	while not sorted(lst):
		randomNums.shuffle(lst)
	return lst
			
# Test the bogosort function
print(bogosort([12, 1, 10])) 
print(bogosort([10, 11, 12]))
