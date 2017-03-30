/* Copyright 2017 R. Thomas
 * Copyright 2017 Quarkslab
 *
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
#include "LIEF/ELF/EnumToString.h"
#include "LIEF/ELF/EnumToString.hpp"

#include "LIEF/ELF/Structures.hpp"
#include "LIEF/ELF/structures.h"


extern "C"
{
  const char* E_TYPE_to_string(enum E_TYPE e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::E_TYPE>(e));
  }

  const char* SYMBOL_BINDINGS_to_string(enum SYMBOL_BINDINGS e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::SYMBOL_BINDINGS>(e));
  }

  const char* VERSION_to_string(enum VERSION e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::VERSION>(e));
  }

  const char* ARCH_to_string(enum ARCH e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::ARCH>(e));
  }

  const char* SEGMENT_TYPES_to_string(enum SEGMENT_TYPES e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::SEGMENT_TYPES>(e));
  }

  const char* DYNAMIC_TAGS_to_string(enum DYNAMIC_TAGS e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::DYNAMIC_TAGS>(e));
  }

  const char* SECTION_TYPES_to_string(enum SECTION_TYPES e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::SECTION_TYPES>(e));
  }

  const char* SECTION_FLAGS_to_string(enum SECTION_FLAGS e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::SECTION_FLAGS>(e));
  }

  const char* SYMBOL_TYPES_to_string(enum SYMBOL_TYPES e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::SYMBOL_TYPES>(e));
  }

  const char* ELF_CLASS_to_string(enum ELF_CLASS e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::ELF_CLASS>(e));
  }

  const char* ELF_DATA_to_string(enum ELF_DATA e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::ELF_DATA>(e));
  }

  const char* OS_ABI_to_string(enum OS_ABI e) {
    return LIEF::ELF::to_string(static_cast<LIEF::ELF::OS_ABI>(e));
  }

}
