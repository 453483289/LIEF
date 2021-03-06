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
#ifndef LIEF_VISITOR_H_
#define LIEF_VISITOR_H_

#include <set>
#include <vector>
#include <array>
#include <string>
#include <functional>
#include <iostream>

#include "LIEF/visibility.h"

namespace LIEF {

// Forward declarations
// ====================

class Binary;
class Header;
class Section;
class Symbol;

namespace ELF {
class Binary;
class Header;
class Section;
class Segment;
class Relocation;

class DynamicEntry;
class DynamicEntryArray;
class DynamicEntryLibrary;
class DynamicSharedObject;
class DynamicEntryRunPath;
class DynamicEntryRpath;

class Symbol;
class SymbolVersion;
class SymbolVersionAux;
class SymbolVersionAuxRequirement;
class SymbolVersionRequirement;
class SymbolVersionDefinition;
}

namespace PE {
class Binary;

class DosHeader;
class Header;
class OptionalHeader;

class DataDirectory;
class Section;

class Relocation;
class RelocationEntry;

class Export;
class ExportEntry;

class TLS;
class Symbol;
class Debug;

class Import;
class ImportEntry;

class ResourceNode;
class ResourceData;
class ResourceDirectory;
}

namespace MachO {
class Binary;

class Header;

class LoadCommand;
class UUIDCommand;
class SymbolCommand;
class SegmentCommand;
class Section;
class MainCommand;
class DynamicSymbolCommand;
class DylinkerCommand;
class DylibCommand;

class Symbol;


}
// =====================


class DLL_PUBLIC Visitor {
  public:
  Visitor(void);
  virtual ~Visitor(void);

  virtual void operator()(void);

  template<typename Arg1, typename... Args>
  void operator()(Arg1&& arg1, Args&&... args);

  // Visit Fundamental types
  // =======================
  template<
    typename T,
    typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
  void visit(T n) {
    this->visit(static_cast<size_t>(n));
  }

  template<
    typename T,
    size_t N,
    typename std::enable_if<std::is_integral<T>::value>::type* = nullptr>
  void visit(const std::array<T, N>& array) {
    for (const T& v : array) {
      this->visit(static_cast<size_t>(v));
    }
  }

  virtual void visit(size_t n);
  virtual void visit(const std::string& str);
  virtual void visit(const std::u16string& str);
  virtual void visit(const std::vector<uint8_t>& raw);


  // Abstract Part
  // =============

  //! @brief Method to visit a LIEF::Binary
  virtual void visit(const Binary& binary);

  //! @brief Method to visit a LIEF::Header
  virtual void visit(const Header& header);

  //! @brief Method to visit a LIEF::Section
  virtual void visit(const Section& section);

  //! @brief Method to visit a LIEF::Symbol
  virtual void visit(const Symbol& symbol);

  // ELF Part
  // ========

  //! @brief Method to visit a LIEF::ELF::Binary
  virtual void visit(const ELF::Binary& binary);

  //! @brief Method to visit a LIEF::ELF::Header
  virtual void visit(const ELF::Header& header);

  //! @brief Method to visit a LIEF::ELF::Section
  virtual void visit(const ELF::Section& section);

  //! @brief Method to visit a LIEF::ELF::Segment
  virtual void visit(const ELF::Segment& segment);

  //! @brief Method to visit a LIEF::ELF::Relocation
  virtual void visit(const ELF::Relocation& relocation);

  //! @brief Method to visit a LIEF::ELF::DynamicEntry
  virtual void visit(const ELF::DynamicEntry& entry);

  //! @brief Method to visit a LIEF::ELF::DynamicEntryArray
  virtual void visit(const ELF::DynamicEntryArray& array);

  //! @brief Method to visit a LIEF::ELF::DynamicEntryLibrary
  virtual void visit(const ELF::DynamicEntryLibrary& library);

  //! @brief Method to visit a LIEF::ELF::DynamicSharedObject
  virtual void visit(const ELF::DynamicSharedObject& shared);

  //! @brief Method to visit a LIEF::ELF::DynamicEntryRunPath
  virtual void visit(const ELF::DynamicEntryRunPath& runpath);

  //! @brief Method to visit a LIEF::ELF::DynamicEntryRpath
  virtual void visit(const ELF::DynamicEntryRpath& rpath);

  //! @brief Method to visit a LIEF::ELF::Symbol
  virtual void visit(const ELF::Symbol& symbol);

  //! @brief Method to visit a LIEF::ELF::SymbolVersion
  virtual void visit(const ELF::SymbolVersion& sv);

  //! @brief Method to visit a LIEF::ELF::SymbolVersionAux
  virtual void visit(const ELF::SymbolVersionAux& sva);

