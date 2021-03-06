References
==========

Similar Projects
----------------

+------------+------------+----------------------------------------------------------------------+
|    Name    | Language   |   Link                                                               |
+============+============+======================================================================+
| filebytes  | Python     | https://github.com/sashs/filebytes                                   |
+------------+------------+----------------------------------------------------------------------+
| angr/cle   | Python     | https://github.com/angr/cle                                          |
+------------+------------+----------------------------------------------------------------------+
| pypeelf    | Python     | https://github.com/crackinglandia/pypeelf                            |
+------------+------------+----------------------------------------------------------------------+

Parsers/Modifiers
-----------------

ELF
~~~

+------------+------------+----------------------------------------------------------------------+
|    Name    | Language   |   Link                                                               |
+============+============+======================================================================+
| pyelftools | Python     | https://github.com/eliben/pyelftools                                 |
+------------+------------+----------------------------------------------------------------------+
| pylibelf   | Python     | https://github.com/crackinglandia/pylibelf                           |
+------------+------------+----------------------------------------------------------------------+
| pydevtools | Python     | https://github.com/arowser/pydevtools                                |
+------------+------------+----------------------------------------------------------------------+
| elfparser  | C++ ?      | http://elfparser.com/index.html                                      |
+------------+------------+----------------------------------------------------------------------+
| libelf     | C          | http://www.mr511.de/software/                                        |
+------------+------------+----------------------------------------------------------------------+
| elfio      | C++        | http://elfio.sourceforge.net/                                        |
+------------+------------+----------------------------------------------------------------------+
| radare2    | C/Python   | https://github.com/radare/radare2/tree/master/libr/bin/format/elf    |
+------------+------------+----------------------------------------------------------------------+
| node-elf   | node.js    | https://github.com/sifteo/node-elf                                   |
+------------+------------+----------------------------------------------------------------------+
| readelf    | C          | https://github.com/bminor/binutils-gdb/blob/master/binutils/readelf.c|
+------------+------------+----------------------------------------------------------------------+


PE
~~

+---------------+--------------+----------------------------------------------------------------------+
|    Name       | Language     |   Link                                                               |
+===============+==============+======================================================================+
| pefiles       | Python       | https://github.com/erocarrera/pefile                                 |
+---------------+--------------+----------------------------------------------------------------------+
| radare2       | C            | https://github.com/radare/radare2/tree/master/libr/bin/format/pe     |
+---------------+--------------+----------------------------------------------------------------------+
| PE.Explorer   | C++/C# ?     | http://www.pe-explorer.com/                                          |
+---------------+--------------+----------------------------------------------------------------------+
| CFF Explorer  | C++/C# ?     | http://www.ntcore.com/exsuite.php                                    |
+---------------+--------------+----------------------------------------------------------------------+
| PE Browser 64 | C++/C# ?     | http://www.smidgeonsoft.prohosting.com/pebrowse-pro-file-viewer.html |
+---------------+--------------+----------------------------------------------------------------------+
| PE View       | C++/C# ?     | http://wjradburn.com/software/                                       |
+---------------+--------------+----------------------------------------------------------------------+
| FileAlyzer    | C++/C# ?     | http://www.safer-networking.org/products/filealyzer/                 |
+---------------+--------------+----------------------------------------------------------------------+
| PE Studio     | C++/C# ?     | http://www.winitor.com/                                              |
+---------------+--------------+----------------------------------------------------------------------+
| PEDumper      | C            | https://github.com/maldevel/PEdumper                                 |
+---------------+--------------+----------------------------------------------------------------------+
| PE Parse      | C++/Python   | https://github.com/trailofbits/pe-parse/tree/master/parser-library   |
+---------------+--------------+----------------------------------------------------------------------+
| PEParse       | C#           | https://github.com/DKorablin/PEReader                                |
+---------------+--------------+----------------------------------------------------------------------+
| PE Bliss      | C++          | https://github.com/BackupGGCode/portable-executable-library          |
+---------------+--------------+----------------------------------------------------------------------+
| PE Net        | .NET         | https://github.com/secana/PeNet                                      |
+---------------+--------------+----------------------------------------------------------------------+
| libpe         | C++          | https://github.com/evilsocket/libpe/tree/master/libpe                |
+---------------+--------------+----------------------------------------------------------------------+


Mach-O
~~~~~~

+------------+------------+---------------------------------------------------------------------+
|    Name    | Language   |   Link                                                              |
+============+============+=====================================================================+
| radare2    | C          | https://github.com/radare/radare2/tree/master/libr/bin/format/mach0 |
+------------+------------+---------------------------------------------------------------------+
| MachO-Kit  | C/ObjC     | https://github.com/DeVaukz/MachO-Kit                                |
+------------+------------+---------------------------------------------------------------------+
| optool     | ObjC       | https://github.com/alexzielenski/optool                             |
+------------+------------+---------------------------------------------------------------------+
| macho_edit | C++        | https://github.com/Tyilo/macho_edit                                 |
+------------+------------+---------------------------------------------------------------------+
| macholib   | Python     | https://pypi.python.org/pypi/macholib                               |
+------------+------------+---------------------------------------------------------------------+


Tools
-----

+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
|    Name        | Language   |   Link                                                 | Format          | Summarize               |
+================+============+========================================================+=================+=========================+
| Dress          | Python     | https://github.com/docileninja/dress                   | ELF             | Add static symbols      |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| objconv        | C++        | http://www.agner.org/optimize/#objconv                 | ELF/PE/MachO    | Format converter        |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| PEDetour       | C++        | https://github.com/chen-charles/PEDetour               | PE              | Hook exported functions |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| python-elf     | Python     | https://github.com/tbursztyka/python-elf               | ELF             | ELF binary format       |
|                |            |                                                        |                 | manipulation            |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| PEDetour       | C++        | https://github.com/chen-charles/PEDetour               | PE              | Hook exported functions |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| libmaelf       | C          | https://github.com/tiago4orion/libmalelf               | ELF             | Library for Dissect and |
|                |            |                                                        |                 | Infect ELF Binaries.    |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| peinjector     | C          | https://github.com/JonDoNym/peinjector                 | PE              | MITM PE file infector   |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| backdoor       | C++        | https://github.com/secretsquirrel/the-backdoor-factory | ELF/PE/MachO    | Patch PE, ELF, Mach-O   |
| factory        |            |                                                        |                 | binaries with shellcode |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| RePEconstruct  | C          | https://github.com/DavidKorczynski/RePEconstruct       | PE              | PE Unpacker             |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| patchkit       | Python     | https://github.com/lunixbochs/patchkit                 | ELF             | Patch binary            |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| unstrip        | Python     | https://github.com/pzread/unstrip                      | ELF             | Unstrip static binary   |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| sym2elf        | Python     | https://github.com/danigargu/syms2elf                  | ELF             | Export IDA's symbols to |
|                |            |                                                        |                 | the original binary     |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+
| elfhash        | C          | https://github.com/cjacker/elfhash                     | ELF             | Manipulate ELF's hash   |
+----------------+------------+--------------------------------------------------------+-----------------+-------------------------+




