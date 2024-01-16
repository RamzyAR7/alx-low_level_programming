int rand(void)
{
	static int count = -1;
	int results[] = {8, 8, 7, 9, 23, 74};

	count++;
	if (count < sizeof(results) / sizeof(int))
		return (results[count]);
	else
		return (2147483647 * count++ % 2147483647);
}
