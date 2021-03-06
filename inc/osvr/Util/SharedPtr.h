/** @file
    @brief Header to bring shared_ptr into the ::osvr namespace.

    @date 2014

    @author
    Sensics, Inc.
    <http://sensics.com/osvr>

*/

// Copyright 2014 Sensics, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef INCLUDED_SharedPtr_h_GUID_E9C5BC8D_7D3A_4896_1552_6F4F5292783C
#define INCLUDED_SharedPtr_h_GUID_E9C5BC8D_7D3A_4896_1552_6F4F5292783C

#if defined(_MSC_VER) && (_MSC_VER < 1600)
#error "Not supported before VS 2010"
#else
#include <memory>

namespace osvr {
using std::shared_ptr;
using std::weak_ptr;
using std::make_shared;
using std::enable_shared_from_this;
} // namespace osvr
#endif

#endif // INCLUDED_SharedPtr_h_GUID_E9C5BC8D_7D3A_4896_1552_6F4F5292783C
