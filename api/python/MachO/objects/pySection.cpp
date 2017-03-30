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
#include <string>
#include <sstream>

#include "LIEF/visitors/Hash.hpp"
#include "LIEF/MachO/Section.hpp"

#include "pyMachO.hpp"



template<class T>
using getter_t = T (Section::*)(void) const;

template<class T>
using setter_t = void (Section::*)(T);

void init_MachO_Section_class(py::module& m) {

  py::class_<Section, LIEF::Section>(m, "Section")
    .def(py::init<>())

    .def_property("alignment",
        static_cast<getter_t<uint32_t>>(&Section::alignment),
        static_cast<setter_t<uint32_t>>(&Section::alignment),
        "Section's alignment ")

    .def_property("relocation_offset",
        static_cast<getter_t<uint32_t>>(&Section::relocation_offset),
        static_cast<setter_t<uint32_t>>(&Section::relocation_offset),
        "")

    .def_property("numberof_relocations",
        static_cast<getter_t<uint32_t>>(&Section::numberof_relocations),
        static_cast<setter_t<uint32_t>>(&Section::numberof_relocations),
        "")

    .def_property("type",
        static_cast<getter_t<SECTION_TYPES>>(&Section::type),
        static_cast<setter_t<SECTION_TYPES>>(&Section::type),
        "")


    .def("__eq__", &Section::operator==)
    .def("__ne__", &Section::operator!=)
    .def("__hash__",
        [] (const Section& section) {
          return LIEF::Hash::hash(section);
        })


    .def("__str__",
        [] (const Section& section)
        {
          std::ostringstream stream;
          stream << section;
          std::string str =  stream.str();
          return str;
        });

}



