#include <iostream>
#include <cmath>
#include <algorithm>
#include <ppl.h>
#include <vector>
#include <deque>
#include <list>

// 9
/*
double nonParallelFunc(int x)
{
	long double res = 0;

	for (int k = 1; k <= std::max(20, 20 * abs(x)); ++k)
	{
		for (int j = 1; j <= std::max(20, 20 * abs(x)); ++j)
		{
			res += (x * x * (k * k + j * j) * cos((k - j) * x)) / (x * x + k * k * k * k + j * j * j * j);
		}
	}

	return res;
}

int main() 
{
	std::list<double> xList, nonParallelList, parallelList;
	std::vector<double> xVector, nonParallelVector, parallelVector;
	std::deque<double> xDeque, nonParallelDeque, parallelDeque;

	for (int i = 1; i <= 2000; ++i)
	{
		xList.push_back(100 * cos(i));
		nonParallelList.push_back(100 * cos(i));
		xVector.push_back(100 * cos(i));
		nonParallelVector.push_back(100 * cos(i));
		xDeque.push_back(100 * cos(i));
		nonParallelDeque.push_back(100 * cos(i));
		parallelList.push_back(100 * cos(i));
		parallelVector.push_back(100 * cos(i));
		parallelDeque.push_back(100 * cos(i));
	}

	double nonParallelListStart = clock();
	std::transform(xList.begin(), xList.end(), nonParallelList.begin(), [](double x)->double { return nonParallelFunc(x); });
	double nonParallelListEnd = clock();
	std::cout << "nonParallelList: " << (nonParallelListEnd - nonParallelListStart) / CLOCKS_PER_SEC << std::endl;

	double parallelListStart = clock();
	concurrency::parallel_transform(xList.begin(), xList.end(), parallelList.begin(), [](double x)->double { return nonParallelFunc(x); });
	double parallelListEnd = clock();
	std::cout << "parallelList: " << (parallelListEnd - parallelListStart) / CLOCKS_PER_SEC << std::endl;
	
	double nonParallelVectorStart = clock();
	std::transform(xVector.begin(), xVector.end(), nonParallelVector.begin(), [](double x)->double { return nonParallelFunc(x); });
	double nonParallelVectorEnd = clock();
	std::cout << "nonParallelVector: " << (nonParallelVectorEnd - nonParallelVectorStart) / CLOCKS_PER_SEC << std::endl;

	double parallelVectorStart = clock();
	concurrency::parallel_transform(xVector.begin(), xVector.end(), parallelVector.begin(), [](double x)->double { return nonParallelFunc(x); });
	double parallelVectorEnd = clock();
	std::cout << "parallelVector: " << (parallelVectorEnd - parallelVectorStart) / CLOCKS_PER_SEC << std::endl;

	double nonParallelDequeStart = clock();
	std::transform(xDeque.begin(), xDeque.end(), nonParallelDeque.begin(), [](double x)->double { return nonParallelFunc(x); });
	double nonParallelDequeEnd = clock();
	std::cout << "nonParalleDeque: " << (nonParallelDequeEnd - nonParallelDequeStart) / CLOCKS_PER_SEC << std::endl;
	
	double parallelDequeStart = clock();
	concurrency::parallel_transform(xDeque.begin(), xDeque.end(), parallelDeque.begin(), [](double x)->double { return nonParallelFunc(x); });
	double parallelDequeEnd = clock();
	std::cout << "parallelDeque: " << (parallelDequeEnd - parallelDequeStart) / CLOCKS_PER_SEC << std::endl;

}
*/