#ifndef _PASSE_2_H_
#define _PASSE_2_H_

#include "defs.h"

void gen_code_passe_2(node_t root);
void declaration_affectation(node_t root);
void affectation(node_t root);
void recup_offset(node_t root, int32_t i);
void allocate2(void (*mon_ope)());
#endif

