Tokens write to:
lex_tokens.l

Grammars write to:
yacc_syntax.y




The task is to write Syntax analyzer. The requirements:
- Teams and what language to parse - see in the attached file
- The parser should recognize most common structures:
a) imports
b) functions (with params, function calls)
c) cycles
d) if's
e) simple expressions (with +-*/() )
f) string and number literals
g) variables, assignments



- You can use any tool for generating the parser from grammar
- Put your grammar in BNF in the readme.
- Input (in.txt) should contain example with most common structures
- Output (out.txt) should contain json representation (it is like Intermediate Representation) of your input (as in the previous HA - we are waiting for the best format from you, specification here is not mandatory)
- Requirements for tests, readme, good structure - the same.



Only commonly used funciton modificators used: such as {abstract, static, etc}, no {synchronized, etc exotic}
No labeled statements
No switch case constructions
Not Full work with array supported

