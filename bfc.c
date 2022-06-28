#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

enum OpCode {
    //"pure" bf instructions
    OP_ADD, OP_SUB, OP_LEFT, OP_RIGHT, OP_PRINT,
    OP_INPUT, OP_LEFTLOOP, OP_RIGHTLOOP, OP_NOP,
     
    //only used for compiling
    OP_SET, OP_INFADD/*[+]*/, OP_INFSUB/*[-]*/,OP_WEIRD_MAD_ADD/*mem[i+c]+=(mem[i]/a)*b;*/,
    OP_WEIRD_MAD_SUB/*mem[i+c]-=(mem[i]/a)*b;*/,
    OP_CODE/*straight up c code*/

};

struct Instruction{
    enum OpCode op;
    uint times;
    int a,b,c;
    // float d,e,f = 0.0f;
    // __intptr_t specialData;//used only by OP_CODE to store pointer to c code
};

enum OpCode opcodeFromChar(char a){
    switch(a){
        case '<':
            return OP_LEFT;
        case '>':
            return OP_RIGHT;
        case '+':
            return OP_ADD;
        case '-':
            return OP_SUB;
        case '.':
            return OP_PRINT;
        case ',':
            return OP_INPUT;
        case '[':
            return OP_LEFTLOOP;
        case ']':
            return OP_RIGHTLOOP;
        default:
            return OP_NOP;
    }
}

/**
buff will be overriden with the string that the instruction represents
*/
void instructionToString(struct Instruction *ins, char *buff[], bool c_code){
    switch(ins->op){
        case OP_ADD:
            if(c_code)sprintf(buff, "mem[i] += %d;\n", ins->times);
            else sprintf(buff, "add.%d", ins->times);
            break;
        case OP_SUB:
            if(c_code)sprintf(buff, "mem[i] -= %d;\n", ins->times);
            else sprintf(buff, "sub.%d", ins->times);
            break;
        case OP_LEFT:
            if(c_code)sprintf(buff, "i -= %d;\n", ins->times);
            else sprintf(buff, "left.%d", ins->times);
            break;
        case OP_RIGHT:
            if(c_code)sprintf(buff, "i += %d;\n", ins->times);
            else sprintf(buff, "right.%d", ins->times);
            break;
        case OP_INPUT:
            if(c_code){
                const char input_code[] = "getInput(&mem[i]);";
                buff[0] = '\0';// "reset" the buffer
                for(int i=0;i<ins->times;i++){
                    strcat(buff, input_code);
                }
                strcat(buff, "\n");
            }
            else sprintf(buff, "input.%d", ins->times);
            break;
        case OP_PRINT:
            if(c_code){
                const char printf_code[] = "printf(\"%c\", (char)mem[i]);";
                buff[0] = '\0';// "reset" the buffer
                for(int i=0;i<ins->times;i++){
                    strcat(buff, printf_code);
                }
                strcat(buff, "\n");
            }
            else sprintf(buff, "print.%d", ins->times);
            break;
        case OP_LEFTLOOP:
            if(c_code){
                const char leftloop_code[] = "while(mem[i] != 0){\n";
                buff[0] = '\0';// "reset" the buffer
                for(int i=0;i<ins->times;i++){
                    strcat(buff, leftloop_code);
                }
                // strcat(buff, "\n");
            }
            else sprintf(buff, "[.%d", ins->times);
            break;
        case OP_RIGHTLOOP:
            if(c_code){
                const char rightloop_code[] = "}\n";
                buff[0] = '\0';// "reset" the buffer
                for(int i=0;i<ins->times;i++){
                    strcat(buff, rightloop_code);
                }
                // strcat(buff, "\n");
            }
            else sprintf(buff, "].%d", ins->times);
            break;
        case OP_SET:
            if(c_code)sprintf(buff, "mem[i] = %d;\n", ins->times);
            else sprintf(buff, "set.%d", ins->times);
            break;
        case OP_INFSUB: //idk if having two matters
        case OP_INFADD:
            if(c_code)sprintf(buff, "mem[i]=0;\n");
            else sprintf(buff, "inf[add/sub]");
            break;
        case OP_CODE:
            // printf("code: %d\n", ins->specialData);
            // if(ins->specialData != 0){
            //     // printf("good:'\n");
            //     sprintf(buff, ins->specialData);
            //     // printf("'");
            // }else{
            //     // printf("bad\n");
            //     sprintf(buff, "");
            // }
            break;
        case OP_WEIRD_MAD_ADD:
            sprintf(buff, "mem[i+(%d)]+=(mem[i]/%d)*%d;\n", ins->c, ins->a, ins->b);
            break;
        case OP_WEIRD_MAD_SUB:
            sprintf(buff, "mem[i+(%d)]-=(mem[i]/%d)*%d;\n", ins->c, ins->a, ins->b);
            break;
        case OP_NOP:
        default:
            sprintf(buff, "/*NOP*/");
            break;
    }
}

