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
mem[i] += 10;
while(mem[i] != 0){
i -= 1;
mem[i] += 10;
i += 1;
mem[i] -= 1;
}
i -= 1;
mem[i] -= 1;
i += 5;
mem[i] += 3;
while(mem[i] != 0){
i += 1;
mem[i] += 3;
i += 1;
mem[i] += 3;
i -= 2;
mem[i] -= 1;
}
i -= 4;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 2;
}
mem[i] += 4;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
i += 4;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 1;
mem[i] += 10;
i -= 1;
mem[i] -= 1;
i += 2;
}
i -= 1;
mem[i] -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 1;
while(mem[i] != 0){
i -= 1;
mem[i] += 1;
i += 1;
mem[i] -= 1;
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 8;
i -= 1;
mem[i] -= 1;
i += 2;
}
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 2;
}
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
i -= 1;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 3;
mem[i] -= 1;
}
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 3;
mem[i] += 1;
i += 3;
}
mem[i] += 2;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 1;
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i += 2;
while(mem[i] != 0){
i -= 2;
mem[i] += 1;
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 3;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 3;
mem[i] -= 1;
}
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 3;
mem[i] += 1;
i += 3;
}
mem[i] += 1;
mem[i] += 3;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i += 2;
while(mem[i] != 0){
i -= 1;
i -= 1;
mem[i] += 1;
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 3;
mem[i] += 8;
while(mem[i] != 0){
i += 2;
mem[i] += 6;
i -= 2;
mem[i] -= 1;
}
i += 1;
while(mem[i] != 0){
i -= 1;
mem[i] += 8;
while(mem[i] != 0){
i += 1;
mem[i] += 6;
i -= 1;
mem[i] -= 1;
}
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 8;
while(mem[i] != 0){
i += 1;
mem[i] -= 6;
i -= 1;
mem[i] -= 1;
}
i += 1;
while(mem[i] != 0){
i -= 2;
mem[i] += 1;
i += 2;
mem[i] -= 1;
}
}
i += 1;
printf("%c", (char)mem[i]);
i -= 2;
mem[i] += 8;
while(mem[i] != 0){
i += 2;
mem[i] -= 6;
i -= 2;
mem[i] -= 1;
}
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] += 1;
i -= 2;
}
i -= 1;
mem[i] += 8;
while(mem[i] != 0){
i -= 1;
mem[i] += 4;
i += 1;
mem[i] -= 1;
}
i -= 1;
printf("%c", (char)mem[i]);
i += 1;
mem[i] += 7;
while(mem[i] != 0){
i += 1;
mem[i] += 9;
i -= 1;
mem[i] -= 1;
}
i += 1;
mem[i] += 3;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 5;
while(mem[i] != 0){
i += 1;
mem[i] += 9;
i -= 1;
mem[i] -= 1;
}
i += 1;
printf("%c", (char)mem[i]);
mem[i] += 5;
printf("%c", (char)mem[i]);printf("%c", (char)mem[i]);
mem[i] -= 8;
printf("%c", (char)mem[i]);
mem[i] -= 7;
printf("%c", (char)mem[i]);
mem[i] += 14;
i += 2;
while(mem[i] != 0){
i += 3;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 4;
mem[i] -= 1;
}
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 4;
}
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 4;
while(mem[i] != 0){
i += 3;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 4;
mem[i] -= 1;
}
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 4;
}
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 1;
i += 1;
}
i -= 3;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
}
}
mem[i] += 2;
i += 2;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 1;
mem[i] -= 1;
i -= 1;
}
i += 1;
while(mem[i] != 0){
i -= 7;
printf("%c", (char)mem[i]);
i += 7;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 9;
printf("%c", (char)mem[i]);
i += 2;
mem[i] -= 4;
printf("%c", (char)mem[i]);
mem[i] -= 9;
printf("%c", (char)mem[i]);
i -= 2;
printf("%c", (char)mem[i]);
i += 2;
mem[i] -= 4;
printf("%c", (char)mem[i]);
mem[i] += 3;
printf("%c", (char)mem[i]);printf("%c", (char)mem[i]);
mem[i] += 13;
printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 2;
}
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 3;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 3;
mem[i] -= 1;
}
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 3;
mem[i] += 1;
i += 3;
}
mem[i] += 4;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 2;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i += 2;
while(mem[i] != 0){
i -= 2;
mem[i] += 1;
i += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 1;
mem[i] += 8;
while(mem[i] != 0){
i -= 1;
mem[i] += 4;
i += 1;
mem[i] -= 1;
}
i -= 1;
printf("%c", (char)mem[i]);
i += 1;
mem[i] += 10;
while(mem[i] != 0){
i += 1;
mem[i] += 11;
i -= 1;
mem[i] -= 1;
}
i += 1;
mem[i] += 1;
printf("%c", (char)mem[i]);
mem[i] -= 1;
printf("%c", (char)mem[i]);
i -= 2;
printf("%c", (char)mem[i]);
i += 2;
mem[i] += 6;
printf("%c", (char)mem[i]);
mem[i] -= 12;
printf("%c", (char)mem[i]);
mem[i] -= 3;
printf("%c", (char)mem[i]);
i -= 2;
printf("%c", (char)mem[i]);
i += 1;
mem[i] += 6;
while(mem[i] != 0){
i += 1;
mem[i] += 3;
i -= 1;
mem[i] -= 1;
}
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 6;
while(mem[i] != 0){
i += 1;
mem[i] -= 4;
i -= 1;
mem[i] -= 1;
}
i += 1;
mem[i] += 2;
printf("%c", (char)mem[i]);
mem[i] += 11;
printf("%c", (char)mem[i]);printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
}
mem[i] += 10;
printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 2;
}
mem[i] += 3;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
mem[i] += 10;
printf("%c", (char)mem[i]);
i += 1;
mem[i] += 9;
while(mem[i] != 0){
i += 1;
mem[i] += 9;
i -= 1;
mem[i] -= 1;
}
i += 1;
mem[i] += 3;
printf("%c", (char)mem[i]);
mem[i] += 13;
printf("%c", (char)mem[i]);
mem[i] += 10;
printf("%c", (char)mem[i]);
mem[i] -= 6;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 8;
while(mem[i] != 0){
i += 2;
mem[i] += 4;
i -= 2;
mem[i] -= 1;
}
i += 2;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 10;
printf("%c", (char)mem[i]);
mem[i] -= 1;
printf("%c", (char)mem[i]);
mem[i] -= 9;
printf("%c", (char)mem[i]);
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] -= 1;
printf("%c", (char)mem[i]);
mem[i] += 7;
mem[i] += 4;
printf("%c", (char)mem[i]);
mem[i] += 8;
printf("%c", (char)mem[i]);
mem[i] -= 9;
printf("%c", (char)mem[i]);
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] -= 13;
printf("%c", (char)mem[i]);
mem[i] += 13;
printf("%c", (char)mem[i]);
mem[i] -= 5;
mem[i] -= 5;
printf("%c", (char)mem[i]);
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 12;
printf("%c", (char)mem[i]);
mem[i] -= 15;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] += 3;
while(mem[i] != 0){
i += 1;
mem[i] += 6;
i -= 1;
mem[i] -= 1;
}
i += 1;
printf("%c", (char)mem[i]);printf("%c", (char)mem[i]);
i += 1;
printf("%c", (char)mem[i]);
i -= 1;
mem[i] -= 1;
mem[i] -= 9;
printf("%c", (char)mem[i]);
mem[i] += 11;
printf("%c", (char)mem[i]);
i += 1;
printf("%c", (char)mem[i]);
i -= 2;
mem[i] += 3;
while(mem[i] != 0){
i += 1;
mem[i] -= 6;
i -= 1;
mem[i] -= 1;
}
i += 1;
mem[i] -= 1;
printf("%c", (char)mem[i]);
mem[i] += 17;
printf("%c", (char)mem[i]);
mem[i] -= 3;
printf("%c", (char)mem[i]);
mem[i] += 6;
printf("%c", (char)mem[i]);
mem[i] -= 7;
printf("%c", (char)mem[i]);
mem[i] -= 10;
printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 3;
printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
}
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i] += 1;
i -= 2;
mem[i] -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 2;
}
mem[i] += 4;
i += 1;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i += 1;
}
i -= 1;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i += 2;
mem[i] -= 1;
i -= 2;
}
i += 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 2;
mem[i] += 1;
i += 2;
}
i -= 2;
while(mem[i] != 0){
while(mem[i] != 0){
mem[i] -= 1;
}
mem[i] += 10;
printf("%c", (char)mem[i]);
while(mem[i] != 0){
mem[i] -= 1;
}
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
}
i += 1;
}
i -= 1;
mem[i] += 1;
i -= 1;
}
}
