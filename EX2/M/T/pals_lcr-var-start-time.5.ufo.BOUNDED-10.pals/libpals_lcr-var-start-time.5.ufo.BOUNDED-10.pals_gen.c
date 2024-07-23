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
char nomsg = 255;
char r1 = 0;
int p1 = 0;
char p1_old = 0;
char p1_new = 0;
char id1 = 0;
char st1 = 0;
char send1 = 0;
_Bool mode1 = 0;
_Bool alive1 = 0;
int p2 = 0;
char p2_old = 0;
char p2_new = 0;
char id2 = 0;
char st2 = 0;
char send2 = 0;
_Bool mode2 = 0;
_Bool alive2 = 0;
int p3 = 0;
char p3_old = 0;
char p3_new = 0;
char id3 = 0;
char st3 = 0;
char send3 = 0;
_Bool mode3 = 0;
_Bool alive3 = 0;
int p4 = 0;
char p4_old = 0;
char p4_new = 0;
char id4 = 0;
char st4 = 0;
char send4 = 0;
_Bool mode4 = 0;
_Bool alive4 = 0;
int p5 = 0;
char p5_old = 0;
char p5_new = 0;
char id5 = 0;
char st5 = 0;
char send5 = 0;
_Bool mode5 = 0;
_Bool alive5 = 0;
extern int check();



/*******************    Function: check   *********************/
int check(){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
L_10000: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_check
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10008: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_1000c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st1);
    c->gp_regs[15] = rd;
    }
L_10014: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10018: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_1001c: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st2);
    c->gp_regs[15] = rd;
    }
L_10020: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10024: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10028: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1002c: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10030: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st3);
    c->gp_regs[15] = rd;
    }
L_10034: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10038: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_1003c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10040: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10044: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st4);
    c->gp_regs[15] = rd;
    }
L_10048: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1004c: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10050: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10054: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10058: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st5);
    c->gp_regs[15] = rd;
    }
L_1005c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10060: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10064: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1006c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10070: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10110;
    }
    }
L_10074: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10078: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&r1);
    c->gp_regs[15] = rd;
    }
L_1007c: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10080: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_10084: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10094;
    }
    }
L_10088: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1008c: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10090: {//jal_check
    goto L_10114;
    }
L_10094: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_10098: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st1);
    c->gp_regs[15] = rd;
    }
L_1009c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a0: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_100a4: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st2);
    c->gp_regs[15] = rd;
    }
L_100a8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100ac: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100b0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b4: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_100b8: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st3);
    c->gp_regs[15] = rd;
    }
L_100bc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c0: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100c4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_100cc: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st4);
    c->gp_regs[15] = rd;
    }
L_100d0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d4: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100d8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100dc: {//lui_check
    c->gp_regs[15] = 65536LL;
    }
L_100e0: {//lbu_check
    uint64_t rs1 = c->gp_regs[15];
    uint8_t rd = *(uint8_t *)(&st5);
    c->gp_regs[15] = rd;
    }
L_100e4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e8: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100ec: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f0: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100f4: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100f8: {//bne_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10108;
    }
    }
L_100fc: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10100: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10104: {//jal_check
    goto L_10114;
    }
L_10108: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1010c: {//jal_check
    goto L_10114;
    }
L_10110: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10114: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10118: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1011c: {//ld_check
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10120: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10124: {//jalr_check
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