// enum AST_TYPE{
//     AST_TYPE_EXPR, AST_TYPE_LIST;
// };

// struct AST_EXPR{//all other instructions
//     enum AST_TYPE type = AST_TYPE_EXPR;
//     void* next;

//     struct Instruction instruction;
// };

// //only used for loops
// struct AST_LIST{//contains expressions
//     enum AST_TYPE type = AST_TYPE_LIST;
//     void* next;

//     AST_EXPR expressions[];
//     int expressionsLength;
// };

/**
only use on AST_LIST or AST_EXPR
*/
// AST_TYPE getASTType(void* next){
//     return (AST_TYPE)(*next);
// }

// AST_TYPE getNextASTType(void ){
//     return (AST_TYPE)()
// }

// struct AST_EXPR createAST_EXPR(struct Instruction instruction){
//     struct AST_EXPR ast_expr;
//     ast_expr.instruction = instruction;
//     return ast_expr;
// }

// struct AST_LIST createAST_LIST(){
//     struct AST_LIST ast_list;
//     return ast_list;
// }

char stringBuffer[5000];//max 10k character is pretty good ngl lmao

//WILL CONTINUE FOREVER UNTIL IT REACHES A ZERO, PLEASE USE PROPERLY ;-;
//this copies a string into a global array so its address can be referenced later
char* storeString(char chars[]){
    static int stringIndexPointer = 0;
    stringIndexPointer += strlen(chars)+1;

    char* bruh = strcpy(&stringBuffer[stringIndexPointer], chars);
    return bruh;
}

//will copy c nops to ins array
void copyNops(struct Instruction* ins, int c){
    for(int i=0;i<c;i++){
        ins[i].op = OP_NOP;
    }
}

void printInstruction(struct Instruction *ins){
    static char buffer[50];
    memset(buffer, 0, 50);
    instructionToString(ins, buffer, false);
    printf("%s", buffer);
}

