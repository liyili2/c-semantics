void exit(int status);
void abort(void);
void sub3 (i)
     const int *i;
{
}

void eq (a, b)
{
  static int i = 0;
  if (a != i)
    abort ();
  i++;
}

int main ()
{
  int i;

  for (i = 0; i < 4; i++)
    {
      const int j = i;
      int k;
      sub3 (&j);
      k = j;
      eq (k, k);
    }
  exit (0);
}
