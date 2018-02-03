# C++ implementations of t and chi-squared cdfs

 * Using the R code code.
 * Compared to Boost implementation

At the moment there is only a basic runtime check, but it seems computing the log of the p-value for the t-distribution cdf is an order of magnitude faster than the Boost computation of the 'raw' p-value.

 ```  
 t: boost duration: 6.3e-05
 t: cdf_base duration: 4.6e-05
 t: cdf_base duration log: 7e-06
 chisq: boost duration: 9e-06
 chisq: cdf_base duration: 1.9e-05
 chisq: cdf_base duration log: 6e-06
 ```  

Please see `min_example.cpp` for usage of the `cdf_base.h` functions.

Make the `.sh` files executable in order to run the example, tests, etc.


