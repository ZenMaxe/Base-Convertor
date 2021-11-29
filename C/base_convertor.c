#include <stdio.h>

void main(void)
{
   char Adad_Haye_Asli[16] =
	 {'0', '1', '2', '3', '4', '5', '6', '7',
	  '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};

   int converted_number[64];
   long int number_to_convert;
   int next_digit, base, index=0;

   printf("Adad Va Mabnaye Mored Nazar Ra Vared Konid ( ba fasele bashe mesle 26 16): ");
   scanf("%ld %i", &number_to_convert, &base);

   while (number_to_convert != 0)
   {
	 converted_number[index] = number_to_convert % base;
	 number_to_convert = number_to_convert / base;
	 ++index;
   }

   
   
   printf("\n\nAdad Tabdil Shode = ");
   for(  ; index>=0; index--) // baraks kardan Adad 
   {
	 printf("%c", Adad_Haye_Asli[converted_number[index]]);
   }
   printf("\n");
}
