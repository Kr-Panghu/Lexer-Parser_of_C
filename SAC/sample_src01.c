void swap(int * px, int * py)
/*@ With x y
    Require (px != py) && store_i32(px, x) && store_i32(py, y)
    Ensure  store_i32(px, y) && store_i32(py, x)
*/;

void swap(int * px, int * py) {
  int t;
  t = * px;
  * px = * py;
  * py = t;
}


int main()
{
  int a;
  int b;
  a = sizeof(int);
  b = 20;

  if (a & 1) ;
  else swap(&a,&b);
}
