#include "main.h"

/**
 *set_string - sets the value of a pointer to a char
 *@s: pointer to a string
 *@to: a string
 */
void set_string(char **s, char *to)
{
	s[0] = to;
}
