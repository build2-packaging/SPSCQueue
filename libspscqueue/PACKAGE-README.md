# libspscqueue - Single producer single consumer wait-free queue C++ library

This is a `build2` package for the [`SPSCQueue`](https://github.com/rigtorp/SPSCQueue)
C++ library. It provides a single producer single consumer wait-free and
lock-free fixed size queue.


## Usage

To start using `libspscqueue` in your project, add the following `depends`
value to your `manifest`, adjusting the version constraint as appropriate:

```
depends: libspscqueue ^2.0.1
```

Then import the library in your `buildfile`:

```
import libs = libspscqueue%lib{spscqueue}
```


## Importable targets

This package provides the following importable targets:

```
lib{spscqueue}
```

A single header-only (binless) library target. Include
`<rigtorp/SPSCQueue.h>` to use the `rigtorp::SPSCQueue` class template.


## Configuration variables

This package provides no configuration variables.
