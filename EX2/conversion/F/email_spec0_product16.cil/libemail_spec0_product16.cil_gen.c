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
int __ste_ClientKeyring_size0 = 0;
int __ste_ClientKeyring_size1 = 0;
int __ste_ClientKeyring_size2 = 0;
int __ste_email_id0 = 0;
int __ste_email_id1 = 0;
int __ste_client_idCounter0 = 0;
int __ste_client_idCounter1 = 0;
int __ste_client_idCounter2 = 0;
extern void setClientId(int, int);
extern int getClientId(int);
extern void setEmailId(int, int);
extern int getEmailId(int);
extern int createClientKeyringEntry(int);
extern void setClientKeyringSize(int, int);
extern int getClientKeyringSize(int);



/*******************    Function: getClientKeyringSize   *********************/
int getClientKeyringSize(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10014: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10018: {//addiw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1001c: {//addi_getClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//bne_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10038;
    }
    }
L_10024: {//lui_getClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientKeyring_size0);
    c->gp_regs[15] = rd;
    }
L_1002c: {//sw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10030: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//jal_getClientKeyringSize
    goto L_10088;
    }
L_10038: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addiw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10040: {//addi_getClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10044: {//bne_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1005c;
    }
    }
L_10048: {//lui_getClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_1004c: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientKeyring_size1);
    c->gp_regs[15] = rd;
    }
L_10050: {//sw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10054: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//jal_getClientKeyringSize
    goto L_10088;
    }
L_1005c: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10060: {//addiw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10064: {//addi_getClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10068: {//bne_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10080;
    }
    }
L_1006c: {//lui_getClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_10070: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientKeyring_size2);
    c->gp_regs[15] = rd;
    }
L_10074: {//sw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10078: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//jal_getClientKeyringSize
    goto L_10088;
    }
L_10080: {//sw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10084: {//lw_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addi_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1008c: {//ld_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10090: {//addi_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10094: {//jalr_getClientKeyringSize
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: setClientKeyringSize   *********************/
void setClientKeyringSize(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10098: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_1009c: {//sd_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_100a0: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_100a4: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100a8: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100ac: {//sw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100b0: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100b4: {//sw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_100b8: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//addiw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c0: {//addi_setClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100c4: {//bne_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100d8;
    }
    }
L_100c8: {//lui_setClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_100cc: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100d0: {//sw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientKeyring_size0) = (uint32_t)rs2;
    }
L_100d4: {//jal_setClientKeyringSize
    goto L_10118;
    }
L_100d8: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100dc: {//addiw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e0: {//addi_setClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_100e4: {//bne_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f8;
    }
    }
L_100e8: {//lui_setClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_100ec: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100f0: {//sw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientKeyring_size1) = (uint32_t)rs2;
    }
L_100f4: {//jal_setClientKeyringSize
    goto L_10118;
    }
L_100f8: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100fc: {//addiw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10100: {//addi_setClientKeyringSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10104: {//bne_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10118;
    }
    }
L_10108: {//lui_setClientKeyringSize
    c->gp_regs[15] = 65536LL;
    }
L_1010c: {//lw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10110: {//sw_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientKeyring_size2) = (uint32_t)rs2;
    }
L_10114: {//addi_setClientKeyringSize
    uint64_t rs1 = 0;
    }
L_10118: {//addi_setClientKeyringSize
    uint64_t rs1 = 0;
    }
