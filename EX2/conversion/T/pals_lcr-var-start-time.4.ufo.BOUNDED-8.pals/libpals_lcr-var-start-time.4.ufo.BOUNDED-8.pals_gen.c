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
extern void do_alive(_Bool, char*, char*, char*, char, _Bool*);



/*******************    Function: do_alive   *********************/
void do_alive(_Bool arg0, char* arg1, char* arg2, char* arg3, char arg4, _Bool* arg5){
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
L_10000: {//addi_do_alive
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10004: {//sd_do_alive
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_10008: {//addi_do_alive
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_1000c: {//sd_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10010: {//sd_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10014: {//sd_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10018: {//sd_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-56LL) = (uint64_t)rs2;
    }
L_1001c: {//addi_do_alive
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10020: {//sb_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10024: {//addi_do_alive
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10028: {//sb_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-18LL) = (uint8_t)rs2;
    }
L_1002c: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_10030: {//andi_do_alive
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10034: {//beq_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10080;
    }
    }
L_10038: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10040: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-18LL);
    c->gp_regs[15] = rd;
    }
L_10044: {//andi_do_alive
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10048: {//beq_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_1006c;
    }
    }
L_1004c: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10054: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-18LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//andi_do_alive
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1005c: {//bne_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1006c;
    }
    }
L_10060: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//jal_do_alive
    goto L_10074;
    }
L_1006c: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10070: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10074: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10078: {//sb_do_alive
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_1007c: {//jal_do_alive
    goto L_100d8;
    }
L_10080: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10088: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10090: {//beq_do_alive
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100d8;
    }
    }
L_10094: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_1009c: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-18LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//andi_do_alive
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100a4: {//beq_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100c8;
    }
    }
L_100a8: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100ac: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_100b0: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-18LL);
    c->gp_regs[15] = rd;
    }
L_100b4: {//andi_do_alive
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100b8: {//bne_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100c8;
    }
    }
L_100bc: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100c0: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//jal_do_alive
    goto L_100d0;
    }
L_100c8: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100cc: {//lbu_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100d0: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_100d4: {//sb_do_alive
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_100d8: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_100dc: {//addi_do_alive
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100e0: {//sb_do_alive
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_100e4: {//addi_do_alive
    uint64_t rs1 = 0;
    }
L_100e8: {//ld_do_alive
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[8] = rd;
    }
L_100ec: {//addi_do_alive
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_100f0: {//jalr_do_alive
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
