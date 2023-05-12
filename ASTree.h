#ifndef _PYC_ASTREE_H
#define _PYC_ASTREE_H

#include "ASTNode.h"

PycRef<ASTNode> BuildFromCode(PycRef<PycCode> code, PycModule* mod);
void print_src(PycRef<ASTNode> node, PycModule* mod);

void decompyle(PycRef<PycCode> code, PycModule* mod);

default:
            stack.pop();
            // fprintf(stderr, "Unsupported opcode: %s\n", Pyc::OpcodeName(opcode & 0xFF));
            // cleanBuild = false;
            // return new ASTNodeList(defblock->nodes());



#endif
