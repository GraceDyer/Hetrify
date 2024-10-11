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
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10080: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)5LL;
    }
L_10084: {//bltu_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_1016c;
    }
    }
L_10088: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_1008c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10090: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)5LL;
    }
L_10094: {//bltu_main
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_1016c;
    }
    }
L_10098: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1009c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_100a0: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_100a4: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_100a8: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100ac: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_100b0: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[14] = rd;
    }
L_100b4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100b8: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 * rs2;
    }
L_100bc: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_100c0: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[14] = rs1 - rs2;
    }
L_100c4: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[15] = rd;
    }
L_100c8: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_100cc: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100d0: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_100d4: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_100d8: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100dc: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_100e0: {//jal_main
    c->gp_regs[1] = 65764LL;
    __VERIFIER_assert(c);
    }
L_100e4: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-48LL);
    c->gp_regs[15] = rd;
    }
L_100e8: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[14] = rd;
    }
L_100ec: {//bge_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((int64_t)rs1 >= (int64_t)rs2) {
        goto L_10124;
    }
    }
L_100f0: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-40LL);
    c->gp_regs[15] = rd;
    }
L_100f4: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100f8: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-40LL) = (uint64_t)rs2;
    }
L_100fc: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[14] = rd;
    }
L_10100: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10104: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_10108: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_1010c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10110: {//lwu_main
    uint64_t rs1 = c->gp_regs[8];
    uint32_t rd = *(uint32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_10114: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10118: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_1011c: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-32LL) = (uint64_t)rs2;
    }
L_10120: {//jal_main
    goto L_100b0;
    }
L_10124: {//addi_main
    uint64_t rs1 = 0;
    }
L_10128: {//lw_main
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-44LL);
    c->gp_regs[15] = rd;
    }
L_1012c: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)-1LL);
    }
L_10130: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10134: {//slli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 << 32;
    }
L_10138: {//srli_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 >> 32;
    }
L_1013c: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10140: {//mul_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 * rs2;
    }
L_10144: {//sd_main
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint64_t *)(rs1 + (int64_t)-24LL) = (uint64_t)rs2;
    }
L_10148: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_1014c: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10150: {//ld_main
    uint64_t rs1 = c->gp_regs[8];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_10154: {//sub_main
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    c->gp_regs[15] = rs1 - rs2;
    }
L_10158: {//sltiu_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 < 1ULL ? 1 : 0;
    }
L_1015c: {//andi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = rs1 & 255ULL;
    }
L_10160: {//addiw_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10164: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10168: {//jal_main
    c->gp_regs[1] = 65900LL;
    __VERIFIER_assert(c);
    }
L_1016c: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10170: {//addi_main
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10174: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[1] = rd;
    }
L_10178: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)32LL);
    c->gp_regs[8] = rd;
    }
L_1017c: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10180: {//jalr_main
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
