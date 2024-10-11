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
int assert_ret = 1;
int assert_ret1 = 1;
extern void panic(cpu_t *c);
extern void fib(cpu_t *c);
extern int32_t start(cpu_t *c);



/*******************    Function: main   *********************/
int32_t start(cpu_t *c) { 
L_1003c: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-16LL;
    }
L_1003e: {//sd_main
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_10040: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[10] = rs1 + (int64_t)6LL;
    }
L_10042: {//auipc_main
    c->gp_regs[1] = 65602LL;
    }
L_10046: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
    c->gp_regs[1] = 65610LL;
    fib(c);
    }
L_1004a: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[11] = rs1 + (int64_t)8LL;
    }
L_1004c: {//bne_main
    uint64_t rs1 = c->gp_regs[10];
    uint64_t rs2 = c->gp_regs[11];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1005c;
    }
    }
L_10050: {//addi_main
    uint64_t rs1 = 0;
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10052: {//auipc_main
    c->gp_regs[11] = 65618LL;
    }
L_10056: {//sw_main
    uint64_t rs1 = c->gp_regs[11];
    uint64_t rs2 = 0;
    *(uint32_t *)(&assert_ret1) = (uint32_t)rs2;
    }
L_1005a: {//jal_main
    goto L_10064;
    }
L_1005c: {//auipc_main
    c->gp_regs[10] = 65628LL;
    }
L_10060: {//lw_main
    uint64_t rs1 = c->gp_regs[10];
    int32_t rd = *(int32_t *)(&assert_ret1);
    c->gp_regs[10] = rd;
    }
L_10064: {//auipc_main
    c->gp_regs[11] = 65636LL;
    }
L_10068: {//sw_main
    uint64_t rs1 = c->gp_regs[11];
    uint64_t rs2 = c->gp_regs[10];
    *(uint32_t *)(&assert_ret) = (uint32_t)rs2;
    }
L_1006c: {//ld_main
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[1] = rd;
    }
L_1006e: {//addi_main
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)16LL;
    }
L_10070: {//jalr_main
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: fib   *********************/
void fib(cpu_t *c) { 
L_10002: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10004: {//sd_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10006: {//sd_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)16LL) = (uint64_t)rs2;
    }
L_10008: {//sd_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[9];
    *(uint64_t *)(rs1 + (int64_t)8LL) = (uint64_t)rs2;
    }
L_1000a: {//sd_fib
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[18];
    *(uint64_t *)(rs1 + (int64_t)0LL) = (uint64_t)rs2;
    }
L_1000c: {//addi_fib
    uint64_t rs1 = 0;
    c->gp_regs[11] = rs1 + (int64_t)2LL;
    }
L_1000e: {//add_fib
    uint64_t rs1 = 0;
    uint64_t rs2 = c->gp_regs[10];
    c->gp_regs[8] = rs1 + rs2;
    }
L_10010: {//addi_fib
    uint64_t rs1 = 0;
    c->gp_regs[9] = rs1 + (int64_t)0LL;
    }
L_10012: {//bltu_fib
    uint64_t rs1 = c->gp_regs[10];
    uint64_t rs2 = c->gp_regs[11];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_1002c;
    }
    }
L_10016: {//addi_fib
    uint64_t rs1 = 0;
    c->gp_regs[18] = rs1 + (int64_t)1LL;
    }
L_10018: {//addi_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[10] = rs1 + (int64_t)-1LL;
    }
L_1001c: {//auipc_fib
    c->gp_regs[1] = 65564LL;
    }
L_10020: {//jalr_fib
    uint64_t rs1 = c->gp_regs[1];
    c->gp_regs[1] = 65572LL;
    fib(c);
    }
L_10024: {//addi_fib
    uint64_t rs1 = c->gp_regs[8];
    c->gp_regs[8] = rs1 + (int64_t)-2LL;
    }
L_10026: {//add_fib
    uint64_t rs1 = c->gp_regs[9];
    uint64_t rs2 = c->gp_regs[10];
    c->gp_regs[9] = rs1 + rs2;
    }
L_10028: {//bltu_fib
    uint64_t rs1 = c->gp_regs[18];
    uint64_t rs2 = c->gp_regs[8];
    if ((uint64_t)rs1 < (uint64_t)rs2) {
        goto L_10018;
    }
    }
L_1002c: {//add_fib
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[9];
    c->gp_regs[10] = rs1 + rs2;
    }
L_10030: {//ld_fib
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[1] = rd;
    }
L_10032: {//ld_fib
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)16LL);
    c->gp_regs[8] = rd;
    }
L_10034: {//ld_fib
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)8LL);
    c->gp_regs[9] = rd;
    }
L_10036: {//ld_fib
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)0LL);
    c->gp_regs[18] = rd;
    }
L_10038: {//addi_fib
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_1003a: {//jalr_fib
    uint64_t rs1 = c->gp_regs[1];
    }
}



/*******************    Function: panic   *********************/
void panic(cpu_t *c) { 
L_10000: {//jal_panic
    goto L_10000;
    }
}
#define STACK_SIZE 80
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
	assert(assert_ret == 1);
	assert(assert_ret1 == 1);



    /************************************************************************************************************/
    return 0;                               
}                                      
