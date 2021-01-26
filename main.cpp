#include <iostream>
#include <vector>
#include <numeric>
#include <ctime>
#include <iomanip>
#define LIMIT 99999

int main(int argc, char *argv[]) {
    long int num = LIMIT;
    std::vector<bool> isprime (num+1,true);
    std::vector<long> digit_count (10,0);
    std::cout << "Limit = " << num << std::endl;
    clock_t start_time = clock();
    for (long int i = 2; i <= num; ++i)
    {
        if (isprime[i]) {
            digit_count[i%10]++;
            for (size_t j = i+i; j <= num; j += i)
            {
                isprime[j] = false;
            }
        }
    }
    long int total = std::accumulate(digit_count.begin(),digit_count.end(),0);
    std::cout << std::setw(6) << std::left <<
    "Digit" << " : " << std::setw(12) << std::left <<
    "Digit Count : " << std::setw(7) << std::right << std::fixed << std::setprecision(2) <<
    "Percentage" << 
    std::endl <<
    "-------------------------------" << std::endl;
    for (int i=0; i<10; ++i)
    {
        std::cout << std::setw(6) << std::left <<
        i << " : " << std::setw(11) << std::left <<
        digit_count[i] << " : " << std::setw(7) << std::right << std::fixed << std::setprecision(2) <<
        digit_count[i]*100.0/total << "%" <<
        std::endl;
    }
    std::cout << "Time taken : " << static_cast<double>((clock() - start_time))/CLOCKS_PER_SEC << " s";
} 