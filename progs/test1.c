#include <stdio.h>
#include <string.h>
void bfi_code(int mem[], char buff[]);
int main(void){
   int mem[65565];
   char buff[255];
   memset(mem, 0, sizeof mem);
   bfi_code(mem, buff);
   return 0;
}
void getInput(int *mem){
   *mem = getchar();
}
void bfi_code(int mem[], char buff[]){
   int i = 0;

	while(mem[i] != 0){
		i += 1;
		mem[i] += 1;
		i += 5;
		mem[i+(-5)]-=(mem[i]/1)*1;
		mem[i] = 0;
		i -= 5;
		mem[i+(5)]+=(mem[i]/1)*1;
		mem[i] = 0;
		i += 6;
		i += 2;
	}
}
