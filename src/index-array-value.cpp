// Source: http://www.quora.com/What-are-some-cool-c++-codes-whose-output-is-weird-but-correct
// Explanation: http://stackoverflow.com/questions/5073350/accessing-arrays-by-indexarray-in-c-and-c
#include <cstdio>
int main() {
	const char* a[2] = { "lol", "wat?" };
	printf("%s %s\n", 0[a], 1[a]);
}
