#include <stdio.h>
#include <string.h>

struct VitaminC // Let's make the structure of Vitamin C
{
	char Formula[30]; // 30 bytes of formula
	char Molar_mass[69]; // Size 69 bytes of Molar masss

};

int main()
{
	struct VitaminC;

	strcpy( VitaminC.Formula, "C6H8O6");
	strcpy( VitaminC.Molar_mass, "176.124 g/mol");


	// print the information
	printf("Formula -> %s\n", VitaminC.Formula);
	printf("Molar mass -> %s\n", VitaminC.Molar_mass);

	return(0);
}
