/* Generated by CIL v. 1.3.7 */
/* print_CIL_Input is true */

struct A {
   unsigned short a : 5 ;
   unsigned short b : 5 ;
   unsigned short c : 6 ;
};
struct B {
   unsigned short a : 5 ;
   unsigned short b : 3 ;
   unsigned short c : 8 ;
};
extern void abort(void) ;
extern void exit(int  ) ;
int main(void) 
{ 

  {
  if (sizeof(struct A ) != sizeof(struct B )) {
    abort();
  }
  exit(0);
}
}