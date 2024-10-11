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
int counter = 0;
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
        goto L_10050;
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
L_10054: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[1] = rd;
    }
L_10058: {//ld___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)16LL);
    c->gp_regs[8] = rd;
    }
L_1005c: {//addi___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10060: {//jalr___VERIFIER_assert
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_10064: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-64LL;
    }
L_10068: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)56LL) = (uint64_t)rs2;
    }
L_1006c: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)48LL) = (uint64_t)rs2;
    }
L_10070: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)64LL;
    }
L_10074: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_10078: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1007c: {//beq_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = 0;
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10288;
    }
    }
L_10080: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_10084: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10088: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10090: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10094: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10098: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_1009c: {//jal_main
    goto L_10124;
    }
L_100a0: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100a4: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_100a8: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100ac: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100b0: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100b4: {//jal_main
    c->gp_regs[1] = 65720LL;
    __VERIFIER_assert(c);
    }
L_100b8: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100c0: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_100c4: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_100c8: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100cc: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100d0: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100d4: {//jal_main
    c->gp_regs[1] = 65752LL;
    __VERIFIER_assert(c);
    }
L_100d8: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[14] = rd;
    }
L_100dc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100e0: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_100e4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_100e8: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_100ec: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_100f0: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100f4: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100f8: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100fc: {//jal_main
    c->gp_regs[1] = 65792LL;
    __VERIFIER_assert(c);
    }
L_10100: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10104: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10108: {//blt_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1014c;
    }
    }
L_1010c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_10110: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10114: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10118: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_1011c: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 1;
    }
L_10120: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_10124: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_10128: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&counter);
    c->gp_regs[15] = rd;
    }
L_1012c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10130: {//addiw_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10134: {//lui_main
    c->gp_regs[14] = 65536LL;
    }
L_10138: {//sw_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(&counter) = (uint32_t)rs2;
    }
L_1013c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10140: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_10144: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_100a0;
    }
    }
L_10148: {//jal_main
    goto L_1020c;
    }
L_1014c: {//addi_main
    uint64_t rs1 = 0;
    }
L_10150: {//jal_main
    goto L_1020c;
    }
L_10154: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[14] = rd;
    }
L_10158: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[13] = rd;
    }
L_1015c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//mul_main
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[13] = rs1 * rs2;
    }
L_10164: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10168: {//add_main
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_1016c: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10170: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_10174: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10178: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1017c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10180: {//jal_main
    c->gp_regs[1] = 65924LL;
    __VERIFIER_assert(c);
    }
L_10184: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[14] = rd;
    }
L_10188: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_1018c: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_10190: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10194: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10198: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_1019c: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_101a0: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101a4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101a8: {//jal_main
    c->gp_regs[1] = 65964LL;
    __VERIFIER_assert(c);
    }
L_101ac: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_101b0: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101b4: {//beq_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 == (uint64_t)rs2) {
        goto L_10234;
    }
    }
L_101b8: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_101bc: {//srli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 >> 63;
    }
L_101c0: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101c4: {//srai_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)rs1 >> 1;
    }
L_101c8: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_101cc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_101d0: {//srli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 >> 63;
    }
L_101d4: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_101d8: {//srai_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)rs1 >> 1;
    }
L_101dc: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_101e0: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_101e4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_101e8: {//blt_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_1020c;
    }
    }
L_101ec: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_101f0: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_101f4: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_101f8: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_101fc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[14] = rd;
    }
L_10200: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_10204: {//add_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10208: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-48LL) = (uint64_t)rs2;
    }
L_1020c: {//lui_main
    c->gp_regs[15] = 65536LL;
    }
L_10210: {//lw_main
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&counter);
    c->gp_regs[15] = rd;
    }
L_10214: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10218: {//addiw_main
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[13] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1021c: {//lui_main
    c->gp_regs[14] = 65536LL;
    }
L_10220: {//sw_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[13];
    *(uint32_t *)(&counter) = (uint32_t)rs2;
    }
L_10224: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10228: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)4LL;
    }
L_1022c: {//bge_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10154;
    }
    }
L_10230: {//jal_main
    goto L_10238;
    }
L_10234: {//addi_main
    uint64_t rs1 = 0;
    }
L_10238: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-56LL);
    c->gp_regs[14] = rd;
    }
L_1023c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[13] = rd;
    }
L_10240: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_10244: {//mul_main
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[13] = rs1 * rs2;
    }
L_10248: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1024c: {//add_main
    uint64_t rs1 = c->gp_regs[13];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + rs2;
    }
L_10250: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10254: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_10258: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1025c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10260: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10264: {//jal_main
    c->gp_regs[1] = 66152LL;
    __VERIFIER_assert(c);
    }
L_10268: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-52LL);
    c->gp_regs[15] = rd;
    }
L_1026c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10270: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10274: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_10278: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_1027c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10280: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10284: {//jal_main
    c->gp_regs[1] = 66184LL;
    __VERIFIER_assert(c);
    }
L_10288: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1028c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10290: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)56LL);
    c->gp_regs[1] = rd;
    }
L_10294: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)48LL);
    c->gp_regs[8] = rd;
    }
L_10298: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)64LL;
    }
L_1029c: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
L_end:
    return 0;
    }
}
#define STACK_SIZE 144
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
