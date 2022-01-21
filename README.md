<h2 align="center">MathGen V0.1.2</h2>

- cd src
- make
- use sh cleanup.sh to for cleanup (deletes the *.o *.txt and the mathGen executable)

### TODO:
- [x] Make a test file
- [ ] Do some makefile research (I want to make a include file for all the other .cpp and .h files, so it's just the Makefile, cleanup.sh, main.cpp and the executable in the src folder.)
- [X] Make a menu
  - [X] Maybe add some color to the menu
- [X] Write a random plus assignments to the console.
- [X] Write the plus assignments down to 2 separate files. (A student file (without the answers) and a teacher file (with the same questions but with the answers))
  - [X] Maybe ad it like this:
    ```
    1)                                - this is the assignment number
    123 + 123                         - this is the assignment



    Might also be able to do

       123                            - WITH UNDERLINE
    +  123

    =  1230
    ```
- [ ] Maybe make some others like - * / ^
  - [X] -
  - [X] *
  - [X] /
  - [ ] ^
  - [ ] √

<b><h2 align="center">LANGUAGE UPDATE</h2></b>

### plan:

``` 
Make a C++ file that scans a folder for language files. 
The function will work like this: GiveLine(24) where you get line 24 from the current file.

Also make a config file that asks what language you wanna use on the first run.
```

### TODO:

- [ ] Language Manager
  - [ ] Reads a file and sends the line back
  - [ ] Read files
  - [ ] Get text from a file
  - [ ] setup a system to scan a folder for language files