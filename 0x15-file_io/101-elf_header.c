#include "elf.h"
#include <stderr.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void print_osabi(char *ptr)
{
char osabi = ptr[7];

printf("  OS/ABI:                            ");
if (osabi == 0)
printf("UNIX - System V\n");
else if (osabi == 2)
printf("UNIX - NetBSD\n");
else if (osabi == 6)
printf("UNIX - Solaris\n");
else
printf("<unknown: %x>\n", osabi);

printf("  ABI Version:                       %d\n", ptr[8]);
}

void print_elf_abi_version(const char *filename)
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
/*Print the ABI version of the ELF file*/
printf("%s ABI version: %d\n", filename, elf_header.e_ident[EI_VERSION]);
fclose(fp);
}

void print_type(char *ptr)
{
char type = ptr[16];

if (ptr[5] == 1)
type = ptr[16];
else
type = ptr[17];

printf("  Type:                              ");
if (type == 0)
printf("NONE (No file type)\n");
else if (type == 1)
printf("REL (Relocatable file)\n");
else if (type == 2)
printf("EXEC (Executable file)\n");
else if (type == 3)
printf("DYN (Shared object file)\n");
else if (type == 4)
printf("CORE (Core file)\n");
else
printf("<unknown: %x>\n", type);
}

void print_addr(char *ptr)
{
int i;
int begin;
char sys;

printf("  Entry point address:               0x");

sys = ptr[4] + '0';
if (sys == '1')
{
begin = 26;
printf("80");
for (i = begin; i >= 22; i--)
{
if (ptr[i] > 0)
printf("%x", ptr[i]);
else if (ptr[i] < 0)
printf("%x", 256 + ptr[i]);
}
if (ptr[7] == 6)
printf("00");
}

if (sys == '2')
{
begin = 26;
for (i = begin; i > 23; i--)
{
if (ptr[i] >= 0)
printf("%02x", ptr[i]);

else if (ptr[i] < 0)
printf("%02x", 256 + ptr[i]);

}
}
printf("\n");
}
