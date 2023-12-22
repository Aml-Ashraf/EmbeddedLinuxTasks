# How to create static library

#### step-1: create directory named static_library	

```bash
mkdir static_library
```

```bash
cd static_library
```

#### step-2: create directory named Include in static_library directory and touch in it all headers files

```bash
mkdir Include
```

```bash
cd Include
```

```bash
touch addition.h division.h modulus.h multiplication.h subtraction.h
```

#### step-3: create directory named Lib in static_library directory and touch in it all source files for the header files and implement them

```bash
cd ../
```

```bash
mkdir Lib
```

```bash
touch addition.c division.c modulus.c multiplication.c subtraction.c
```

#### step-4: create object files for all source files

```bash
gcc -c addition.c
```

```bash
gcc -c division.c
```

```bash
gcc -c modulus.c
```

```bash
gcc -c multiplication.c
```

```bash
gcc -c subtraction.c
```

#### step-5: create static library for all object files	

```bash
ar -rcs liboperation.a addition.o division.o modulus.o multiplication.o 
subtraction.o
```

#### step-6: touch main.c in directory static_library and generate main.o

```bash
cd ../
```

```bash
touch main.c
```

```bash
gcc -c main.c -I ./Include
```

#### step-7: generate the executable file for main.c after linking it with the static library

```bash
gcc main.c -static -o main.exe -L./Lib -loperation -I./Include
```

```bash
./main.exe 
```

```bash
ldd main.exe
```

![](/home/amlashraf/Downloads/WhatsApp Image 2023-12-23 at 12.15.10 AM.jpeg)

```bash
file main.exe
```

![](/home/amlashraf/Downloads/WhatsApp Image 2023-12-23 at 12.15.10 AM(1).jpeg)



```bash
objdump -t main.exe > objdumpStatic
```

