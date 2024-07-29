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
int __ste_ClientAddressBook_size0 = 0;
int __ste_ClientAddressBook_size1 = 0;
int __ste_ClientAddressBook_size2 = 0;
extern int createClientAddressBookEntry(int);
extern void setClientAddressBookSize(int, int);
extern int getClientAddressBookSize(int);



/*******************    Function: getClientAddressBookSize   *********************/
int getClientAddressBookSize(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10000: {//addi_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_10004: {//sd_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10008: {//addi_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_1000c: {//addi_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10010: {//sw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10014: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10018: {//addiw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_1001c: {//addi_getClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_10020: {//bne_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10038;
    }
    }
L_10024: {//lui_getClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_10028: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientAddressBook_size0);
    c->gp_regs[15] = rd;
    }
L_1002c: {//sw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10030: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10034: {//jal_getClientAddressBookSize
    goto L_10088;
    }
L_10038: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_1003c: {//addiw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10040: {//addi_getClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10044: {//bne_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_1005c;
    }
    }
L_10048: {//lui_getClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_1004c: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientAddressBook_size1);
    c->gp_regs[15] = rd;
    }
L_10050: {//sw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10054: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10058: {//jal_getClientAddressBookSize
    goto L_10088;
    }
L_1005c: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10060: {//addiw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10064: {//addi_getClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10068: {//bne_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10080;
    }
    }
L_1006c: {//lui_getClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_10070: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    int32_t rd = *(int32_t *)(&__ste_ClientAddressBook_size2);
    c->gp_regs[15] = rd;
    }
L_10074: {//sw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10078: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_1007c: {//jal_getClientAddressBookSize
    goto L_10088;
    }
L_10080: {//sw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = 0;
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10084: {//lw_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10088: {//addi_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_1008c: {//ld_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[8] = rd;
    }
L_10090: {//addi_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_10094: {//jalr_getClientAddressBookSize
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}



/*******************    Function: setClientAddressBookSize   *********************/
void setClientAddressBookSize(int arg0, int arg1){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[48];
    c->gp_regs[sp]=(uint64_t)&stack[48-1];
    c->gp_regs[a0]=arg0;
    c->gp_regs[a1]=arg1;
L_10098: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-32LL;
    }
L_1009c: {//sd_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)24LL) = (uint64_t)rs2;
    }
L_100a0: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)32LL;
    }
L_100a4: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100a8: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[11];
    c->gp_regs[14] = rs1 + (int64_t)0LL;
    }
L_100ac: {//sw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_100b0: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_100b4: {//sw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_100b8: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100bc: {//addiw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100c0: {//addi_setClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)1LL;
    }
L_100c4: {//bne_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100d8;
    }
    }
L_100c8: {//lui_setClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_100cc: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100d0: {//sw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientAddressBook_size0) = (uint32_t)rs2;
    }
L_100d4: {//jal_setClientAddressBookSize
    goto L_10118;
    }
L_100d8: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100dc: {//addiw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_100e0: {//addi_setClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_100e4: {//bne_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_100f8;
    }
    }
L_100e8: {//lui_setClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_100ec: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_100f0: {//sw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientAddressBook_size1) = (uint32_t)rs2;
    }
L_100f4: {//jal_setClientAddressBookSize
    goto L_10118;
    }
L_100f8: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_100fc: {//addiw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10100: {//addi_setClientAddressBookSize
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)3LL;
    }
L_10104: {//bne_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[14];
    uint64_t rs2 = c->gp_regs[15];
    if ((uint64_t)rs1 != (uint64_t)rs2) {
        goto L_10118;
    }
    }
L_10108: {//lui_setClientAddressBookSize
    c->gp_regs[15] = 65536LL;
    }
L_1010c: {//lw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[14] = rd;
    }
L_10110: {//sw_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    *(uint32_t *)(&__ste_ClientAddressBook_size2) = (uint32_t)rs2;
    }
L_10114: {//addi_setClientAddressBookSize
    uint64_t rs1 = 0;
    }
L_10118: {//addi_setClientAddressBookSize
    uint64_t rs1 = 0;
    }