L_1011c: {//ld_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10120: {//addi_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10124: {//jalr_setClientKeyringSize
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: createClientKeyringEntry   *********************/
int createClientKeyringEntry(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10128: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_1012c: {//sd_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10130: {//sd_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)32LL) = (uint64_t)rs2;
    }
L_10134: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10138: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1013c: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10140: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10144: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10148: {//jal_createClientKeyringEntry
    c->gp_regs[1] = 65868LL;
    getClientKeyringSize(c->gp_regs[a0]);
    }
L_1014c: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10150: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10154: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10158: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1015c: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//addiw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10164: {//addi_createClientKeyringEntry
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10168: {//blt_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_1016c: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10170: {//addiw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10174: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10178: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_1017c: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10180: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_10184: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10188: {//jal_createClientKeyringEntry
    c->gp_regs[1] = 65932LL;
    setClientKeyringSize(c->gp_regs[a0],c->gp_regs[a1]);
    }
L_1018c: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10190: {//addiw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10194: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10198: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_1019c: {//jal_createClientKeyringEntry
    goto L_101ac;
    }
L_101a0: {//addi_createClientKeyringEntry
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_101a4: {//sw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_101a8: {//lw_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_101ac: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101b0: {//ld_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[1] = rd;
    }
L_101b4: {//ld_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)32LL);
    c->gp_regs[8] = rd;
    }
L_101b8: {//addi_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_101bc: {//jalr_createClientKeyringEntry
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: getEmailId   *********************/
int getEmailId(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_101c0: {//addi_getEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_101c4: {//sd_getEmailId
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_101c8: {//addi_getEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_101cc: {//addi_getEmailId
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_101d0: {//sw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_101d4: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_101d8: {//addiw_getEmailId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_101dc: {//addi_getEmailId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_101e0: {//bne_getEmailId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_101f8;
    }
    }
L_101e4: {//lui_getEmailId
    c->gp_regs[15] = 65536LL;
    }
L_101e8: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_email_id0);
    c->gp_regs[15] = rd;
    }
L_101ec: {//sw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_101f0: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_101f4: {//jal_getEmailId
    goto L_10224;
    }
L_101f8: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_101fc: {//addiw_getEmailId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10200: {//addi_getEmailId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10204: {//bne_getEmailId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1021c;
    }
    }
L_10208: {//lui_getEmailId
    c->gp_regs[15] = 65536LL;
    }
L_1020c: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_email_id1);
    c->gp_regs[15] = rd;
    }
L_10210: {//sw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10214: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10218: {//jal_getEmailId
    goto L_10224;
    }
L_1021c: {//sw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10220: {//lw_getEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10224: {//addi_getEmailId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10228: {//ld_getEmailId
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_1022c: {//addi_getEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10230: {//jalr_getEmailId
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: setEmailId   *********************/
void setEmailId(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10234: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10238: {//sd_setEmailId
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_1023c: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10240: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10244: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10248: {//sw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1024c: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10250: {//sw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_10254: {//lw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10258: {//addiw_setEmailId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1025c: {//addi_setEmailId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10260: {//bne_setEmailId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10274;
    }
    }
L_10264: {//lui_setEmailId
    c->gp_regs[15] = 65536LL;
    }
L_10268: {//lw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_1026c: {//sw_setEmailId
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_email_id0) = (uint32_t)rs2;
    }
L_10270: {//jal_setEmailId
    goto L_10294;
    }
L_10274: {//lw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10278: {//addiw_setEmailId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1027c: {//addi_setEmailId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10280: {//bne_setEmailId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10294;
    }
    }
L_10284: {//lui_setEmailId
    c->gp_regs[15] = 65536LL;
    }
L_10288: {//lw_setEmailId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_1028c: {//sw_setEmailId
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_email_id1) = (uint32_t)rs2;
    }
L_10290: {//addi_setEmailId
    uint64_t rs1 = 0;
    }
L_10294: {//addi_setEmailId
    uint64_t rs1 = 0;
    }
L_10298: {//ld_setEmailId
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_1029c: {//addi_setEmailId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_102a0: {//jalr_setEmailId
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: getClientId   *********************/
int getClientId(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_102a4: {//addi_getClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_102a8: {//sd_getClientId
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_102ac: {//addi_getClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_102b0: {//addi_getClientId
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_102b4: {//sw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_102b8: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_102bc: {//addiw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_102c0: {//addi_getClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_102c4: {//bne_getClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_102dc;
    }
    }
L_102c8: {//lui_getClientId
    c->gp_regs[15] = 65536LL;
    }
L_102cc: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_client_idCounter0);
    c->gp_regs[15] = rd;
    }
L_102d0: {//sw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_102d4: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_102d8: {//jal_getClientId
    goto L_1032c;
    }
L_102dc: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_102e0: {//addiw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_102e4: {//addi_getClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_102e8: {//bne_getClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10300;
    }
    }
L_102ec: {//lui_getClientId
    c->gp_regs[15] = 65536LL;
    }
L_102f0: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_client_idCounter1);
    c->gp_regs[15] = rd;
    }
L_102f4: {//sw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_102f8: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_102fc: {//jal_getClientId
    goto L_1032c;
    }
L_10300: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10304: {//addiw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10308: {//addi_getClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_1030c: {//bne_getClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10324;
    }
    }
L_10310: {//lui_getClientId
    c->gp_regs[15] = 65536LL;
    }
L_10314: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_client_idCounter2);
    c->gp_regs[15] = rd;
    }
L_10318: {//sw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_1031c: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10320: {//jal_getClientId
    goto L_1032c;
    }
L_10324: {//sw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10328: {//lw_getClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1032c: {//addi_getClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10330: {//ld_getClientId
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10334: {//addi_getClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10338: {//jalr_getClientId
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: setClientId   *********************/
void setClientId(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_1033c: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_10340: {//sd_setClientId
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_10344: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_10348: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1034c: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_10350: {//sw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10354: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10358: {//sw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1035c: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10360: {//addiw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10364: {//addi_setClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10368: {//bne_setClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1037c;
    }
    }
L_1036c: {//lui_setClientId
    c->gp_regs[15] = 65536LL;
    }
L_10370: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10374: {//sw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_client_idCounter0) = (uint32_t)rs2;
    }
L_10378: {//jal_setClientId
    goto L_103bc;
    }
L_1037c: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10380: {//addiw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10384: {//addi_setClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10388: {//bne_setClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1039c;
    }
    }
L_1038c: {//lui_setClientId
    c->gp_regs[15] = 65536LL;
    }
L_10390: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10394: {//sw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_client_idCounter1) = (uint32_t)rs2;
    }
L_10398: {//jal_setClientId
    goto L_103bc;
    }
L_1039c: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_103a0: {//addiw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_103a4: {//addi_setClientId
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_103a8: {//bne_setClientId
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_103bc;
    }
    }
L_103ac: {//lui_setClientId
    c->gp_regs[15] = 65536LL;
    }
L_103b0: {//lw_setClientId
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_103b4: {//sw_setClientId
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_client_idCounter2) = (uint32_t)rs2;
    }
L_103b8: {//addi_setClientId
    uint64_t rs1 = 0;
    }
L_103bc: {//addi_setClientId
    uint64_t rs1 = 0;
    }
L_103c0: {//ld_setClientId
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_103c4: {//addi_setClientId
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_103c8: {//jalr_setClientId
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}
