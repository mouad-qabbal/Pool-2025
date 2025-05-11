/* Create a function that returns the square root of a number (if it exists),
   or 0 if the square root is an irrational number. */

int ft_sqrt(int nb)
{
    int a;

    if (nb < 2)
        return (nb);

    a = 2;
    while (a <= 46340 && a * a <= nb)
    {
        if (a * a == nb)
            return (a);
        a++;
    }
    return (0);
}

// Max value is 2,147,483,647 (INT_MAX).
// If you go past 46340 ------> 46341 * 46341 = 2,147,488,281 ❌ → This overflows int.

/*
🔐 a <= 46340
Prevents overflow when computing a * a.

✅ a * a <= nb
Ensures you only loop as long as the square of a is still less than or equal to nb.

🎯 if (a * a == nb)
Accurately detects when you've found a perfect square root.

🧠 if (nb < 2) return (nb);
Correctly handles edge cases: 0 and 1.
*/

