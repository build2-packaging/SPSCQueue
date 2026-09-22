# SPSCQueue - Single producer single consumer wait-free queue C++ library

This is a `build2` package repository for [`SPSCQueue`](https://github.com/rigtorp/SPSCQueue),
a single producer single consumer wait-free and lock-free fixed size queue
C++ library.

This file contains setup instructions and other details that are more
appropriate for development rather than consumption. If you want to use
`SPSCQueue` in your `build2`-based project, then instead see the accompanying
[`PACKAGE-README.md`](libspscqueue/PACKAGE-README.md) file.

The development setup for `SPSCQueue` uses the standard `bdep`-based workflow.
For example:

```
git clone .../SPSCQueue.git
cd SPSCQueue

bdep init -C @gcc cc config.cxx=g++
bdep update
bdep test
```
