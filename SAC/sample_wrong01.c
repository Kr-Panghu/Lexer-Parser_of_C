void swap(int * px, int * py)
/*@ With x y
    Require (px != py) && store_i32(px, x) && store_i32(py, y)
    Ensure  store_i32(px, y) && store_i32(py, x)
*/;

void swap(int * px, int * py) {
  int t;
  int t8;
  t = * px;
  int i;
  for (i = 1;i<=2;++i)
    * px = * py;
  * py = t 8;
}



// This is a wrong file explaination which will not occur in the input
// * py = t 8;  loss the operator between t and 8 or have extra space.
