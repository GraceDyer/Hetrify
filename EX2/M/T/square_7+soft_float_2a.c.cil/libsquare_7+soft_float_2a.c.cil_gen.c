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
extern unsigned int mulflt(unsigned int, unsigned int);



/*******************    Function: mulflt   *********************/
unsigned int mulflt(unsigned int arg0, unsigned int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[96];
    c->gp_regs[sp]=(uint64_t)&stack[96-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10000: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-80LL;
    }
L_10004: {//sd_mulflt
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)72LL) = (uint64_t)rs2;
    }
L_10008: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)80LL;
    }
L_1000c: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10014: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-68LL) = (uint32_t)rs2;
    }
L_10018: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1001c: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-72LL) = (uint32_t)rs2;
    }
L_10020: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-68LL);
    c->gp_regs[15] = rd;
    }
L_10024: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10028: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_1002c: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10030: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10034: {//bgeu_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 >= (uint64_t)rs2) {
        goto L_10050;
    }
    }
L_10038: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-68LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10040: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_10044: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-68LL) = (uint32_t)rs2;
    }
L_10048: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_1004c: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-72LL) = (uint32_t)rs2;
    }
L_10050: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_10054: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10058: {//bne_mulflt
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10064;
    }
    }
L_1005c: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10060: {//jal_mulflt
    goto L_10208;
    }
L_10064: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-68LL);
    c->gp_regs[15] = rd;
    }
L_10068: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1006c: {//lui_mulflt
    c->gp_regs[15] = 16777216LL;
    }
L_10070: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10074: {//and_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & rs2;
    }
L_10078: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_1007c: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-68LL);
    c->gp_regs[15] = rd;
    }
L_10080: {//srliw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)((uint32_t)rs1 >> 24);
    }
L_10084: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10088: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1008c: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-128LL);
    }
L_10090: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10094: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1009c: {//lui_mulflt
    c->gp_regs[15] = 16777216LL;
    }
L_100a0: {//or_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 | rs2;
    }
L_100a4: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_100a8: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_100ac: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100b0: {//lui_mulflt
    c->gp_regs[15] = 16777216LL;
    }
L_100b4: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_100b8: {//and_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & rs2;
    }
L_100bc: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_100c0: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-72LL);
    c->gp_regs[15] = rd;
    }
L_100c4: {//srliw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)((uint32_t)rs1 >> 24);
    }
L_100c8: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100cc: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d0: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-128LL);
    }
L_100d4: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-48LL) = (uint32_t)rs2;
    }
L_100d8: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_100dc: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100e0: {//lui_mulflt
    c->gp_regs[15] = 16777216LL;
    }
L_100e4: {//or_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 | rs2;
    }
L_100e8: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-44LL) = (uint32_t)rs2;
    }
L_100ec: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_100f0: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100f4: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100f8: {//addw_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + rs2);
    }
L_100fc: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10100: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10104: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)24LL);
    }
L_10108: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_1010c: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10110: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10114: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)127LL;
    }
L_10118: {//bge_mulflt
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10128;
    }
    }
L_1011c: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10120: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10124: {//jal_mulflt
    goto L_10208;
    }
L_10128: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_1012c: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10130: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-128LL;
    }
L_10134: {//bge_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10140;
    }
    }
L_10138: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_1013c: {//jal_mulflt
    goto L_10208;
    }
L_10140: {//lwu_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10144: {//sd_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10148: {//lwu_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_1014c: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10150: {//mul_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_10154: {//sd_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10158: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1015c: {//srli_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 24;
    }
L_10160: {//sd_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10164: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10168: {//lui_mulflt
    c->gp_regs[15] = 33554432LL;
    }
L_1016c: {//bltu_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_101bc;
    }
    }
L_10170: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10174: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10178: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)127LL;
    }
L_1017c: {//bne_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1018c;
    }
    }
L_10180: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_10184: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10188: {//jal_mulflt
    goto L_10208;
    }
L_1018c: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_10190: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10194: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10198: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1019c: {//srli_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 1;
    }
L_101a0: {//sd_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_101a4: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_101a8: {//lui_mulflt
    c->gp_regs[15] = 33554432LL;
    }
L_101ac: {//bltu_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_101bc;
    }
    }
L_101b0: {//addi_mulflt
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_101b4: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_101b8: {//jal_mulflt
    goto L_10208;
    }
L_101bc: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_101c0: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_101c4: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_101c8: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_101cc: {//lui_mulflt
    c->gp_regs[15] = -16777216LL;
    }
L_101d0: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_101d4: {//and_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & rs2;
    }
L_101d8: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-40LL) = (uint32_t)rs2;
    }
L_101dc: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_101e0: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)128LL);
    }
L_101e4: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101e8: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101ec: {//slliw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 << 24);
    }
L_101f0: {//addiw_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101f4: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_101f8: {//or_mulflt
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 | rs2;
    }
L_101fc: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-52LL) = (uint32_t)rs2;
    }
L_10200: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_10204: {//sw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10208: {//lw_mulflt
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_1020c: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10210: {//ld_mulflt
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)72LL);
    c->gp_regs[8] = rd;
    }
L_10214: {//addi_mulflt
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)80LL;
    }
L_10218: {//jalr_mulflt
    uint64_t rs1 = c->gp_regs[1];
    return (unsigned int)c->gp_regs[a0];
    }
}
