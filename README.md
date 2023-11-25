---
title: pjsua2.dll
date: '2023-25-11'
description: PJSIP Libraries built with Github Actions 
author: 'Weslley Murdock'
---
 
<!--Introduction -->
I've created this repo to automatize new release builds from [pjsip](https://github.com/pjsip) for windows use with swig bindings and external libs
\s\s
An android version is available [here](https://github.com/weslleymurdock/libpjsua2-android)
\s\s
An ios version is available [here](https://github.com/weslleymurdock/libpjsua2-ios)
<!-- Your badges -->

### Platforms automated build

- [x] [![Windows](https://img.shields.io/badge/Windows-0078D6?style=for-the-badge&logo=windows&logoColor=white)](https://github.com/weslleymurdock/libpjsua2-win/actions/workflows/pjsua2.yml)

|      ARCH     |  SSL  | FFMPEG | OPUS |
|---------------|-------|--------|------|
|     ARM32     |   -   |    -   |   -  |
|     ARM64     |   -   |    -   |   -  |
|      x86      |   X   |    X   |   -  |
|      x64      |   -   |    -   |   -  |

### Remaining TODO

- [ ] build for remaining architectures.
- [ ] automated release
