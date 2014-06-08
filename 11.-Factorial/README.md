* [Problem Description](http://www.spoj.com/problems/FCTRL/)

### Approach

I know that a number gets a zero at the end of it if the number has 10 as a factor. For instance, 10 is a factor of 50, 120, and 1234567890. So I need to find out how many times 10 is a factor in the expansion of 23!.

But since 5×2 = 10, I need to account for all the products of 5 and 2.  Looking at the factors in the above expansion, there are many more numbers that are multiples of 2 (2, 4, 6, 8, 10, 12, 14,...) than are multiples of 5 (5, 10, 15,...). That is, if I take all the numbers with 5 as a factor, I'll have way more than enough even numbers to pair with them to get factors of 10 (and another trailing zero on my factorial). So to find the number of times 10 is a factor, all I really need to worry about is how many times 5 is a factor in all of the numbers between 1 and 23.

How many multiples of 5 are between 1 and 23? There is 5, 10, 15, and 20, for four multiples of 5. Paired with 2's from the even factors, this makes for four factors of 10, so:

    23! has four trailing zeroes
    
[Math Explanation](http://www.purplemath.com/modules/factzero.htm)
