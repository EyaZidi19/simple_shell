#  *:tw-1f4a5:    simple_shell*     :tw-1f528: :tw-1f527: :tw-1f465:  
This project consists in the creation of a simple shell that will allow the user to interact with the system using commands.

It handles the PATH to find the programs it will execute. It will use the execve() system call to perform the commands. The execution of the programs will be done under children processes using fork(). CTRL+C won't close the program, with the command exit close the shell.

## :tw-1f4cc: Description 
A simple UNIX command interpreter. mini_shell is the user interface to communicate with the operative system services.is a simple It displays a prompt and waits for user to type a command. 
Prompt is displayed again each time a command has been executed. 
This shell has limited features so no piping, redirection, aliases, expansion, and no arguments passed to programs. 
If executable cannot be found, error message is printed and prompt displayed again.





## :tw-1f4cc: Using simple_shell
simple_shell works in two modes just like the Bourne shell. In interactive mode the user launches shell and inputs commands into the standard input. These commands are then parsed into tokens and simple_shell searches through the environment PATH for a matching executable of the leading command. If an executable is found, simple_shell will run that executable with the supplied options and arguments.

In non-interactive mode, the shell doesn't directly interact with the user. Instead the shell is used by a script to run commands or commands are piped directly into the shell's standard input. In this mode the shell is launched, commands are run, and then the shell exits. Please see the Basic Examples in Non-interactive Mode for more details.

###:tw-1f4cc:  Basic Examples in Interactive Mode
simple_shell works very similarily to the Bourne shell. simple_shell will read in the standard input (the keyboard by default) and send output to the standard output and errors to standard error.

To start simple_shell in Interactive Mode type:
` ./hsh`

## :tw-1f4cc:  Compilation:tw-1f4d5:

Your shell will be compiled this way:

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 _.c -o hsh

##     :tw-1f4cc: files 

|  files  |  description |
| ------------ | ------------ |
| README.md   | description about the project repo  |
| man_1_simple_shell  |  is the man page for the shell we are going to write.  |
|  AUTHORS |  file at the root of your repository, listing all individuals having contributed content to the repository. |
|  simple_shell.h |  is the header file which contains the standared header file and prototype of the  function used in the program.| |
|  main.c  | initialize the program with infinite loop by call the prompt function  |
| string_int.c  |  functions  that |
|  convertfun.c |  functions  that |









### 

------------

### :tw-1f4cc:  Output    :tw-1f4d8:

------------


our program have the same output as sh

Example:

$ ls use path for list the files

$ echo l use path for found echo and execute file

$ /bin/ls for list the files in the current directory or

$ /bin/pwd for display the current directory address

  
### :tw-1f4cc:  Supported Control Operators :tw-1f4d7:

| Operator  |Description   |
| ------------ | ------------ |
|   ; |  Separates commands into command lists that can be executed unconditionally (doesn't depend on the failure or success of the previous command) |
|  && |  Executes the next command in a command list if the previous command succeeded (had an exit code of 0) |
 |||  | 	Executes the next command in a command list if the previous command failed (had a non-zero exit code)  |


### :tw-1f4cc:   AUTHORS   :fa-users:
- Eya Zidi<3805@holbertonschool.com>
- Fedi Chihaoui<3679@holbertonschool.com>



