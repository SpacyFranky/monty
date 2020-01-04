<h1>The Monty language</h1>
<p>Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.</p>

<h1>The Monty Program</h1>
<p>
Usage: monty file
where file is the path to the file containing Monty byte code
If the user does not give any file or more than one argument to your program, print the error message USAGE: monty file, followed by a new line, and exit with the status EXIT_FAILURE
If, for any reason, its not possible to open the file, print the error message Error: Can't open file <file>, followed by a new line, and exit with the status EXIT_FAILURE
where <file> is the name of the file
If the file contains an invalid instruction, print the error message L<line_number>: unknown instruction <opcode>, followed by a new line, and exit with the status EXIT_FAILURE
where is the line number where the instruction appears.
Line numbers always start at 1
The monty program runs the bytecodes line by line and stop if either:
it executed properly every line of the file
it finds an error in the file
an error occured
If you cant malloc anymore, print the error message Error: malloc failed, followed by a new line, and exit with status EXIT_FAILURE.
You have to use malloc and free and are not allowed to use any other function from man malloc (realloc, calloc, )
</p>


<h1>How to test the output</h1>
<p>
after gcc type : <b>./monty</b>, the output should be <b>USAGE: monty file</b><br>
                 <b> ./monty <file> </b>, file should doesn't exist in your current directory. The output should be <b>Error: Can't open file file</b><br>
                 <b> ./monty test3 </b>, it will not work because "hello" is an unknown instruction. Output: <b>L1: unkown instruction hello</b> followed by a new line. This is a little bug that will be fixed. There should be no new line at the end.<br>
                <b> ./monty test4 </b>, this will work fine because it's now fixed to read the '\n' and '\0' as instructions and will not cause a problem.<br>
</p>