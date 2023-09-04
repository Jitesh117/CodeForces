1. my first guess is there is no need to actually create the array, there should be a formula
   for guessing the number.
4
1 5
4 3
8 8
8 17
2. this is the sample input
3. the result should be <= k that's for sure
4. maybe start with one and check if i * n % k == 0 or not. if it is then i otherwise i + i * n % k
5. or check if i * n >= 0 or not in the loop. if it is then print it

6. now after looking at the tutorial, the smallest multiple of k such that cf * k >= n