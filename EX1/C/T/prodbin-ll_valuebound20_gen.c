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
int assert_ret1 = 1;
extern int32_t start(cpu_t *c);
extern void __VERIFIER_assert(cpu_t *c);
extern void reach_error(cpu_t *c);



/*******************    Function: reach_error   *********************/
void reach_error(cpu_t *c) { 
L_10000: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_10004: {//sd_reach_error
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10008: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)16LL;
    }
L_1000c: {//lui_reach_error
    c->gp_regs[15] = 65536LL;
    }
L_10010: {//sw_reach_error
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    *(uint32_t *)(&assert_ret1) = (uint32_t)rs2;
    }
L_10014: {//addi_reach_error
    uint64_t rs1 = 0;
    }
L_10018: {//ld_reach_error
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[8] = rd;
    }
L_1001c: {//addi_reach_error
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10020: {//jalr_reach_error
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: __VERIFIER_assert   *********************/
void __VERIFIER_assert(cpu_t *c) { 
L_10024: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10028: {//sd___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_1002c: {//sd___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)16LL) = (uint64_t)rs2;
    }
L_10030: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10034: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10038: {//sw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1003c: {//lw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10040: {//addiw___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10044: {//bne___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10054;
    }
    }
L_10048: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_1004c: {//jal___VERIFIER_assert
    c->gp_regs[1] = 65616LL;
    reach_error(c);
    }
L_10050: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_10054: {//addi___VERIFIER_assert
    uint64_t rs1 = 0;
    }
L_10058: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[1] = rd;
    }
L_1005c: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)16LL);
    c->gp_regs[8] = rd;
    }
L_10060: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10064: {//jalr___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_10068: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_1006c: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10070: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)32LL) = (uint64_t)rs2;
    }
L_10074: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10078: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10080: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_10084: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1008c: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)20LL;
    }
L_10090: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_10094: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10098: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1009c: {//bge_main
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_100a0: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100a4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100a8: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_100ac: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100b0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b4: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)20LL;
    }
L_100b8: {//blt_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_100bc: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_100c0: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_100c4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100c8: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_100cc: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_100d0: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100d4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100d8: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 * rs2;
    }
L_100dc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + rs2;
    }
L_100e4: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[13] = rd;
    }
L_100e8: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100ec: {//mul_main
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_100f0: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_100f4: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_100f8: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100fc: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10100: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10104: {//jal_main
    c->gp_regs[1] = 65800LL;
    __VERIFIER_assert(c);
    }
L_10108: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_1010c: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10174;
    }
    }
L_10110: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10114: {//srai_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = (int64_t)rs1 >> 63;
    }
L_10118: {//srli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 63;
    }
L_1011c: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + rs2;
    }
L_10120: {//andi_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[14] = rs1 & 1ULL;
    }
L_10124: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10128: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_1012c: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10130: {//bne_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10150;
    }
    }
L_10134: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10138: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1013c: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10140: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10144: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10148: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_1014c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10150: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10154: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10158: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_1015c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//srli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 >> 63;
    }
L_10164: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10168: {//srai_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)rs1 >> 1;
    }
L_1016c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10170: {//jal_main
    goto L_100d0;
    }
L_10174: {//addi_main
    uint64_t rs1 = 0;
    }
L_10178: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[14] = rd;
    }
L_1017c: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10180: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_10184: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_10188: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_1018c: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_10190: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10194: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10198: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1019c: {//jal_main
    c->gp_regs[1] = 65952LL;
    __VERIFIER_assert(c);
    }
L_101a0: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101a4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101a8: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[1] = rd;
    }
L_101ac: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)32LL);
    c->gp_regs[8] = rd;
    }
L_101b0: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_101b4: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
L_end:
    return 0;
    }
}
#define STACK_SIZE 128
int32_t main() {                                     
    cpu_t cpu;                                 
    cpu_t *c=&cpu;                                 
    char stack[STACK_SIZE];                          
    char *stack_top=&stack[STACK_SIZE-1];                  
    c->gp_regs[2]=(uint64_t)stack_top;                
    c->gp_regs[0]= 0;                                     
    /**************Pls input your assume expr, setting the args by the pointers of args (p_arg0 ~ p_arg7)*************/ 



    /****************************************************************************************************************/
    start(c);                     
    uint64_t ret= cpu.gp_regs[a0];                      
    /************************************************ Pls input your assert expr ********************************/
	assert(assert_ret1 == 1);



    /************************************************************************************************************/
    return 0;                               
}                                      
