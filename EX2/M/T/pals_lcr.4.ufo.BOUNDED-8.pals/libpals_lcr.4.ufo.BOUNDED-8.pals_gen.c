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
extern void node4(char, _Bool*, char*, char*, char*, char*, char*);



/*******************    Function: node4   *********************/
void node4(char arg0, _Bool* arg1, char* arg2, char* arg3, char* arg4, char* arg5, char* arg6){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[112];
    c->gp_regs[sp]=(uint64_t)&stack[112-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
    c->gp_regs[a4]=arg4;
    c->gp_regs[a5]=arg5;
    c->gp_regs[a6]=arg6;
L_10000: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-96LL;
    }
L_10004: {//sd_node4
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)88LL) = (uint64_t)rs2;
    }
L_10008: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)96LL;
    }
L_1000c: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[11];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_10010: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[12];
    *(uint64_t *)(rs1 + (int64_t)-56LL) = (uint64_t)rs2;
    }
L_10014: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[13];
    *(uint64_t *)(rs1 + (int64_t)-64LL) = (uint64_t)rs2;
    }
L_10018: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[14];
    *(uint64_t *)(rs1 + (int64_t)-72LL) = (uint64_t)rs2;
    }
L_1001c: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-80LL) = (uint64_t)rs2;
    }
L_10020: {//sd_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[16];
    *(uint64_t *)(rs1 + (int64_t)-88LL) = (uint64_t)rs2;
    }
L_10024: {//addi_node4
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10028: {//sb_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-33LL) = (uint8_t)rs2;
    }
L_1002c: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10030: {//sb_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_10034: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10038: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//beq_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100c0;
    }
    }
L_10040: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_10044: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_10048: {//sb_node4
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-17LL) = (uint8_t)rs2;
    }
L_1004c: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_10050: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[14] = rd;
    }
L_10054: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10058: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_1005c: {//addi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10060: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//andi_node4
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10068: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1006c: {//beq_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100b4;
    }
    }
L_10070: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-64LL);
    c->gp_regs[15] = rd;
    }
L_10074: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_10078: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10080: {//bgeu_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10094;
    }
    }
L_10084: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[14] = rd;
    }
L_1008c: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10090: {//jal_node4
    goto L_100b4;
    }
L_10094: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-64LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_1009c: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-17LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100a4: {//bne_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100b4;
    }
    }
L_100a8: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-80LL);
    c->gp_regs[15] = rd;
    }
L_100ac: {//addi_node4
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_100b0: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_100b4: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100b8: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_100bc: {//jal_node4
    goto L_10114;
    }
L_100c0: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_100c8: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_100cc: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100d0: {//beq_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_100f4;
    }
    }
L_100d4: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-88LL);
    c->gp_regs[15] = rd;
    }
L_100d8: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[14] = rd;
    }
L_100dc: {//lbu_node4
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//andi_node4
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100e4: {//bne_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f4;
    }
    }
L_100e8: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_100ec: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100f0: {//jal_node4
    goto L_100fc;
    }
L_100f4: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-88LL);
    c->gp_regs[15] = rd;
    }
L_100f8: {//lbu_node4
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[15] = rd;
    }
L_100fc: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-88LL);
    c->gp_regs[14] = rd;
    }
L_10100: {//sb_node4
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10104: {//ld_node4
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10108: {//addi_node4
    uint64_t rs1 = 0;
    c->gp_regs[14] = rs1 + (int64_t)1LL;
    }
L_1010c: {//sb_node4
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint8_t *)(rs1 + (int64_t)0LL) = (uint8_t)rs2;
    }
L_10110: {//addi_node4
    uint64_t rs1 = 0;
    }
L_10114: {//ld_node4
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)88LL);
    c->gp_regs[8] = rd;
    }
L_10118: {//addi_node4
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)96LL;
    }
L_1011c: {//jalr_node4
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