void optimize_ir(struct Instruction *irs, int irCount){
    // return;
    
    //collapses all <> and +- instructions into one
    // {
    //     int startIndex;
    //     for(int i=0;i<irCount;i++){//left and right
    //         if(irs[i].op == OP_LEFTLOOP || irs[i].op == OP_RIGHTLOOP){
    //             startIndex = i;
    //         }
    //     }
    // }

    /*
    See README.
    [left.1 add.7 right.1 sub.1] :=
        mem[i] = 0;
        mem[i-1] += 7*x;
    */
    //start at 2 cus its not memory safe otherwise
    for(int i=2;i<irCount;i++){// "0th power" constant pass, basic substitutions
        if(irs[i].op    == OP_RIGHTLOOP
        && (irs[i-1].op == OP_SUB || irs[i-1].op == OP_ADD)
        && irs[i-2].op  == OP_LEFTLOOP
        && irs[i].times   == 1
        && irs[i-1].times == 1
        && irs[i-2].times == 1){//turns [.1 sub.1/add.1 ].1 into infadd.0            
            struct Instruction temp;
            temp.op = OP_SET;
            temp.times = 0;
            
            irs[i].op = OP_INFADD;
            irs[i].times = 0;
            irs[i-1].op = OP_NOP;
            irs[i-2].op = OP_NOP;
        }
    }


    #ifndef NO_OPTIMIZE_MAD
    {
        bool inLoop = false;
        struct Instruction instructionBuffer[20];//i guess idk 20 is pretty long
        int offset = 0;
        int start = 0;
        int divisor = 0;
        int instructionIndex = 0;
        // char cuteBuffer[20];
        for(int i=0;i<irCount;i++){
            struct Instruction *ins = &irs[i];
            if(inLoop){
                // instructionToString(ins, cuteBuffer, false);
                // printf("offset: %d, instruction: %s\n", offset, cuteBuffer);
                switch(ins->op){
                    case OP_LEFT:
                        offset -= ins->times;
                        break;
                    case OP_RIGHT:
                        offset += ins->times;
                        break;
                    case OP_ADD:
                        if(offset == 0){
                            //BUG: wont work if loop increments instead of decrements
                            //its not supposed to be like this but ill fix it
                            divisor -= ins->times;
                        }else{
                            // printf("added +=, ");
                            struct Instruction instruction;
                            instruction.op = OP_WEIRD_MAD_ADD;//mem[i+c]+=(mem[i]/a)*b;
                            instruction.times = 1;
                            instruction.c = offset;
                            instruction.b = ins->times;

                            // char buffer[50];
                            // sprintf(buffer, "mem[i+(%d)]+=(mem[i]/%d)*%d;\n", offset,divisor, ins->times);
                            // instruction.specialData 
                            //     = (__intptr_t)storeString(buffer);
                                
                            instructionBuffer[(instructionIndex++)] = instruction;
                        }
                        break;
                    case OP_SUB:
                        if(offset == 0){
                            divisor += ins->times;
                        }else{
                            // printf("added -=, ");
                            struct Instruction instruction;
                            instruction.op = OP_WEIRD_MAD_SUB;//mem[i+c]-=(mem[i]/a)*b;
                            instruction.times = 1;
                            instruction.c = offset;
                            instruction.b = ins->times;

                            // char buffer[50];
                            // sprintf(buffer, "/*sub*/mem[i+(%d)]-=(mem[i]/%d)*%d;\n", offset,divisor, ins->times);
                            // instruction.specialData 
                            //     = (__intptr_t)storeString(buffer);

                            instructionBuffer[(instructionIndex++)] = instruction;
                        }
                        break;
                    case OP_RIGHTLOOP:
                        if(offset == 0){//it worked i guess
                            struct Instruction instruction;
                            instruction.op = OP_SET;
                            instruction.times = 0;
                            instructionBuffer[instructionIndex++] = instruction;

                            const int instructionsLength = i-start+1;

                            // printf("copied %d nops\n", instructionsLength);
                            copyNops(&irs[start], instructionsLength);
                            memcpy(&irs[start], instructionBuffer,
                                    (instructionIndex) * sizeof(struct Instruction));

                            for(int j=0;j<instructionsLength;j++){
                                irs[start+j].a = divisor;
                            }
                            // printf("did optimizingatio\n");
                            // continue;
                        }
                        inLoop = false;

                        resetVars:
                        instructionIndex = 0;
                        offset = 0;
                        divisor = 0;
                        memset(instructionBuffer, 0, 20 *sizeof(struct Instruction));
                        continue;
                    case OP_LEFTLOOP://TODO: dont support nested loops yet
                        start = i;
                        goto resetVars;
                    case OP_NOP:
                        continue;
                }
            }else if(ins->op == OP_LEFTLOOP){//start the business
                inLoop = true;
                start = i;
            }
            
        }
    }
    #endif
}

