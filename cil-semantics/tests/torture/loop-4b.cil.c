/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

extern  __attribute__((__nothrow__, __noreturn__)) void abort(void)  __attribute__((__leaf__)) ;
extern  __attribute__((__nothrow__, __noreturn__)) void exit(int __status )  __attribute__((__leaf__)) ;
int f(void) 
{ int j ;
  long i ;

  {
  j = 1;
  i = 1610612736L;
  while (1) {
    j <<= 1;
    i += 268435456L;
    if (! (i < -1610612736L)) {
      break;
    }
  }
  return (j);
}
}
int main(void) 
{ int tmp ;

  {
  tmp = f();
  if (tmp != 2) {
    abort();
  }
  exit(0);
}
}