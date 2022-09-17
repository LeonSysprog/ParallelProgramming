#include <iostream>
#include <cmath>
#include <algorithm>
#include <ppl.h>
#include <vector>
/*
int main() 
{
	std::vector<double> sortVector, parallelSortVector, parallelBufferedSortVector;
	for (int i = 0; i < 50000000; ++i)
	{
		sortVector.push_back(cos(i * i / (1 + i)));
		parallelSortVector.push_back(cos(i * i / (1 + i)));
		parallelBufferedSortVector.push_back(cos(i * i / (1 + i)));
	}

	double sortStart = clock();
	std::sort(sortVector.begin(), sortVector.end());
	double sortEnd = clock();
	std::cout << "sort: " << (sortEnd - sortStart) / CLOCKS_PER_SEC << std::endl;

	double parallelSortStart = clock();
	concurrency::parallel_sort(parallelSortVector.begin(), parallelSortVector.end());
	double parallelSortEnd = clock();
	std::cout << "parallel_sort: " << (parallelSortEnd - parallelSortStart) / CLOCKS_PER_SEC << std::endl;

	double parallelBufferedSortStart = clock();
	concurrency::parallel_buffered_sort(parallelBufferedSortVector.begin(), parallelBufferedSortVector.end());
	double parallelBufferedSortEnd = clock();
	std::cout << "parallel_buffered_sort: " << (parallelBufferedSortEnd - parallelBufferedSortStart) / CLOCKS_PER_SEC << std::endl;
}
*/