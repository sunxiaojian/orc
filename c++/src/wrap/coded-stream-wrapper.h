/*
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef CODED_STREAM_WRAPPER_HH
#define CODED_STREAM_WRAPPER_HH

#include "Adaptor.hh"

DIAGNOSTIC_PUSH

#ifdef __clang__
DIAGNOSTIC_IGNORE("-Wshorten-64-to-32")
DIAGNOSTIC_IGNORE("-Wreserved-id-macro")
#endif

#if defined(__GNUC__) || defined(__clang__)
DIAGNOSTIC_IGNORE("-Wconversion")
#endif

#include <google/protobuf/io/coded_stream.h>

DIAGNOSTIC_POP

#endif
