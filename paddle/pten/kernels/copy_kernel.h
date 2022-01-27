/* Copyright (c) 2021 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#include "paddle/pten/core/dense_tensor.h"
#include "paddle/pten/core/sparse_csr_tensor.h"

namespace pten {

template <typename Context>
void Copy(const Context& dev_ctx,
          const DenseTensor& src,
          bool blocking,
          DenseTensor* dst);

template <typename Context>
void CopySparse(const Context& dev_ctx,
                const SparseCsrTensor& src,
                bool blocking,
                SparseCsrTensor* dst);

}  // namespace pten
