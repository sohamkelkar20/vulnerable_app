#include <stdio.h>
 
void spam_stack() {
  char buf[100];
  register int i;
  for (i = 0; i < 99; i++) {
    buf[i] = 'a';
  }
  buf[99] = '\0';
  printf("Stack spammed: %s\n", buf);
}
 
void vuln() {
  unsigned int a, b, c;
  scanf("%u", &a);
  scanf("%u", &b);
  scanf("%u", &c);
 
  printf("%x:%x:%x\n", a, b, c);
}
 
int main(void) {
	vuln();
	return 0;
}
 
