# How to create dynamic library

#### step-1: create directory named dynamic_library

```bash
mkdir dynamic_library
```

```bash
cd dynamic_library
```

#### step-2: create directory named Include in dynamic_library directory and touch in it all headers files

```bash
mkdir Include
```

```bash
cd Include
```

```bash
touch addition.h division.h modulus.h multiplication.h subtraction.h
```

#### step-3: create directory named Lib in dynamic_library directory and touch in it all source files for the header files and implement them

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
gcc -c -g -Wall -fPIC addition.c
```

```bash
gcc -c -g -Wall -fPIC division.c
```

```bash
gcc -c -g -Wall -fPIC modulus.c
```

```bash
gcc -c -g -Wall -fPIC multiplication.c
```

```bash
gcc -c -g -Wall -fPIC subtraction.c
```

#### 	
step-5: create dynamic library for all object files	

```bash
gcc -shared -o liboperation.so addition.o division.o modulus.o multiplication.o subtraction.o
```

#### step-7: touch main.c in directory static_library and generate main.o

```bash
cd ../
```

```bash
gcc main.c -L./Lib -loperation -o calc -I./Include
```

#### step-8: touch main.c in directory static_library and generate main.o

```bash
export LD_LIBRARY_PATH=/home/amlashraf/EmbeddedLinuxTasks/EmbeddedLinux_Task1/	
dynamic_library/Lib
```

```bash
./calc 
```

```
ldd calc 
```

![](/home/amlashraf/Downloads/ldd_dynamic.PNG)

```bash
 file calc 
```

![](/home/amlashraf/Downloads/WhatsApp Image 2023-12-23 at 12.15.10 AM(2).jpeg)



```bash
objdump -T calc > objdumpFile
```

