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

mem[i] += 13;
mem[i+(1)]+=(mem[i]/1)*2;
mem[i+(4)]+=(mem[i]/1)*5;
mem[i+(5)]+=(mem[i]/1)*2;
mem[i+(6)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 5;
mem[i] += 6;
i += 1;
mem[i] -= 3;
i += 10;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
mem[i] += 1;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 8;
mem[i]=0;
i += 1;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 8;
mem[i]=0;
mem[i] += 1;
i -= 7;
mem[i] += 5;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 7;
mem[i] += 1;
i += 26;
i += 1;
mem[i] += 1;
i -= 17;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
while(mem[i] != 0){
i += 6;
while(mem[i] != 0){
i += 7;
mem[i]=0;
i += 2;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 2;
i += 5;
mem[i]=0;
mem[i] += 1;
i -= 6;
mem[i] += 4;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 6;
mem[i] += 1;
i -= 6;
mem[i] += 7;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 6;
mem[i] += 1;
i -= 16;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i] = 0;
i += 6;
while(mem[i] != 0){
i += 5;
i += 2;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 6;
mem[i+(6)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 8;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 7;
i -= 2;
}
i += 7;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
mem[i] += 1;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 7;
i -= 2;
while(mem[i] != 0){
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 10;
}
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 5;
i += 4;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 6;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 2;
i += 7;
}
i -= 9;
while(mem[i] != 0){
i += 2;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 11;
}
i += 2;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 4;
mem[i+(-36)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 4;
i += 5;
}
i -= 9;
mem[i] -= 1;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
i += 21;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
i -= 6;
i -= 3;
}
i += 9;
while(mem[i] != 0){
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i += 1;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 13;
while(mem[i] != 0){
i -= 5;
i -= 4;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i -= 1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 1;
i += 2;
mem[i] += 1;
i -= 12;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 6;
i -= 2;
}
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i -= 7;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i+(4)]-=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
mem[i] += 19;
mem[i] += 7;
i += 2;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 2;
while(mem[i] != 0){
i -= 7;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] += 1;
i += 4;
mem[i] += 1;
i -= 2;
mem[i] = 0;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i+(4)]-=(mem[i]/1)*1;
mem[i] = 0;
i += 3;
}
i += 13;
while(mem[i] != 0){
i += 2;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
i += 6;
while(mem[i] != 0){
i += 5;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 2;
mem[i+(-9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 7;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
mem[i] += 1;
i += 1;
mem[i] = 0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 3;
i -= 6;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 6;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
i -= 1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 10;
}
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 3;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 3;
}
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 6;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 6;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 10;
}
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i] = 0;
i -= 1;
mem[i] -= 1;
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 4;
mem[i+(-36)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 3;
mem[i+(-36)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 6;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 8;
mem[i] += 7;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
i -= 9;
mem[i] -= 1;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 8;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 6;
mem[i] = 0;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 6;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*2;
mem[i] = 0;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] -= 1;
i += 1;
mem[i] += 1;
i += 1;
}
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 6;
mem[i]=0;
i -= 6;
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i += 5;
while(mem[i] != 0){
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] -= 1;
i += 1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 12;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i -= 1;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] += 1;
i -= 11;
while(mem[i] != 0){
i -= 5;
i -= 4;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 8;
}
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 5;
i -= 3;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i -= 14;
mem[i] += 1;
i += 11;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
}
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 3;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
i -= 10;
}
i += 4;
mem[i]=0;
i -= 4;
}
i += 3;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 3;
i -= 5;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i -= 14;
mem[i] += 1;
i += 10;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(4)]-=(mem[i]/1)*1;
mem[i+(-10)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 4;
mem[i+(4)]-=(mem[i]/1)*1;
mem[i+(-10)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 11;
}
i += 6;
mem[i] += 1;
i -= 6;
}
}
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i -= 14;
mem[i] += 1;
i += 11;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
}
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 3;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
i -= 5;
}
}
i += 1;
mem[i]=0;
i += 2;
mem[i]=0;
i += 1;
mem[i]=0;
i += 5;
while(mem[i] != 0){
i += 2;
mem[i]=0;
i += 1;
mem[i]=0;
i += 6;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 5;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
mem[i] += 1;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 8;
i -= 1;
while(mem[i] != 0){
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 10;
}
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 3;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 3;
}
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 3;
mem[i+(-36)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 5;
mem[i]=0;
i += 4;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 9;
}
i -= 9;
mem[i] -= 1;
i -= 5;
i -= 4;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i += 1;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 5;
i -= 8;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i -= 1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 12;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 2;
i += 7;
}
i -= 8;
}
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 8;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 1;
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] -= 1;
i -= 10;
mem[i] += 1;
i += 12;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i+(-12)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
mem[i] += 1;
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i+(-12)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 13;
}
}
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 2;
i += 6;
}
i -= 8;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 1;
mem[i] += 1;
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] -= 1;
i -= 10;
mem[i] += 1;
i += 11;
mem[i+(-1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
}
i += 3;
while(mem[i] != 0){
mem[i] -= 1;
i -= 2;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(-1)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 12;
}
i += 5;
mem[i] += 1;
i -= 5;
}
i += 9;
while(mem[i] != 0){
i += 3;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 4;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
i += 1;
mem[i]=0;
i += 5;
while(mem[i] != 0){
i += 7;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 6;
mem[i+(6)]+=(mem[i]/1)*1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i -= 7;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*2;
mem[i] = 0;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] -= 1;
i += 1;
mem[i] += 1;
i += 2;
}
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i += 5;
while(mem[i] != 0){
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i -= 1;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] += 1;
i -= 2;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] -= 1;
i += 1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 12;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 1;
i -= 7;
}
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 8;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] -= 1;
i -= 13;
mem[i] += 1;
i += 10;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-10)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i] += 1;
i -= 3;
mem[i+(3)]-=(mem[i]/1)*1;
mem[i+(-10)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 1;
}
i -= 1;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 11;
}
i += 5;
mem[i]=0;
i += 2;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 2;
mem[i+(-2)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 8;
mem[i] += 1;
i -= 1;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i -= 13;
mem[i] += 1;
i += 11;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(2)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
}
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 2;
mem[i+(2)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 12;
}
}
i += 4;
mem[i]=0;
i -= 4;
}
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i += 1;
mem[i]=0;
i += 2;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
while(mem[i] != 0){
i += 6;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i -= 13;
mem[i] += 1;
i += 11;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(2)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
}
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 2;
mem[i+(2)]-=(mem[i]/1)*1;
mem[i+(-11)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
}
i += 1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 8;
i -= 4;
}
}
i += 9;
while(mem[i] != 0){
i += 2;
mem[i]=0;
i += 1;
mem[i]=0;
i += 6;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
i += 1;
mem[i]=0;
i += 5;
while(mem[i] != 0){
i += 5;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 6;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
mem[i+(5)]+=(mem[i]/1)*1;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 4;
i += 5;
}
mem[i] += 1;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 2;
i += 6;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 4;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 2;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 10;
}
i += 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i] = 0;
i -= 1;
mem[i] -= 1;
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 1;
mem[i] -= 1;
i += 5;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 4;
i -= 2;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i += 9;
}
i -= 8;
while(mem[i] != 0){
i -= 9;
}
}
i += 9;
while(mem[i] != 0){
i += 6;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i += 2;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 11;
}
i += 2;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 2;
mem[i] += 1;
i += 3;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 4;
while(mem[i] != 0){
mem[i] -= 1;
i -= 4;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 3;
mem[i+(3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 4;
mem[i+(-36)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 5;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] += 15;
while(mem[i] != 0){
while(mem[i] != 0){
i += 8;
i += 1;
}
i -= 9;
mem[i] -= 1;
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
mem[i] -= 1;
}
mem[i] += 1;
i += 21;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 3;
mem[i+(-3)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] -= 1;
i += 1;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] += 1;
i -= 13;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
while(mem[i] != 0){
mem[i] -= 1;
i += 4;
mem[i] -= 1;
i -= 1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 3;
mem[i] += 1;
i -= 1;
i -= 11;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 8;
}
i += 1;
i += 7;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 2;
mem[i] -= 1;
i += 2;
mem[i+(-4)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 2;
}
i -= 2;
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 4;
mem[i+(4)]-=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
mem[i] = 0;
i -= 3;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 3;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 1;
mem[i]=0;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 5;
mem[i]=0;
i += 4;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 1;
mem[i] += 11;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 4;
mem[i] += 1;
i += 9;
mem[i] += 1;
i -= 8;
i -= 6;
while(mem[i] != 0){
i -= 9;
}
i += 7;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] += 1;
mem[i]=0;
i += 2;
while(mem[i] != 0){
i += 9;
}
i -= 5;
i -= 4;
while(mem[i] != 0){
i += 7;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 6;
while(mem[i] != 0){
mem[i] -= 1;
i += 6;
mem[i] += 1;
i -= 7;
while(mem[i] != 0){
i -= 9;
}
i += 7;
mem[i]=0;
mem[i] += 1;
i += 3;
}
i -= 4;
i -= 6;
}
}
i += 7;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] += 1;
i += 2;
while(mem[i] != 0){
i += 1;
mem[i] += 1;
i += 4;
mem[i+(-4)]-=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
mem[i+(4)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 2;
mem[i] += 1;
i -= 7;
while(mem[i] != 0){
i += 5;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 14;
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 5;
i -= 4;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 7;
while(mem[i] != 0){
mem[i] -= 1;
i -= 7;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 7;
}
i -= 6;
mem[i+(6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 7;
mem[i] -= 1;
i -= 4;
mem[i]=0;
mem[i] += 1;
i -= 3;
}
mem[i] += 1;
i += 7;
mem[i+(-7)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 7;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] -= 1;
i += 2;
while(mem[i] != 0){
i += 2;
i += 3;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 4;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 7;
while(mem[i] != 0){
mem[i] -= 1;
i -= 7;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-3)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 7;
}
i -= 2;
i -= 4;
mem[i+(6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 1;
mem[i] += 5;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 4;
mem[i] += 1;
i -= 3;
i -= 2;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 5;
mem[i+(-5)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] -= 1;
i += 2;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 4;
i -= 3;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] += 1;
i -= 16;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 7;
mem[i+(-7)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 7;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] -= 1;
i -= 2;
mem[i+(-5)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 5;
mem[i] += 1;
i -= 14;
while(mem[i] != 0){
i -= 3;
i -= 6;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 8;
}
i += 8;
}
i -= 7;
i -= 2;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
i -= 3;
mem[i] += 5;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 4;
mem[i] -= 1;
i -= 5;
while(mem[i] != 0){
i -= 7;
i -= 2;
}
}
i += 3;
}
i -= 4;
printf("%c", (char)mem[i]);
i += 10;
while(mem[i] != 0){
i += 6;
mem[i]=0;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 1;
mem[i] += 10;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 5;
mem[i] += 1;
i += 9;
mem[i] += 1;
i -= 15;
while(mem[i] != 0){
i -= 9;
}
i += 8;
mem[i+(-8)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 8;
while(mem[i] != 0){
mem[i] -= 1;
i += 8;
mem[i] += 1;
mem[i]=0;
i += 1;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 8;
mem[i+(-7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 7;
while(mem[i] != 0){
mem[i] -= 1;
i += 7;
mem[i] += 1;
i -= 8;
while(mem[i] != 0){
i -= 9;
}
i += 8;
mem[i]=0;
mem[i] += 1;
i += 2;
}
i -= 10;
}
}
i += 8;
mem[i+(-8)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 8;
while(mem[i] != 0){
mem[i] -= 1;
i += 8;
mem[i] += 1;
i += 1;
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
i -= 1;
mem[i] += 1;
i -= 8;
while(mem[i] != 0){
i += 6;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 15;
}
i += 9;
while(mem[i] != 0){
i += 9;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 8;
while(mem[i] != 0){
mem[i] -= 1;
i -= 8;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 7;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 6;
i -= 3;
}
i += 8;
mem[i] -= 1;
i -= 5;
mem[i]=0;
mem[i] += 1;
i -= 3;
}
mem[i] += 1;
i += 8;
mem[i+(-8)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 8;
while(mem[i] != 0){
mem[i] -= 1;
i += 8;
mem[i] -= 1;
i += 1;
while(mem[i] != 0){
i += 3;
i += 3;
mem[i+(2)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 3;
}
i -= 9;
while(mem[i] != 0){
i += 1;
mem[i]=0;
i -= 1;
mem[i] -= 1;
i += 8;
while(mem[i] != 0){
mem[i] -= 1;
i -= 8;
mem[i] += 1;
i += 1;
mem[i+(-1)]-=(mem[i]/1)*1;
mem[i+(-2)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i+(1)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 8;
}
i -= 2;
i -= 5;
mem[i+(7)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 1;
mem[i] += 1;
i -= 9;
}
i += 1;
mem[i] += 5;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 5;
mem[i] += 1;
i += 27;
mem[i] += 1;
i -= 6;
while(mem[i] != 0){
i -= 9;
}
i += 9;
while(mem[i] != 0){
i += 6;
mem[i+(-6)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 1;
i -= 5;
while(mem[i] != 0){
mem[i] -= 1;
i += 6;
mem[i] -= 1;
i += 2;
mem[i+(-8)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 8;
while(mem[i] != 0){
mem[i] -= 1;
i += 8;
mem[i] += 1;
i -= 17;
while(mem[i] != 0){
i -= 7;
i -= 2;
}
i += 4;
mem[i]=0;
mem[i] += 1;
i += 5;
while(mem[i] != 0){
i += 9;
}
i += 1;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 8;
mem[i+(-8)]-=(mem[i]/1)*1;
mem[i] = 0;
mem[i] += 1;
i -= 8;
while(mem[i] != 0){
mem[i] -= 1;
i += 8;
mem[i] -= 1;
i -= 2;
mem[i+(-6)]+=(mem[i]/1)*1;
mem[i] = 0;
i -= 6;
while(mem[i] != 0){
mem[i] -= 1;
i += 6;
mem[i] += 1;
i -= 15;
while(mem[i] != 0){
i -= 9;
}
i += 3;
mem[i]=0;
mem[i] += 1;
i += 6;
while(mem[i] != 0){
i += 6;
i += 3;
}
i += 1;
mem[i]=0;
mem[i] += 1;
i -= 1;
}
}
mem[i] += 1;
i += 1;
while(mem[i] != 0){
mem[i] -= 1;
i -= 1;
while(mem[i] != 0){
i += 9;
}
i -= 8;
}
i += 8;
}
i -= 9;
while(mem[i] != 0){
i -= 9;
}
i += 4;
mem[i]=0;
i -= 3;
mem[i] += 4;
mem[i] += 1;
while(mem[i] != 0){
mem[i] -= 1;
mem[i+(9)]+=(mem[i]/1)*1;
mem[i] = 0;
i += 9;
}
i += 5;
mem[i] -= 1;
i += 27;
mem[i] -= 1;
i -= 6;
while(mem[i] != 0){
i -= 4;
i -= 5;
}
}
i += 3;
}
}
