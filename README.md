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

|      ABI      |  SSL  | FFMPEG | OPUS |
|---------------|-------|--------|------|
|     ARM32     |   -   |    -   |   -  |
|     ARM64     |   -   |    -   |   -  |
|      x86      |   X   |    X   |   -  |
|      x64      |   -   |    -   |   -  |
 
### Libs with automated build

- [x] pjsip [![pjsip](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/pjsip/pjproject)
- [x] OpenSSL for iPhone [![ssl-ios](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/x2on/OpenSSL-for-iPhone)
- [x] openh264 [![openh264](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://www.github.com/cisco/openh264)
- [x] opus [![opus](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/xiph/opus/)
- [x] zrtp [![zrtp](https://img.shields.io/badge/github-%23121011.svg?style=for-the-badge&logo=github&logoColor=white)](https://github.com/wernerd/ZRTP4PJ) (currently not in use by ios workflow)

### Remaining TODO

- [ ] build for remaining architectures.
- [ ] automated release
