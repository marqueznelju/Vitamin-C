#include <stdio.h>
#include <string.h>

struct VitaminC
{
	char Formula[30];
	char Molar_mass[50];

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