  //! @brief Method to visit a LIEF::ELF::SymbolVersionAuxRequirement
  virtual void visit(const ELF::SymbolVersionAuxRequirement& svar);

  //! @brief Method to visit a LIEF::ELF::SymbolVersionRequirement
  virtual void visit(const ELF::SymbolVersionRequirement& svr);

  //! @brief Method to visit a LIEF::ELF::SymbolVersionDefinition
  virtual void visit(const ELF::SymbolVersionDefinition& svd);

  // PE Part
  // =======

  //! @brief Method to visit a LIEF::PE::Binary
  virtual void visit(const PE::Binary& binary);

  //! @brief Method to visit a LIEF::PE::DosHeader
  virtual void visit(const PE::DosHeader& dos_header);

  //! @brief Method to visit a LIEF::PE::Header
  virtual void visit(const PE::Header& header);

  //! @brief Method to visit a LIEF::PE::OptionalHeader
  virtual void visit(const PE::OptionalHeader& optional_header);

  //! @brief Method to visit a LIEF::PE::DataDirectory
  virtual void visit(const PE::DataDirectory& data_directory);

  //! @brief Method to visit a LIEF::PE::TLS
  virtual void visit(const PE::TLS& tls);

  //! @brief Method to visit a LIEF::PE::Symbol
  virtual void visit(const PE::Symbol& symbol);

  //! @brief Method to visit a LIEF::PE::Relocation
  virtual void visit(const PE::Relocation& relocation);

  //! @brief Method to visit a LIEF::PE::RelocationEntry
  virtual void visit(const PE::RelocationEntry& relocation_entry);

  //! @brief Method to visit a LIEF::PE::Export
  virtual void visit(const PE::Export& exp);

  //! @brief Method to visit a LIEF::PE::ExportEntry
  virtual void visit(const PE::ExportEntry& export_entry);

  //! @brief Method to visit a LIEF::PE::Debug
  virtual void visit(const PE::Debug& debug);

  //! @brief Method to visit a LIEF::PE::Import
  virtual void visit(const PE::Import& import);

  //! @brief Method to visit a LIEF::PE::ImportEntry
  virtual void visit(const PE::ImportEntry& import_entry);

  //! @brief Method to visit a LIEF::PE::ResourceNode
  virtual void visit(const PE::ResourceNode& node);

  //! @brief Method to visit a LIEF::PE::ResourceData
  virtual void visit(const PE::ResourceData& data);

  //! @brief Method to visit a LIEF::PE::ResourceDirectory
  virtual void visit(const PE::ResourceDirectory& directory);

  // MachO part
  // ==========

  //! @brief Method to visit a LIEF::MachO::Binary
  virtual void visit(const MachO::Binary& binary);

  //! @brief Method to visit a LIEF::MachO::Header
  virtual void visit(const MachO::Header& header);

  //! @brief Method to visit a LIEF::MachO::LoadCommand
  virtual void visit(const MachO::LoadCommand& load_command);

  //! @brief Method to visit a LIEF::MachO::UUIDCommand
  virtual void visit(const MachO::UUIDCommand& uuid_command);

  //! @brief Method to visit a LIEF::MachO::SymbolCommand
  virtual void visit(const MachO::SymbolCommand& symbol_command);

  //! @brief Method to visit a LIEF::MachO::SegmentCommand
  virtual void visit(const MachO::SegmentCommand& segment_command);

  //! @brief Method to visit a LIEF::MachO::Section
  virtual void visit(const MachO::Section& section);

  //! @brief Method to visit a LIEF::MachO::MainCommand
  virtual void visit(const MachO::MainCommand& main_command);

  //! @brief Method to visit a LIEF::MachO::DynamicSymbolCommand
  virtual void visit(const MachO::DynamicSymbolCommand& dyn_sym_cmd);

  //! @brief Method to visit a LIEF::MachO::DylinkerCommand
  virtual void visit(const MachO::DylinkerCommand& dylinker_command);

  //! @brief Method to visit a LIEF::MachO::DylibCommand
  virtual void visit(const MachO::DylibCommand& dylib_command);

  //! @brief Method to visit a LIEF::MachO::Symbol
  virtual void visit(const MachO::Symbol& symbol);


  template<class T>
  void dispatch(const T& obj);


  private:
  std::set<size_t> visited_;
};



template<typename Arg1, typename... Args>
void Visitor::operator()(Arg1&& arg1, Args&&... args) {
  this->dispatch(std::forward<Arg1>(arg1));
  this->operator()(std::forward<Args>(args)... );
}

template<class T>
void Visitor::dispatch(const T& obj) {
  size_t hash = reinterpret_cast<size_t>(&obj);
  if (this->visited_.find(hash) == std::end(this->visited_)) {
    this->visited_.insert(hash);
    this->visit(obj);
  }
}

}
#endif
