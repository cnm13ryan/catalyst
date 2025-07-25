// Copyright 2025 Xanadu Quantum Technologies Inc.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at

//     http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once

#include "mlir/Bytecode/BytecodeOpInterface.h"
#include "mlir/IR/BuiltinTypes.h"
#include "mlir/IR/Dialect.h"
#include "mlir/IR/OpDefinition.h"
#include "mlir/Interfaces/ControlFlowInterfaces.h"
#include "mlir/Interfaces/SideEffectInterfaces.h"

#include "QEC/IR/QECOpInterfaces.h"

//===----------------------------------------------------------------------===//
// QEC dialect declarations.
//===----------------------------------------------------------------------===//

#include "QEC/IR/QECDialectDialect.h.inc"

//===----------------------------------------------------------------------===//
// QEC type declarations.
//===----------------------------------------------------------------------===//

#define GET_TYPEDEF_CLASSES
#include "QEC/IR/QECDialectTypes.h.inc"

//===----------------------------------------------------------------------===//
// QEC enum definitions.
//===----------------------------------------------------------------------===//

#include "QEC/IR/QECEnums.h.inc"

//===----------------------------------------------------------------------===//
// QEC attribute declarations.
//===----------------------------------------------------------------------===//

#define GET_ATTRDEF_CLASSES
#include "QEC/IR/QECAttributes.h.inc"

//===----------------------------------------------------------------------===//
// QEC ops declarations.
//===----------------------------------------------------------------------===//

#define GET_OP_CLASSES
#include "QEC/IR/QECDialect.h.inc"
