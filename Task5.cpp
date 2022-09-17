#include <iostream>
#include <cmath>
#include <algorithm>
#include <ppl.h>
#include <vector>
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
	std::vector<double> yNonParallelVector, yParallelVector;

	double nonParallelStart = clock();
	for (int i = 0; i < 1000; ++i) yNonParallelVector.push_back(nonParallelFunc(100 * cos(i)));
	double nonParallelEnd = clock();
	std::cout << "nonParallel: " << (nonParallelEnd - nonParallelStart) / CLOCKS_PER_SEC << std::endl;

	concurrency::task_group tgr;
	double parallelStart = clock();
	for (int i = 0; i < 1000; ++i) tgr.run([&yParallelVector, i]() { yParallelVector.push_back(nonParallelFunc(100 * cos(i))); });
	tgr.wait();
	double parallelEnd = clock();
	std::cout << "parallel: " << (parallelEnd - parallelStart) / CLOCKS_PER_SEC << std::endl;
}
*/