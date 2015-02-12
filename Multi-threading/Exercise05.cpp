//
//  Exercise05.cpp
//  Multi-threading
//
//  Created by Manuel Giffels on 11.02.15.
//  Copyright (c) 2015 Manuel Giffels. All rights reserved.
//

#include <cmath>
#include <future>
#include <iomanip>
#include <iostream>
#include <random>

long double pi(const long long N)
{
    std::cout << "Start pi!" << std::endl;
    std::default_random_engine generator;
    std::uniform_real_distribution<double> distribution(0, 1.0);
    long long hits = 0;
    
    for (long long i = 0; i < N; ++i)
    {
        double x = distribution(generator);
        double y = distribution(generator);
        if (std::sqrt(x*x + y*y) <= 1)
            ++hits;
    }

    return 4 * static_cast<long double>(hits) / N;
}

int main(int argc, char* argv[]) {
    const long long N = 1e7;
    
    std::future<long double> async_pi = std::async(pi, N);
    std::cout << "std::async has been started!" << std::endl;

    long double nonasync_pi = pi(N);
    std::cout << "Non-async pi is done!" << std::endl;
    
    std::cout << std::fixed
    << "\t" << std::setprecision(10)
    << async_pi.get() << "\t" << nonasync_pi
    << "\t" << "3.141592653589793" << std::endl;
    return 0;
}
