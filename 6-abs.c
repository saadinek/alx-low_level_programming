/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute the absolute value of
 *
 * Return: the absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
	{
		int abs_val;

		abs_val = n * -1;
		return (abs_val);
	}
	return (n);
}
