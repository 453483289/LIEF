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
#include "LIEF/Abstract/Binary.hpp"
#include "LIEF/exception.hpp"

namespace LIEF {
Binary::Binary(void) :
  original_size_{0}
{}
Binary::~Binary(void) = default;
Binary& Binary::operator=(const Binary& copy) = default;
Binary::Binary(const Binary& copy) = default;


Header Binary::get_header(void) const {
  return this->get_abstract_header();
}

it_symbols Binary::get_symbols(void) {
  return it_symbols{this->get_abstract_symbols()};
}

it_const_symbols Binary::get_symbols(void) const {
  return it_const_symbols{const_cast<Binary*>(this)->get_abstract_symbols()};
}

it_sections Binary::get_sections(void) {
  return it_sections{this->get_abstract_sections()};
}


it_const_sections Binary::get_sections(void) const {
  return it_const_sections{const_cast<Binary*>(this)->get_abstract_sections()};
}


std::vector<std::string> Binary::get_exported_functions(void) const {
  return this->get_abstract_exported_functions();
}

std::vector<std::string> Binary::get_imported_functions(void) const {
  return this->get_abstract_imported_functions();
}


std::vector<std::string> Binary::get_imported_libraries(void) const {
  return this->get_abstract_imported_libraries();
}

uint64_t Binary::get_function_address(const std::string&) const {
  throw not_implemented("Not implemented for this format");
}


void Binary::accept(Visitor& visitor) const {
  visitor(this->get_header());
  for (const Section& section : const_cast<Binary*>(this)->get_sections()) {
    visitor(section);
  }


  for (const Symbol& symbol : const_cast<Binary*>(this)->get_symbols()) {
    visitor(symbol);
  }
}

const std::string& Binary::name(void) const {
  return this->name_;
}


uint64_t Binary::original_size(void) const {
  return this->original_size_;
}


void Binary::name(const std::string& name) {
  this->name_ = name;
}


void Binary::original_size(uint64_t size) {
  this->original_size_ = size;
}


std::ostream& Binary::print(std::ostream& os) const {
  return os;
}

std::ostream& operator<<(std::ostream& os, const Binary& binary) {
  binary.print(os);
  return os;
}


}
