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
extern int check(char, char, char, char);



/*******************    Function: check   *********************/
int check(char arg0, char arg1, char arg2, char arg3){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
L_10000: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_check
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_check
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_check
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-33LL) = (uint8_t)rs2;
    }
L_10018: {//addi_check
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1001c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-34LL) = (uint8_t)rs2;
    }
L_10020: {//addi_check
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10024: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-35LL) = (uint8_t)rs2;
    }
L_10028: {//addi_check
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1002c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-36LL) = (uint8_t)rs2;
    }
L_10030: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10038: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10040: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10044: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10048: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_1004c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10050: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10054: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10058: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1005c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10060: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_100c8;
    }
    }
L_10064: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_1006c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10070: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10080;
    }
    }
L_10074: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10078: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1007c: {//jal_check
    goto L_100cc;
    }
L_10080: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10088: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10090: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10094: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10098: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_1009c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a0: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100a4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a8: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100ac: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100b0: {//bne_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100c0;
    }
    }
L_100b4: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100b8: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100bc: {//jal_check
    goto L_100cc;
    }
L_100c0: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100c4: {//jal_check
    goto L_100cc;
    }
L_100c8: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100cc: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100d0: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100d4: {//ld_check
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_100d8: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_100dc: {//jalr_check
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
