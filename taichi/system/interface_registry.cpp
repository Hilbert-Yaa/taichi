#include <functional>

// No support of Python for Android Build
#ifndef ANDROID
#include "pybind11/pybind11.h"
#endif
#include "taichi/common/interface.h"
#include "taichi/common/task.h"
#include "taichi/system/benchmark.h"

namespace taichi {

TI_INTERFACE_DEF(Benchmark, "benchmark")
TI_INTERFACE_DEF(Task, "task")

}  // namespace taichi
