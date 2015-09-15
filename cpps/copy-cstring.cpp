#include <cstdio>
int main() {
	char *s = "THIS IS AMAZING";
	char *t = new char[16], *tt = t;
	while(*t++=*s++);
	printf("t content => %s\n", tt);
	return 0;
}