L_1011c: {//ld_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)24LL);
    c->gp_regs[8] = rd;
    }
L_10120: {//addi_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)32LL;
    }
L_10124: {//jalr_setClientAddressBookSize
    uint64_t rs1 = c->gp_regs[1];
    return;
    }
}



/*******************    Function: createClientAddressBookEntry   *********************/
int createClientAddressBookEntry(int arg0){
    cpu_t cpu;
    cpu_t *c=&cpu;
    char stack[64];
    c->gp_regs[sp]=(uint64_t)&stack[64-1];
    c->gp_regs[a0]=arg0;
L_10128: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)-48LL;
    }
L_1012c: {//sd_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[1];
    *(uint64_t *)(rs1 + (int64_t)40LL) = (uint64_t)rs2;
    }
L_10130: {//sd_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    uint64_t rs2 = c->gp_regs[8];
    *(uint64_t *)(rs1 + (int64_t)32LL) = (uint64_t)rs2;
    }
L_10134: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[8] = rs1 + (int64_t)48LL;
    }
L_10138: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_1013c: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-36LL) = (uint32_t)rs2;
    }
L_10140: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10144: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10148: {//jal_createClientAddressBookEntry
    c->gp_regs[1] = 65868LL;
    getClientAddressBookSize(c->gp_regs[a0]);
    }
L_1014c: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[10];
    c->gp_regs[15] = rs1 + (int64_t)0LL;
    }
L_10150: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-20LL) = (uint32_t)rs2;
    }
L_10154: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-20LL);
    c->gp_regs[15] = rd;
    }
L_10158: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-24LL) = (uint32_t)rs2;
    }
L_1015c: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10160: {//addiw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[14] = (int64_t)(int32_t)(rs1 + (int64_t)0LL);
    }
L_10164: {//addi_createClientAddressBookEntry
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)2LL;
    }
L_10168: {//blt_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    uint64_t rs2 = c->gp_regs[14];
    if ((int64_t)rs1 < (int64_t)rs2) {
        goto L_101a0;
    }
    }
L_1016c: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10170: {//addiw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10174: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-32LL) = (uint32_t)rs2;
    }
L_10178: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-32LL);
    c->gp_regs[14] = rd;
    }
L_1017c: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-36LL);
    c->gp_regs[15] = rd;
    }
L_10180: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[14];
    c->gp_regs[11] = rs1 + (int64_t)0LL;
    }
L_10184: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_10188: {//jal_createClientAddressBookEntry
    c->gp_regs[1] = 65932LL;
    setClientAddressBookSize(c->gp_regs[a0],c->gp_regs[a1]);
    }
L_1018c: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-24LL);
    c->gp_regs[15] = rd;
    }
L_10190: {//addiw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[15] = (int64_t)(int32_t)(rs1 + (int64_t)1LL);
    }
L_10194: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_10198: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_1019c: {//jal_createClientAddressBookEntry
    goto L_101ac;
    }
L_101a0: {//addi_createClientAddressBookEntry
    uint64_t rs1 = 0;
    c->gp_regs[15] = rs1 + (int64_t)-1LL;
    }
L_101a4: {//sw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    uint64_t rs2 = c->gp_regs[15];
    *(uint32_t *)(rs1 + (int64_t)-28LL) = (uint32_t)rs2;
    }
L_101a8: {//lw_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[8];
    int32_t rd = *(int32_t *)(rs1 + (int64_t)-28LL);
    c->gp_regs[15] = rd;
    }
L_101ac: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[15];
    c->gp_regs[10] = rs1 + (int64_t)0LL;
    }
L_101b0: {//ld_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)40LL);
    c->gp_regs[1] = rd;
    }
L_101b4: {//ld_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    int64_t rd = *(int64_t *)(rs1 + (int64_t)32LL);
    c->gp_regs[8] = rd;
    }
L_101b8: {//addi_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[2];
    c->gp_regs[2] = rs1 + (int64_t)48LL;
    }
L_101bc: {//jalr_createClientAddressBookEntry
    uint64_t rs1 = c->gp_regs[1];
    return (int)c->gp_regs[a0];
    }
}
