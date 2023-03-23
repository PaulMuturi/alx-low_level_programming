/**
  *print_name - prints a name
  *@name: name string
  *@f: pointer to a function
  *
  *Return: void
  */
void print_name(char *name, void (*f)(char *))
{
	void (*fun_ptr)(char *) = f;

	fun_ptr(name);
}
