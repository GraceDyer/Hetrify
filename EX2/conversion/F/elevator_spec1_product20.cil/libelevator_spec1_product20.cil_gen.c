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
extern void __utac_acc__Specification1_spec__2(int, int*, int*, int*, int*, int*);



/*******************    Function: __utac_acc__Specification1_spec__2   *********************/
void __utac_acc__Specification1_spec__2(int arg0, int* arg1, int* arg2, int* arg3, int* arg4, int* arg5){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[80];
    c->gp_regs[sp]=(uint64_t)&stack[80-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
    c->gp_regs[a4]=arg4;
    c->gp_regs[a5]=arg5;
L_10000: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10008: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10010: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10014: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10018: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)-56LL) = (uint64_t)rs2;
    }
L_1001c: {//sd___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-64LL) = (uint64_t)rs2;
    }
L_10020: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10024: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10028: {//lw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//addiw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10030: {//bne___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10044;
    }
    }
L_10034: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1003c: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10040: {//jal___utac_acc__Specification1_spec__2
    goto L_100c4;
    }
L_10044: {//lw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//addiw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1004c: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10050: {//bne___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10064;
    }
    }
L_10054: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1005c: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10060: {//jal___utac_acc__Specification1_spec__2
    goto L_100c4;
    }
L_10064: {//lw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//addiw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1006c: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10070: {//bne___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10084;
    }
    }
L_10074: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1007c: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_10080: {//jal___utac_acc__Specification1_spec__2
    goto L_100c4;
    }
L_10084: {//lw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addiw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1008c: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10090: {//bne___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100a4;
    }
    }
L_10094: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1009c: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_100a0: {//jal___utac_acc__Specification1_spec__2
    goto L_100c4;
    }
L_100a4: {//lw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100a8: {//addiw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100ac: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_100b0: {//bne___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100c4;
    }
    }
L_100b4: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-64LL);
    c->gp_regs[15] = rd;
    }
L_100b8: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100bc: {//sw___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(rs1 + (int64_t)0LL) = (uint32_t)rs2;
    }
L_100c0: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    }
L_100c4: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = 0;
    }
L_100c8: {//ld___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_100cc: {//addi___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_100d0: {//jalr___utac_acc__Specification1_spec__2
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
