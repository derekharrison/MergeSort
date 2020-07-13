/*
 * main.cpp
 *
 *  Created on: Apr 13, 2019
 *      Author: d-w-h
 *
 *      Implementation of merge_sort algorithm
 */

#include <iostream>
#include <cstdlib>
#include "../inc/merge_sort.hpp"

int main(int argc, char* argv[]) {

	int A[] = {160, 170, 17, 17, 1, 1, 15, 140, 220, 220, 1, 7, 3, 4, 5, 6,
	           0, 2, 0, 2, 2, 3, 5, 8, 9, 0,
	           1800, 0, 0, 0, 1700, 11, 16, 13};

	int size_a = sizeof(A)/sizeof(int);

	mergesort(A, size_a);

	for(int n = 0; n < size_a; ++n) {
		std::cout << A[n] << std::endl;
	}

	std::cout << "size array: " << size_a << std::endl;

	return 0;
}
