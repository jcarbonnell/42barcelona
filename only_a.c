#include <unistd.h>

int main() {
	char c = 'a';   // Define the character 'c'
	write(1, &c, 1); // Write the character to standard output
    	return 0;
}
