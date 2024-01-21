# KomplexKanban

This is a Complex number library that provides functionality for complex number operations, including arithmetic operations, trigonometric functions, logarithmic functions, and more. This library was built with C++ and tested with Catch2.

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

The only prerequisite is that the Catch2 framework is in the file which should already be provided in the tests directory.


### Installing


Clone the repository or download it from Github and unzip the folder

```
git clone https://github.com/LasaACP/komplexkanbanv3-team72
```

To check if it was properly installed, navigate to the [src](src/} folder and run the following command as a demo of the complex library:

```
g++ main.cpp lib/abs.cpp lib/add.cpp lib/arg.cpp lib/Complex.cpp lib/conj.cpp lib/cos.cpp lib/cosh.cpp lib/division.cpp lib/equality.cpp lib/extraction.cpp lib/exp.cpp lib/imag.cpp lib/insertion.cpp lib/multiply.cpp lib/norm.cpp lib/real.cpp lib/sin.cpp lib/sinh.cpp lib/sqrt.cpp lib/subtract.cpp lib/tan.cpp lib/tanh.cpp lib/Complex.hpp lib/Complex.h lib/polar.cpp lib/log.cpp -o main.out
```


Once the file is compiled, run the output file to see the results:
```
./main.out
```

The expected output is below:
```
Hello World
Enter b: a = 5 + 6i
b = 1 + 2i
a + b = 6 + 8i
a * b = -7 + 16i
a / b = 3.4 - .8i
|a| = 7.81
complex conjugate of a = 5 - 6i
norm of a = 61
abs of a = 7.81
exp(a) = 142.50 - 41.46i
log(a) = 2.06 + 0.87i
Complex number example: 3 + 5i
The conjugate is: 3 - 5i
The magnitude is: 5.83
The phase in Radians is: 1.0
The norm is: 34
The sqrt is: 2.10 + 1.19i
The natural log is: 1.76 + 1.03i
The sin is: 10.47 - 73.46i
```

## Running the tests

You can run automated test two ways to make sure the implemented functions are working properly.

First, go to the [tests](tests/) directory and compile the Catch2 framework:

```
g++ catch_amalgamated.cpp -o catch_amalgamated_o
```

You can use this framework to run the library tests by going to the [src](src/) directory and running the following command:

```
g++ main_test.cpp lib/abs.cpp lib/add.cpp lib/arg.cpp lib/Complex.cpp lib/conj.cpp lib/cos.cpp lib/cosh.cpp lib/division.cpp lib/equality.cpp lib/extraction.cpp lib/exp.cpp lib/imag.cpp lib/insertion.cpp lib/multiply.cpp lib/norm.cpp lib/real.cpp lib/sin.cpp lib/sinh.cpp lib/sqrt.cpp lib/subtract.cpp lib/tan.cpp lib/tanh.cpp lib/Complex.hpp lib/Complex.h lib/polar.cpp lib/log.cpp ../tests/catch_amalgamated.o
```

To run the tests, you need to run the compiled test file:

```
./a.out
```

The result will look like this:
```
Randomness seeded to: 2076002396
Running tests on log
Running tests on Complex Division
Running tests on Complex Equality
Running tests on Complex Subtraction
Running tests on Complex Multiplication
Running tests on imaginary output
Running tests on real output
Running tests on Complex Sine
Running tests on Complex Tangent
Running tests on Complex Cosine
Running tests on Absolute Value of Complex
===============================================================================
All tests passed (114 assertions in 21 test cases)
```

These tests can also be run by adding CMake inside of the [src](src/) directory.

First navigate to the CMake directory and run the command:

```
make all
```

Afterwards, run the compiled test file:

```
./MyProgram
```

The results should look similar to the test run using Catch2


## Built With

* [GNU Tools](https://www.gnu.org/software/gcc/) - GNU compiler tools


## Structure
```
.
├── CONTRIBUTING.md
├── main
├── main-debug
├── Makefile
├── replit.nix
├── result -> /nix/store/ycbh5a0p3ksbynxirbs5j1rzajb901pj-nix-shell
├── src
│   ├── CMakeLists.txt
│   ├── fac.cpp
│   ├── fac.h
│   ├── lib
│   │   ├── abs.cpp
│   │   ├── add.cpp
│   │   ├── arg.cpp
│   │   ├── Complex.cpp
│   │   ├── Complex.h
│   │   ├── Complex.hpp
│   │   ├── Complex.hpp.gch
│   │   ├── conj.cpp
│   │   ├── cos.cpp
│   │   ├── cosh.cpp
│   │   ├── division.cpp
│   │   ├── equality.cpp
│   │   ├── exp.cpp
│   │   ├── extraction.cpp
│   │   ├── imag.cpp
│   │   ├── insertion.cpp
│   │   ├── log.cpp
│   │   ├── multiply.cpp
│   │   ├── norm.cpp
│   │   ├── polar.cpp
│   │   ├── real.cpp
│   │   ├── sin.cpp
│   │   ├── sinh.cpp
│   │   ├── sqrt.cpp
│   │   ├── subtract.cpp
│   │   ├── tan.cpp
│   │   └── tanh.cpp
│   ├── main
│   ├── main.cpp
│   ├── main-debug
│   ├── main.out
│   ├── main_test.cpp
│   └── Makefile
└── tests
    ├── a.out
    ├── catch_amalgamated.cpp
    ├── catch_amalgamated.hpp
    └── catch_amalgamated.o
```


## Building

Build by making a build directory (i.e. `build/`), run `cmake` in that dir, and then use `make` to build the desired target.

Example:

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=[Debug | Coverage | Release]
make
./main
make test      # Makes and runs the tests.
make coverage  # Generate a coverage report.
make doc       # Generate html documentation.
```

## .gitignore

The [.gitignore.txt](.gitignore.txt) file is a copy of the [Github C++.gitignore file](https://github.com/github/gitignore/blob/master/C%2B%2B.gitignore), with the addition of ignoring the build directory (`build/`).



## Contributing

Please read [CONTRIBUTING.md](https://gist.github.com/PurpleBooth/b24679402957c63ec426) for details on our code of conduct, and the process for submitting pull requests to us.

## Versioning

This is the only version of this project

## Authors

* **Khush Lalchandani**
* **Charlie Kalapati**
* **William Floyd**
* **Emily Lucas**
* **Niman Ahmed**

## License

This project is licensed under the MIT License - see the [LICENSE.txt](LICENSE.txt) file for details

## Acknowledgments

* Thank you to Mr. Shockey and my groupmates for making this possible
