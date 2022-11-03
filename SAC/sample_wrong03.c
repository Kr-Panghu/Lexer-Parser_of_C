int main()
{
  int i;
  unsigned int s;
  unsigned long long n;
  for (i = 0;i < n;++i)
    //@ s >= 0
    s += a[i];
  return s;
}


// This is a wrong file explaination which will not occur in the input
// Invalid assertion in loop