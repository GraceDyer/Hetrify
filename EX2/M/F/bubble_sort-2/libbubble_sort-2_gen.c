#include <stdint.h>
#include <string.h>
#include <assert.h>
enum gp_reg_type_t {                           
    zero, ra, sp, gp, tp,  t0, t1, t2, s0, s1,             
    a0, a1, a2, a3, a4, a5, a6, a7,                          
    s2, s3, s4, s5, s6, s7, s8, s9, s10, s11,                        
    t3, t4, t5, t6,                             
};                                              
typedef struct {                               
    uint64_t gp_regs[32];                      
    uint64_t pc;                               
} cpu_t;                                       
extern void __list_del(void*, void*);
extern void __list_add(void*, void*, void*);



/*******************    Function: __list_add   *********************/
void __list_add(void* arg0, void* arg1, void* arg2){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[80];
    c->gp_regs[sp]=(uint64_t)&stack[80-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
L_10000: {//addi___list_add
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd___list_add
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10008: {//addi___list_add
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10010: {//sd___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10014: {//sd___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-56LL) = (uint64_t)rs2;
    }
L_10018: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_1001c: {//sw___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10020: {//lw___list_add
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10024: {//addiw___list_add
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)4LL);
    }
L_10028: {//sw___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1002c: {//lwu___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10030: {//addi___list_add
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10034: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//sd___list_add
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_1003c: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10040: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[14] = rd;
    }
L_10044: {//sd___list_add
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_10048: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_1004c: {//sw___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10050: {//lw___list_add
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10054: {//addiw___list_add
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)4LL);
    }
L_10058: {//sw___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_1005c: {//lwu___list_add
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10060: {//addi___list_add
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10064: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//sd___list_add
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_1006c: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10070: {//ld___list_add
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10074: {//sd___list_add
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_10078: {//addi___list_add
    uint64_t rs1 = 0;
    }
L_1007c: {//ld___list_add
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_10080: {//addi___list_add
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_10084: {//jalr___list_add
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: __list_del   *********************/
void __list_del(void* arg0, void* arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10088: {//addi___list_del
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_1008c: {//sd___list_del
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10090: {//addi___list_del
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10094: {//sd___list_del
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[10];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10098: {//sd___list_del
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_1009c: {//ld___list_del
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//sw___list_del
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100a4: {//lw___list_del
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100a8: {//addiw___list_del
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)4LL);
    }
L_100ac: {//sw___list_del
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_100b0: {//lwu___list_del
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100b4: {//addi___list_del
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b8: {//ld___list_del
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//sd___list_del
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_100c0: {//ld___list_del
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//ld___list_del
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_100c8: {//sd___list_del
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_100cc: {//addi___list_del
    uint64_t rs1 = 0;
    }
L_100d0: {//ld___list_del
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_100d4: {//addi___list_del
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100d8: {//jalr___list_del
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