int main(int argc, char *args[]){
    FILE *fp;

    bool printIR = false;
    bool interpretMode = false;
    char outputFilePath[100] = "./bf_out.c";

    if(argc < 2){
        printf("Bro you gotta tell me which file you want to run");
        return 1;
    }
    for(int i=0;i<argc;i++){
        printf("%d: '", i);
        printf(args[i]);
        printf("'\n");
    }
    fp = fopen(args[argc-1], "r");

    const char emit_ir_flag[] = "-emit-ir\0";
    const char interpreter_flag[] = "-I\0";
    for(int i=1; i<argc; i++){
        if(!strcmp(emit_ir_flag, args[i])){
            printIR = true;
            printf("printIR true\n");
        }else if(!strcmp(interpreter_flag, args[i])){
            interpretMode = true;
            printf("interpreter mode on\n");
        }else if(!strcmp("-o", args[i])){
            strcpy(outputFilePath, args[i+1]);
            i++;
            continue;
        }
    }

    if(fp == NULL){
        perror("error opening bf source code\n");
        return 1;
    }

    #define BF_PARSE_BUFF_SIZE 65565

    char buff[BF_PARSE_BUFF_SIZE];

    bzero(buff, BF_PARSE_BUFF_SIZE);
    // memset(buff, 0, BF_PARSE_BUFF_SIZE);

    int progLength = 0;

    char c = fgetc(fp);
    {
        int i = 0;
        while(c != EOF){
            if(i > BF_PARSE_BUFF_SIZE){
                perror("\nreached end of buffer\n");
                buff[BF_PARSE_BUFF_SIZE-1] = 0;
                return 1;
            }

            // printf("added %c\n", c);
            buff[i] = c;

            c = fgetc(fp);
            i++;
        }
        // buff[i-1] = ' '; //add space cus i need it when parsing
        // buff[i] = ' ';   //add space cus i need it when parsing
        progLength = i;
    }
    fclose(fp);

    printf(buff);
    printf("\n\n\n");

    #define CELLS 65565
    #define INSTRUCTION_BUFFER_SIZE 65565

    struct Instruction ir[INSTRUCTION_BUFFER_SIZE];

    //either printIR or compile
    if(!interpretMode){
        int irCount = 0;
        enum OpCode previousOp = OP_NOP;
        int times = 1;
        printf("generating IF...\n");
        for(int i=0;i<progLength;i++){ //loop through source and generate BF IR
            char c = buff[i];
            // static int raw = 0;
            // if(c == ']')printf("{%d}",++raw);
            static char bruhBuff[50];

            // printf("parsing '%c', ", c);
            enum OpCode opcode = opcodeFromChar(c);
            // if(opcode == OP_NOP)continue;
            if(opcode == previousOp)times++;
            if(opcode != previousOp || i == progLength-1){
                struct Instruction instruction;
                instruction.times = times;
                if(opcode != previousOp && i == progLength-1){
                    instruction.op = previousOp;
                    ir[irCount] = instruction;
                    irCount++;
                    instructionToString(&instruction, bruhBuff, false);
                    // printf("added %s\n", bruhBuff);

                    instruction.op = opcode;
                    instruction.times = 1;
                    ir[irCount] = instruction;

                    instructionToString(&instruction, bruhBuff, false);
                    // printf("added %s\n", bruhBuff);
                }else instruction.op = previousOp;

                instructionToString(&instruction, bruhBuff, false);
                // printf("added %s\n", bruhBuff);

                ir[irCount] = instruction;

                times = 1;
                irCount++;
            }
            previousOp = opcode;
        }
        printf("generated IF\n");

        //now we can optimize the ir
        optimize_ir(ir, irCount);
        printf("ran optimizations\n");

        if(printIR){
            char buffer[20];
            for(int i=0;i<irCount;i++){
                struct Instruction *ins = &ir[i];
                instructionToString(ins, buffer, false);
                printf("%s ", buffer);
            }
            printf("\nirCount: %d\n", irCount);
        }else if(!interpretMode && !printIR){ //compile
            char buffer[500];
            const char preamble[] = "#include <stdio.h>\n"
                                    "#include <string.h>\n"
                                    "void bfi_code(int mem[], char buff[]);\n"
                                    "int main(void){\n"
                                    "   int mem[65565];\n"
                                    "   char buff[255];\n"
                                    "   memset(mem, 0, sizeof mem);\n"
                                    "   bfi_code(mem, buff);\n"
                                    "   return 0;\n"
                                    "}\n"
                                    "void getInput(int *mem){\n"
                                    "   *mem = getchar();\n"
                                    "}\n"
                                    "void bfi_code(int mem[], char buff[]){\n"
                                    "   int i = 0;\n\n";
            fp = fopen(outputFilePath, "w");
            if(fp == NULL){
                perror(outputFilePath);
                perror("error opening \n");
                return 1;
            }

            fwrite(preamble, sizeof(char), strlen(preamble), fp);
            int tabCounter = 1;
            for(int i=0;i<irCount;i++){
                if(ir[i].op == OP_NOP)continue;
                static char tabBuffer[50];//max 50 tabs i GUEUSSSSS

                if(ir[i].op == OP_RIGHTLOOP)tabCounter--;

                instructionToString(&ir[i], buffer, true);
                // printf("doing %s\n",buffer);

                memset(tabBuffer, '\t', tabCounter);
                tabBuffer[tabCounter] = '\0';
                fwrite(tabBuffer, sizeof(char), tabCounter, fp);
                fwrite(buffer, sizeof(char), strlen(buffer),fp);

                if(ir[i].op == OP_LEFTLOOP)tabCounter++;
                memset(tabBuffer, 0, 50);
            }
            buffer[0] = '}'; //closing brackets for 'void bfi_code()'
            buffer[1] = '\n';
            buffer[2] = '\0';
            fwrite(buffer, sizeof(char), strlen(buffer), fp);
            fclose(fp);
        }

        return 0;
    }else if(interpretMode){
        //////start bf interpreter//////
        const int maxCells = CELLS;
        int bfCells[maxCells];
        int bfMemoryPointer = 0;
        int loops[maxCells];
        int loopIndex = 0;

        memset(bfCells, 0, sizeof bfCells);

        //now buffer contains the bf program to run
        //loop through every char and run the corresponding instruction
        for(int ip=0;ip<maxCells;ip++){
            char c = buff[ip];
            if(c == 0 || c == EOF)break; //we are done here
            // printf("doing %c\n", c);

#ifndef NO_INFINITE_LOOP_CHECK
            if(bfCells[bfMemoryPointer] > 10000 || bfCells[bfMemoryPointer] < -10000){
                fprintf(stderr, "\n%c%c%c%c%c%c%c\n   ^\n",
                buff[ip-3],buff[ip-2],buff[ip-1],buff[ip],buff[ip+1],buff[ip+2],buff[ip+3]);
                fprintf(stderr, "infinite loop probably instruction %d, value: %d\n", ip, (int)bfCells[bfMemoryPointer]);
                break;
            }
#endif
            switch(c){
                case '<':
                    bfMemoryPointer--;
                    break;
                case '>':
                    bfMemoryPointer++;
                    break;
                case '+':
                    bfCells[bfMemoryPointer]++;
                    break;
                case '-':
                    bfCells[bfMemoryPointer]--;
                    break;
                case '[':
                    if(bfCells[bfMemoryPointer] != 0)
                        loops[++loopIndex] = ip;
                    // loopIndex++;
                    break;
                case ']':
                    if(bfCells[bfMemoryPointer] == 0)
                        loopIndex--; //break the loop
                    else
                        ip = loops[loopIndex]; //return to start of loop
                    break;
                case '.':
                    printf("%c",bfCells[bfMemoryPointer]);
                    break;
                case ',':
                    printf("{read_input}");
                    bfCells[bfMemoryPointer] = 69;
                    break;
                default:
                    // everything that isnt an instruction is ignored lmao
                    break;
            }
            //pointer bounds check
            if(bfMemoryPointer < 0){
                bfMemoryPointer += maxCells;
            }else if(bfMemoryPointer >= maxCells){
                bfMemoryPointer -= maxCells;
            }
            // bfMemoryPointer = bfMemoryPointer % maxCells;
        }
        printf("\n");
        for(int i=0;i<10;i++){
            if(i == bfMemoryPointer)printf("[i *%d: %d] ", i, bfCells[i]);
            else printf("[i %d: %d] ", i, bfCells[i]);
        }
        printf("\nmemory pointer: %d\n", bfMemoryPointer);
    }




    return 0;
}