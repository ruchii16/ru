#include <bits/stdc++.h>
using namespace std;
int readfast()
{
  int f=0;
  char c = getchar_unlocked();
  if(c=='-')
  f=1;
  while(c<'0' || c>'9')
  c = getchar_unlocked();
  int ret = 0;
  while(c>='0' && c<='9')
  {
    ret = 10 * ret + c - 48;
    c = getchar_unlocked();
  }
  if(!f)
  return ret;
  else
  return (-ret);
}
void writefast(long long n)
{
    long long N = n, rev, count = 0,g=0;
    if(N<0)
    {
        g=1;
        N=-N;
    }
    rev = N;
    if (N == 0)
    {
        putchar_unlocked('0');
        putchar_unlocked('\n');
        return ;
    }
    while ((rev % 10) == 0)
    {
        count++;
        rev /= 10;
    }
    rev = 0;
    while (N != 0)
    {
        rev = (rev<<3) + (rev<<1) + N % 10;
        N /= 10;
    }
    if(g==1)
    putchar_unlocked('-');
    while (rev != 0)
    {
        putchar_unlocked(rev % 10 + '0');
        rev /= 10;
    }
    while (count--)
    putchar('0');
    putchar('\n');
}
int main() {
int t;
t=readfast();
for(int o=0;o<t;o++)
{
 int n;
 n=readfast();
 long long a[n];
 for(int i=0;i<n;i++) a[i]=readfast();
 sort(a,a+n);
 long long answer=0;
 while(n>3)
 {
   answer= answer+min(a[0]+ (2*a[1])+a[n-1],(2*a[0])+a[n-1]+a[n-2]);
   n=n-2;
}
if(n==3) answer=answer+a[0]+a[1]+a[2];    
else if(n==2) answer=answer+a[1];
else answer=answer+a[0];
writefast(answer);
    
}   
}
