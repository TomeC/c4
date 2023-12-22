
int add(int a, int b)
{
	if (a > 1)
	{
		printf("a=%d\n", a);
		return 1+add(a-1, b);
	}
  return a + b;
}
int main()
{
  int a;
  int b,c;

 	a=3;
 	  
 	b=2;
  c = add(a, b);
  printf("%d\n", c);
  return 0;
}
