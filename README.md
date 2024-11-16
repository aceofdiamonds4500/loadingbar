# Nick's Loading Bar
## Description
This is a pretty simple idea I had. I thought I'd find a way to use ``memset()`` so this makes for a very useful demonstration. Type "q" to quit or "function" to see the loading bar in action.

Here's the beef of the program:
- includes a char[] for the loading bar with a max size of 50
- includes a function ``setProgress()`` which takes a certain percentage that you want to fill the bar (50%, 100%, etc. written as ``setProgress(50)``)
  - the function fills the char[] loadBar with ``int barSize`` for however big you want the bar to be
  - ``int index`` is used to fill the bar with '#' characters to represent completion
- uses a while loop to wait for q to quit, can type "function" to get the most updated version of the loading bar or "load" to see the less efficient, less working version (might remove)

## Running/Compiling
It's just C++ code, all you need to do on Linux is to write ``g++ loadBar.cpp -o a.out`` in the terminal then ``./a.out`` to run it. For Windows it should be way easier to plug it into an IDE like CodeBlocks and just use that to compile/run.
