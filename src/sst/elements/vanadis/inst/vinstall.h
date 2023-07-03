// Copyright 2009-2023 NTESS. Under the terms
// of Contract DE-NA0003525 with NTESS, the U.S.
// Government retains certain rights in this software.
//
// Copyright (c) 2009-2023, NTESS
// All rights reserved.
//
// Portions are copyright of other developers:
// See the file CONTRIBUTORS.TXT in the top level directory
// of the distribution for more information.
//
// This file is part of the SST software package. For license
// information, see the LICENSE file in the top level directory of the
// distribution.

#ifndef _H_VANADIS_INST_ALL
#define _H_VANADIS_INST_ALL

// Arithmetic operations
#include "vadd.h"
#include "vaddi.h"
#include "vaddiu.h"
#include "vdiv.h"
#include "vdivmod.h"
#include "vmod.h"
#include "vmul.h"
#include "vmuli.h"
#include "vmulsplit.h"
#include "vmulhigh.h"
#include "vsub.h"

// Logical operations
#include "vand.h"
#include "vandi.h"
#include "vnor.h"
#include "vor.h"
#include "vori.h"
#include "vxor.h"
#include "vxori.h"

// Shift operations
#include "vsll.h"
#include "vslli.h"
#include "vsra.h"
#include "vsrai.h"
#include "vsrl.h"
#include "vsrli.h"

// Compare operations
#include "vbcmpi.h"
#include "vbcmpil.h"
#include "vscmp.h"
#include "vscmpi.h"

// PC
#include "vpcaddi.h"

// Jumps and PC change instructions
#include "vbcmp.h"
#include "vbfp.h"
#include "vjl.h"
#include "vjlr.h"
#include "vjr.h"
#include "vjump.h"

// Load instructions
#include "vload.h"
#include "vpartialload.h"

// Store instructions
#include "vpartialstore.h"
#include "vstore.h"
#include "vstorecond.h"

// Conditional move instructions
#include "vcimov.h"

// Fence Instructions
#include "vfence.h"

// Special instructions
#include "vdecodealignfault.h"
#include "vdecodefaultinst.h"
#include "vfault.h"
#include "vnop.h"
#include "vsetreg.h"
#include "vsetregcallable.h"
#include "vsyscall.h"

// int-reg move
#include "vmovci.h"

// FP Convert/Move
#include "vfp2fp.h"
#include "vfp2gpr.h"
#include "vfpconv.h"
#include "vgpr2fp.h"

// FP Arith
#include "vfpadd.h"
#include "vfpmadd.h"
#include "vfpmsub.h"
#include "vfpdiv.h"
#include "vfpmul.h"
#include "vfpmin.h"
#include "vfpsqrt.h"
#include "vfpscmp.h"
#include "vfpsignlogic.h"
#include "vfpsub.h"
#include "vmipsfpscmp.h"

// Truncate
#include "vtrunc.h"

// FP Flags
#include "vfpflagssetimm.h"
#include "vfpflagsset.h"
#include "vfpflagsread.h"

#endif
