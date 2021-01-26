# Prime Unit Digit Distribution
A program to calculate the unit digit distribution of prime number up to a given limit

# Compilation and Usage
1. Clone the repository
    `$ git clone https://github.com/tanveerraza789/PrimeUnitDistribution.git`
2. Open the cloned directory
    `$ cd PrimeunitDistribution`
3. Change LIMIT according to usage
4. Compile using GCC
    `$ g++ -g main.cpp -o main`
5. Run
    `$ ./main`



# Algorithm

In this program, the **Sieve of Eratosthenes** algorithm is used to find all prime number between 0 and LIMIT which runs in *O(n)* space complexity and  *O(n log log n)* time complexity (provided the array update is an *O*(1) operation, as is usually the case).

# Results

```
imit = 9999999
Digit  : Digit Count : Percentage
-------------------------------
0      : 0           :    0.00%
1      : 166104      :   24.99%
2      : 1           :    0.00%
3      : 166230      :   25.01%
4      : 0           :    0.00%
5      : 1           :    0.00%
6      : 0           :    0.00%
7      : 166211      :   25.01%
8      : 0           :    0.00%
9      : 166032      :   24.98%
Time taken : 1.55s  
```

![Pie chart representing data](/meta-chart.png)


# Conclusion

From the distribution table it is clear that mostly all the prime number have either 1,3,7, and 9 as unit digit

If the LIMIT tends to infinity, each distribution will tends to become 25%
