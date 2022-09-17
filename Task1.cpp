#include <iostream>
#include <cmath>
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

double parallelFunc(int x)
{
	long double res = 0;

	concurrency::parallel_for(1, std::max(20, 20 * abs(x)) + 1, [x, &res](int k) 
		{
			concurrency::parallel_for(1, std::max(20, 20 * abs(x)) + 1, [x, k, &res](int j)
				{
					res += (x * x * (k * k + j * j) * cos((k - j) * x)) / (x * x + k * k * k * k + j * j * j * j);
				});
		});

	return res;
}
*/
//int main()
//{
	/* 1.1
	double nonParallelTimeStart = clock();

	for (int i = 1; i <= 2000; ++i) 
	{
		std::cout << i << ":" << nonParallelFunc(100 * cos(i)) << std::endl;
	}

	double nonParallelTimeEnd = clock();
	std::cout << "nonParallelTime: " << (nonParallelTimeEnd - nonParallelTimeStart) / CLOCKS_PER_SEC << std::endl;

	double parallelTimeStart = clock();

	for (int i = 1; i <= 2000; ++i)
	{
		std::cout << i << ":" << parallelFunc(100 * cos(i)) << std::endl;
	}

	double parallelTimeEnd = clock();
	std::cout << "parallelTime: " << (parallelTimeEnd - parallelTimeStart) / CLOCKS_PER_SEC << std::endl;
	*/
	/* 1.2
	std::list<double> nonParallelList, parallelList;
	std::vector<double> nonParallelVector, parallelVector;
	std::deque<double> nonParallelDeque, parallelDeque;

	for (int i = 1; i <= 2000; ++i)
	{
		nonParallelList.push_back(100 * cos(i));
		parallelList.push_back(100 * cos(i));
		nonParallelVector.push_back(100 * cos(i));
		parallelVector.push_back(100 * cos(i));
		nonParallelDeque.push_back(100 * cos(i));
		parallelDeque.push_back(100 * cos(i));
	}

	double nonParallelListStart = clock();
	std::for_each(nonParallelList.begin(), nonParallelList.end(), [](double &x) { x = nonParallelFunc(x); });
	double nonParallelListEnd = clock();
	std::cout << "nonParallelList: " << (nonParallelListEnd - nonParallelListStart) / CLOCKS_PER_SEC << std::endl;

	double nonParallelVectorStart = clock();
	std::for_each(nonParallelVector.begin(), nonParallelVector.end(), [](double &x) {x = nonParallelFunc(x); });
	double nonParallelVectorEnd = clock();
	std::cout << "nonParallelVector: " << (nonParallelVectorEnd - nonParallelVectorStart) / CLOCKS_PER_SEC << std::endl;

	double nonParallelDequeStart = clock();
	std::for_each(nonParallelDeque.begin(), nonParallelDeque.end(), [](double &x) {x = nonParallelFunc(x); });
	double nonParallelDequeEnd = clock();
	std::cout << "nonParalleDeque: " << (nonParallelDequeEnd - nonParallelDequeStart) / CLOCKS_PER_SEC << std::endl;
	*/
	/***************************************************************************************************************/
	/*
	double parallelListStart = clock();
	concurrency::parallel_for_each(parallelList.begin(), parallelList.end(), [](double& x) { x = nonParallelFunc(x); });
	double parallelListEnd = clock();
	std::cout << "parallelList: " << (parallelListEnd - parallelListStart) / CLOCKS_PER_SEC << std::endl;

	double parallelVectorStart = clock();
	concurrency::parallel_for_each(parallelVector.begin(), parallelVector.end(), [](double& x) {x = nonParallelFunc(x); });
	double parallelVectorEnd = clock();
	std::cout << "parallelVector: " << (parallelVectorEnd - parallelVectorStart) / CLOCKS_PER_SEC << std::endl;

	double parallelDequeStart = clock();
	concurrency::parallel_for_each(parallelDeque.begin(), parallelDeque.end(), [](double& x) {x = nonParallelFunc(x); });
	double parallelDequeEnd = clock();
	std::cout << "paralleDeque: " << (parallelDequeEnd - parallelDequeStart) / CLOCKS_PER_SEC << std::endl;
	*/
//}
