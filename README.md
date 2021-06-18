# Data security
[![Commits since latest release](https://img.shields.io/github/commits-since/nico-castell/Data-Security/latest?color=informational&label=Commits%20since%20last%20release&logoColor=white&logo=Git&style=flat-square)](https://github.com/nico-castell/Data-Security/commits)
[![Release](https://img.shields.io/github/v/release/nico-castell/Data-Security?label=Release&color=informational&logo=GitHub&logoColor=white&style=flat-square)](https://github.com/nico-castell/Data-Security/releases/latest)
[![LICENSE](https://img.shields.io/github/license/nico-castell/Data-Security?color=informational&label=License&logoColor=white&logo=Open%20Source%20Initiative&style=flat-square)](LICENSE)
[![Lines of code](https://img.shields.io/tokei/lines/github/nico-castell/Data-Security?color=informational&label=Lines%20of%20code&logoColor=white&logo=C%2B%2B&style=flat-square)](https://github.com/nico-castell/Data-Security)
[![CodeQL](https://img.shields.io/github/workflow/status/nico-castell/Data-Security/CodeQL?label=CodeQL&logo=GitHub%20Actions&logoColor=white&style=flat-square)](https://github.com/nico-castell/Data-Security/actions/workflows/codeql-analyze.yml)

This repositoriy is a ***show*** of some programs and data security algorithms I made. It's meant to be used in
[Visual Studio Code](https://code.visualstudio.com/download), and on **Linux**. However, you should me able to compile almost everything with a few tweaks to the [config files](.vscode) on any other platforms.

## Folders

1. **[Binary](Binary)**: This project contains a binay visualizer. You input some text, and it displays the binary, octal, hexadecimal, and decimal values of your text.
2. **[Encrypter](Encrypter)**: This project contains a program with a simple XOR encryption algorithm.
3. **[Generator](Generator)**: This project contains a simple password generator.
4. **[Obfuscator](Obfuscator)**: This project contains an obfuscator, more information is available on that project's README.

## How to use the workspace

There are some build and debug tasks already prepared, as well as a [makefile](makefile) to quickly compile and run the different projects.

1. **Build tasks:** There are 6 build tasks prepared, 4 to compile each project individually, 1 to compile through the the makefile, and 1 to clean through the makefile.
2. **Debug configurations:** There are 4 debug configurations, 1 for each project.

## Licensing

This repository is available under the [Apache License 2.0](LICENSE).

> Live long, and prosper.  
> Spock
