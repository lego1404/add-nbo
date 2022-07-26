#include <stdio.h>
#include <stdint.h>
#include <arpa/inet.h>

int main(int argc, char *argv[]) {
	uint32_t f1_byte, f2_byte, sum;
	
	FILE* f1 = fopen(argv[1], "r");
	FILE* f2 = fopen(argv[2], "r");

	fread(&f1_byte, sizeof(f1_byte), 1, f1);
	fread(&f2_byte, sizeof(f2_byte), 1, f2);

	f1_byte= htonl(f1_byte);
	f2_byte= htonl(f2_byte);
	sum = f1_byte + f2_byte;

	printf ("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", f1_byte, f1_byte, f2_byte, f2_byte, sum, sum);

	fclose(f1);
	fclose(f2);
}
