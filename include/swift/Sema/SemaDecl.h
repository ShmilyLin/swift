//===--- SemaDecl.h - Swift Semantic Analysis for Declarations --*- C++ -*-===//
//
// This source file is part of the Swift.org open source project
//
// Copyright (c) 2014 - 2015 Apple Inc. and the Swift project authors
// Licensed under Apache License v2.0 with Runtime Library Exception
//
// See http://swift.org/LICENSE.txt for license information
// See http://swift.org/CONTRIBUTORS.txt for the list of Swift project authors
//
//===----------------------------------------------------------------------===//
//
// This file defines the Sema interface which implement hooks invoked by the 
// parser to build the AST for declarations.
//
//===----------------------------------------------------------------------===//

#ifndef SWIFT_SEMA_DECL_H
#define SWIFT_SEMA_DECL_H

#include "swift/Sema/SemaBase.h"

namespace swift {
  class Expr;
  class Type;
  class VarDecl;
  
  /// SemaDecl - Semantic analysis support for Swift declarations.
  class SemaDecl : public SemaBase {
  public:
    explicit SemaDecl(Sema &S) : SemaBase(S) {}

    VarDecl *ActOnVarDecl(llvm::SMLoc VarLoc, llvm::StringRef Name, Type *Ty,
                          Expr *Init);
  };
  
} // end namespace swift

#endif
