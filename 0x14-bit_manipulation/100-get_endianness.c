/**
 * get_endianness - a function that checks if
 *                  architecture is little endian
 *                  or big endian
 *
 * Return: 1 if little endian or 0 if big endian
*/
int get_endianness(void)
{
	unsigned int n = 1;
	char *x = (char *) &n;

	return (x[0]);
}
