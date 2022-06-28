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

	i += 1;
	mem[i] += 8;
	mem[i+(-1)]+=(mem[i]/1)*9;
	mem[i] = 0;
	i -= 1;
	printf("%c", (char)mem[i]);
	i += 1;
	mem[i] += 4;
	mem[i+(-1)]+=(mem[i]/1)*7;
	mem[i] = 0;
	i -= 1;
	mem[i] += 1;
	printf("%c", (char)mem[i]);
	mem[i] += 7;
	printf("%c", (char)mem[i]);printf("%c", (char)mem[i]);
	mem[i] += 3;
	printf("%c", (char)mem[i]);
	i += 2;
	mem[i] += 6;
	mem[i+(-1)]+=(mem[i]/1)*7;
	mem[i] = 0;
	i -= 1;
	mem[i] += 1;
	mem[i] += 1;
	printf("%c", (char)mem[i]);
	mem[i] -= 12;
	printf("%c", (char)mem[i]);
	i += 1;
	mem[i] += 6;
	mem[i+(-1)]+=(mem[i]/1)*9;
	mem[i] = 0;
	i -= 1;
	mem[i] += 1;
	printf("%c", (char)mem[i]);
	i -= 1;
	printf("%c", (char)mem[i]);
	mem[i] += 3;
	printf("%c", (char)mem[i]);
	mem[i] -= 6;
	printf("%c", (char)mem[i]);
	mem[i] -= 8;
	printf("%c", (char)mem[i]);
	i += 3;
	mem[i] += 4;
	mem[i+(-1)]+=(mem[i]/1)*8;
	mem[i] = 0;
	i -= 1;
	mem[i] += 1;
	printf("%c", (char)mem[i]);
}
