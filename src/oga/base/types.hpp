//
// Copyright 2014 Vinzenz Feenstra, Red Hat, Inc. and/or its affiliates.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// Refer to the README and COPYING files for full details of the license.
//

#ifndef GUARD_OGA_BASE_TYPES_HPP_INCLUDED
#define GUARD_OGA_BASE_TYPES_HPP_INCLUDED

#if defined(WIN32) || defined(WIN64)
#   include <windows.h>
namespace oga {
typedef INT64 int64_t;
typedef INT32 int32_t;
typedef INT16 int16_t;
typedef INT8 int8_t

typedef QWORD uint64_t;
typedef DWORD uint32_t;
typedef WORD uint16_t;
typedef BYTE uint8_t;

}
#else
#   include <stdint.h>
#endif


#endif //GUARD_OGA_BASE_TYPES_HPP_INCLUDED

