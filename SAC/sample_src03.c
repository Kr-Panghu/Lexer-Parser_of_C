int main()
{
  int i;
  unsigned int s;
  unsigned long long n;
  for (i = 0;i < n;++i){
    //@ s >= 0
    s += a[i];
  }

  for (i = 0;i < n;++i)
    s += a[i];
  //@ s >= 0

  for (i = 0;i < n;++i){
    //@ s >= 0
    s += 1;
    //@ s >= 1
    s += 2;
    //@ s >= 2
  }

  for (i = 0;i < n;++i){
     //@ s >= 0
     //@ s >= 1
  }
  return s;
}