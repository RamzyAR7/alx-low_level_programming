#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf_header(unsigned char *magic_numbers);
void print_magic_numbers(unsigned char *magic_numbers);
void print_class_info(unsigned char *header_ident);
void print_data_info(unsigned char *header_ident);
void print_version_info(unsigned char *header_ident);
void print_abi_info(unsigned char *header_ident);
void print_osabi_info(unsigned char *header_ident);
void print_file_type(unsigned int e_type, unsigned char *header_ident);
void print_entry_point(unsigned long int entry_point,
					   unsigned char *header_ident);
void close_file(int file_descriptor);

/**
 * validate_elf_header - Validates the magic numbers of an ELF header.
 * @magic_numbers: A pointer to an array containing the ELF magic numbers.
 *
 * Description: If the file is not an ELF File or
 *              the function fails, exit with code 98.
 */
void validate_elf_header(unsigned char *magic_numbers)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (magic_numbers[index] != 127 &&
			magic_numbers[index] != 'E' &&
			magic_numbers[index] != 'L' &&
			magic_numbers[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * print_magic_numbers - Prints the magic numbers of an ELF header.
 * @magic_numbers: A pointer to an array containing the ELF magic numbers.
 */
void print_magic_numbers(unsigned char *magic_numbers)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", magic_numbers[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * print_class_info - Prints the class information of an ELF header.
 * @header_ident: A pointer to an array containing the ELF class.
 */
void print_class_info(unsigned char *header_ident)
{
	printf("  Class:                             ");

	switch (header_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", header_ident[EI_CLASS]);
	}
}

/**
 * print_data_info - Prints the data information of an ELF header.
 * @header_ident: A pointer to an array containing the ELF class.
 */
void print_data_info(unsigned char *header_ident)
{
	printf("  Data:                              ");

	switch (header_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", header_ident[EI_CLASS]);
	}
}

/**
 * print_version_info - Prints the version information of an ELF header.
 * @header_ident: A pointer to an array containing the ELF version.
 */
void print_version_info(unsigned char *header_ident)
{
	printf("  Version:                           %d",
		   header_ident[EI_VERSION]);

	switch (header_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * print_osabi_info - Prints the OS/ABI information of an ELF header.
 * @header_ident: A pointer to an array containing the ELF version.
 */
void print_osabi_info(unsigned char *header_ident)
{
	printf("  OS/ABI:                            ");

	switch (header_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", header_ident[EI_OSABI]);
	}
}

/**
 * print_abi_info - Prints the ABI version information of an ELF header.
 * @header_ident: A pointer to an array containing the ELF ABI version.
 */
void print_abi_info(unsigned char *header_ident)
{
	printf("  ABI Version:                       %d\n",
		   header_ident[EI_ABIVERSION]);
}

/**
 * print_file_type - Prints the type information of an ELF header.
 * @e_type: The ELF type.
 * @header_ident: A pointer to an array containing the ELF class.
 */
void print_file_type(unsigned int e_type,
					 unsigned char *header_ident)
{
	if (header_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * print_entry_point - Prints the entry point information of an ELF header.
 * @entry_point: The address of the ELF entry point.
 * @header_ident: A pointer to an array containing the ELF class.
 */
void print_entry_point(unsigned long int entry_point,
					   unsigned char *header_ident)
{
	printf("  Entry point address:               ");

	if (header_ident[EI_DATA] == ELFDATA2MSB)
	{
		entry_point = ((entry_point << 8) & 0xFF00FF00) |
					  ((entry_point >> 8) & 0xFF00FF);
		entry_point = (entry_point << 16) | (entry_point >> 16);
	}

	if (header_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)entry_point);

	else
		printf("%#lx\n", entry_point);
}

/**
 * close_file - Closes an ELF file.
 * @file_descriptor: The file descriptor of the ELF file.
 *
 * Description: If the file cannot be closed, exit with code 98.
*/
void close_file(int file_descriptor)
{
	if (close(file_descriptor) == -1)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't close fd %d\n", file_descriptor);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF File or
 *              the function fails, exit with code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int file_descriptor, read_result;

	file_descriptor = open(argv[1], O_RDONLY);
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}

	read_result = read(file_descriptor, header, sizeof(Elf64_Ehdr));
	if (read_result == -1)
	{
		free(header);
		close_file(file_descriptor);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	validate_elf_header(header->e_ident);
	printf("ELF Header:\n");
	print_magic_numbers(header->e_ident);
	print_class_info(header->e_ident);
	print_data_info(header->e_ident);
	print_version_info(header->e_ident);
	print_osabi_info(header->e_ident);
	print_abi_info(header->e_ident);
	print_file_type(header->e_type, header->e_ident);
	print_entry_point(header->e_entry, header->e_ident);

	free(header);
	close_file(file_descriptor);
	return (0);
}
