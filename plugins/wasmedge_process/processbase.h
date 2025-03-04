// SPDX-License-Identifier: Apache-2.0
// SPDX-FileCopyrightText: 2019-2022 Second State INC

#pragma once

#include "common/errcode.h"
#include "processenv.h"
#include "runtime/callingframe.h"
#include "runtime/hostfunc.h"

namespace WasmEdge {
namespace Host {

template <typename T> class WasmEdgeProcess : public Runtime::HostFunction<T> {
public:
  WasmEdgeProcess(WasmEdgeProcessEnvironment &HostEnv)
      : Runtime::HostFunction<T>(0), Env(HostEnv) {}

protected:
  WasmEdgeProcessEnvironment &Env;
};

} // namespace Host
} // namespace WasmEdge
