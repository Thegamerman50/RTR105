#include <stdio.h>
#include <math.h>

long long convert(int);

int main() {
  int n, bin;
  printf("Lūdzu ievadiet decimālu skaitli!: ");
  scanf("%d", &n);
  bin = convert(n);
  printf("%d decimālajā =  %lld binārajā", n, bin);
  return 0;
}

long long convert(int n) {
  long long bin = 0;
  int rem, i = 1;

  while (n!=0) {
    rem = n % 2;
    n /= 2;
    bin += rem * i;
    i *= 10;
  }

  return bin;
}
