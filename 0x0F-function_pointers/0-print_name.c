/**
 * print_name - Entry point
 * Description: Function that prints a name
 * @name: Name parameter
 * @f: Function pointer
 * Return: Void
*/

void print_name(char *name, void (*f)(char *))
{
f(name);
}
