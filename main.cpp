int main ()
{
fibonaccirec();
}


int fibonacci(int n)
{
  if(n<2)
    return n;
for(i=1;i<n;++i)
  {
    c=a+b;
    a=b;
    b=c;
  }
  return c;
}

signed int fibonaccirec(int n)
{
  if(n<2){
  return n;
  }
return fibonacci(n-2)+fibonacci(n-1);
}
