#include <iostream>
#include <cmath>
#include <algorithm>
#include <ppl.h>
#include <concurrent_vector.h>
#include <concurrent_queue.h>
#include <vector>
/*
#define PI 3.141592653589793116
#define h 2.0 * PI / N1
#define N1 400
#define N2 50

struct Point
{
	double x, y, f;
	Point(double _x, double _y, double _f) : x(_x), y(_y), f(_f) {}
};

double nonParallelFunc(int x, int y)
{
	double res = 0;

	for (int k = 1; k <= N2; ++k)
	{
		for (int j = 1; j <= N2; ++j)
		{
			res += (sin(k * x) * sin(j * y)) / ((1 + k * k + j * j) * sqrt(1 + k * k + j * j));
		}
	}

	return res;
}

int main()
{
	std::vector<Point> pointVector;

	double nonParallelStart = clock();

	for (int k = 0; k < N1; ++k)
	{
		for (int j = 0; j < N1; ++j)
		{
			double x = h * k;
			double y = h * j;
			double f = nonParallelFunc(x, y);
			pointVector.push_back(Point(x, y, f));
		}
	}

	double nonParallelEnd = clock();
	std::cout << "pointVector: " << (nonParallelEnd - nonParallelStart) / CLOCKS_PER_SEC << std::endl;

	concurrency::concurrent_vector<Point> pointConcurrentVector;

	double parallelStartVector = clock();

	concurrency::parallel_for(0, N1, [&pointConcurrentVector](int k)
		{
			for (int j = 0; j < N1; ++j)
			{
				double x = h * k;
				double y = h * j;
				double f = nonParallelFunc(x, y);
				pointConcurrentVector.push_back(Point(x, y, f));
			}
		});

	double parallelEndVector = clock();
	std::cout << "pointConcurrentVector: " << (parallelEndVector - parallelStartVector) / CLOCKS_PER_SEC << std::endl;

	concurrency::concurrent_queue<Point> pointConcurrentQueue;

	double parallelStartQueue = clock();

	concurrency::parallel_for(0, N1, [&pointConcurrentQueue](int k)
		{
			for (int j = 0; j < N1; ++j)
			{
				double x = h * k;
				double y = h * j;
				double f = nonParallelFunc(x, y);
				pointConcurrentQueue.push(Point(x, y, f));
			}
		});

	double parallelEndQueue = clock();
	std::cout << "pointConcurrentQueue: " << (parallelEndQueue - parallelStartQueue) / CLOCKS_PER_SEC << std::endl;
}
*/