#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "elf.h"

void print_magic(char *ptr)
{
int bytes;

printf("  Magic:  ");

for (bytes = 0; bytes < 16; bytes++)
printf(" %02x", ptr[bytes]);

printf("\n");

}

void print_elf_class(const char *filename)
{
Elf64_Ehdr elf_header;
FILE *fp;
fp = fopen(filename, "rb");
if (!fp)
{
fprintf(stderr, "Error: could not open file %s\n", filename);
return;
}
/*Read the ELF header from the file*/
if (fread(&elf_header, sizeof(elf_header), 1, fp) != 1)
{
fprintf(stderr, "Error: could not read ELF header from file %s\n", filename);
fclose(fp);
return;
}
/*Print the class of the ELF file*/
if (elf_header.e_ident[EI_CLASS] == ELFCLASS32)
{
printf("%s is a 32-bit ELF file.\n", filename);
}
else if (elf_header.e_ident[EI_CLASS] == ELFCLASS64)
{
printf("%s is a 64-bit ELF file.\n", filename);
}
else
{
printf("%s is not a valid ELF file.\n", filename);
}
fclose(fp);
}

void print_data(char *ptr)
{
char data = ptr[5];

printf("  Data:                              2's complement");
if (data == 1)
printf(", little endian\n");

if (data == 2)
printf(", big endian\n");
}

void print_version(char *ptr)
{
int version = ptr[6];

printf("  Version:                           %d", version);

if (version == EV_CURRENT)
printf(" (current)");

printf("\n");
}
