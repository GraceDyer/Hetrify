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
extern int check(char, char, char, char, char, char, char);



/*******************    Function: check   *********************/
int check(char arg0, char arg1, char arg2, char arg3, char arg4, char arg5, char arg6){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
    c->gp_regs[a2]=arg2;
    c->gp_regs[a3]=arg3;
    c->gp_regs[a4]=arg4;
    c->gp_regs[a5]=arg5;
    c->gp_regs[a6]=arg6;
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
    c->gp_regs[6] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_check
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[17] = rs1 + (int64_t)0LL;
    }
L_10014: {//addi_check
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10018: {//addi_check
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_1001c: {//addi_check
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[12] = rs1 + (int64_t)0LL;
    }
L_10020: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[13] = rs1 + (int64_t)0LL;
    }
L_10024: {//addi_check
    uint64_t rs1 = c->gp_regs[16];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10028: {//addi_check
    uint64_t rs1 = c->gp_regs[6];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1002c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-33LL) = (uint8_t)rs2;
    }
L_10030: {//addi_check
    uint64_t rs1 = c->gp_regs[17];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10034: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-34LL) = (uint8_t)rs2;
    }
L_10038: {//addi_check
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1003c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-35LL) = (uint8_t)rs2;
    }
L_10040: {//addi_check
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10044: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-36LL) = (uint8_t)rs2;
    }
L_10048: {//addi_check
    uint64_t rs1 = c->gp_regs[12];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1004c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-37LL) = (uint8_t)rs2;
    }
L_10050: {//addi_check
    uint64_t rs1 = c->gp_regs[13];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10054: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-38LL) = (uint8_t)rs2;
    }
L_10058: {//addi_check
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1005c: {//sb_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint8_t *)(rs1 + (int64_t)-39LL) = (uint8_t)rs2;
    }
L_10060: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10064: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10068: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_1006c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10070: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10074: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10078: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10080: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10084: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10088: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1008c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10090: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10268;
    }
    }
L_10094: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1009c: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-37LL);
    c->gp_regs[15] = rd;
    }
L_100a0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a4: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100a8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100ac: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b0: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100b4: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10260;
    }
    }
L_100b8: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c0: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-38LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c8: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100cc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d0: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100d4: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100d8: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10258;
    }
    }
L_100dc: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e4: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-39LL);
    c->gp_regs[15] = rd;
    }
L_100e8: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100ec: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100f0: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f4: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100f8: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100fc: {//blt_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_10250;
    }
    }
L_10100: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10104: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10108: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1010c: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10140;
    }
    }
L_10110: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10118: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_1011c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10120: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10124: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10128: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_1012c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10130: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10134: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10138: {//bne_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10248;
    }
    }
L_1013c: {//jal_check
    goto L_10144;
    }
L_10140: {//addi_check
    uint64_t rs1 = 0;
    }
L_10144: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10148: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_1014c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10150: {//bgeu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_1018c;
    }
    }
L_10154: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-33LL);
    c->gp_regs[15] = rd;
    }
L_10158: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1015c: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-34LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10164: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10168: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1016c: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-35LL);
    c->gp_regs[15] = rd;
    }
L_10170: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10174: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10178: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1017c: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10180: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10184: {//bne_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10240;
    }
    }
L_10188: {//jal_check
    goto L_10190;
    }
L_1018c: {//addi_check
    uint64_t rs1 = 0;
    }
L_10190: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10194: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_10198: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1019c: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_101d0;
    }
    }
L_101a0: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-37LL);
    c->gp_regs[15] = rd;
    }
L_101a4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101a8: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-38LL);
    c->gp_regs[15] = rd;
    }
L_101ac: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101b0: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_101b4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101b8: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-39LL);
    c->gp_regs[15] = rd;
    }
L_101bc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101c0: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_101c4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101c8: {//bne_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10238;
    }
    }
L_101cc: {//jal_check
    goto L_101d4;
    }
L_101d0: {//addi_check
    uint64_t rs1 = 0;
    }
L_101d4: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_101d8: {//andi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 & 255ULL;
    }
L_101dc: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101e0: {//bltu_check
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_101f0;
    }
    }
L_101e4: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101e8: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_101ec: {//jal_check
    goto L_1026c;
    }
L_101f0: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-37LL);
    c->gp_regs[15] = rd;
    }
L_101f4: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101f8: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-38LL);
    c->gp_regs[15] = rd;
    }
L_101fc: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10200: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10204: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10208: {//lbu_check
    uint64_t rs1 = c->gp_regs[8];
    uint8_t rd = *(uint8_t *)(rs1 + (int64_t)-39LL);
    c->gp_regs[15] = rd;
    }
L_1020c: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10210: {//addw_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_10214: {//addiw_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10218: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1021c: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10220: {//bne_check
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10230;
    }
    }
L_10224: {//addi_check
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10228: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1022c: {//jal_check
    goto L_1026c;
    }
L_10230: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10234: {//jal_check
    goto L_1026c;
    }
L_10238: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1023c: {//jal_check
    goto L_1026c;
    }
L_10240: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10244: {//jal_check
    goto L_1026c;
    }
L_10248: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1024c: {//jal_check
    goto L_1026c;
    }
L_10250: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10254: {//jal_check
    goto L_1026c;
    }
L_10258: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1025c: {//jal_check
    goto L_1026c;
    }
L_10260: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10264: {//jal_check
    goto L_1026c;
    }
L_10268: {//sw_check
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1026c: {//lw_check
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10270: {//addi_check
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10274: {//ld_check
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10278: {//addi_check
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_1027c: {//jalr_check
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
