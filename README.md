# Printf
A custom _printf() for learning purposes was developed by cohort #19 students Washington Calda and Joaquin Furtado.

# Description
The function ``_printf`` writes output to standard output. The function writes under the control of a format string that specifies how subsequent arguments are converted for output.
 These arguments are placed using the percentage ``'%'`` operator.
 
 Prototype: ``int _printf(const char *format, ...);``
 
###  The conversion specifier:

The conversion specifier is a letter that specifies the type of conversion to be applied. Our program includes the following conversion specifiers:

``d``: decimal number to be provided for printing.

``i``: integer to be provided for printing

``c``: character to be provided for printing

``s``: ...The const char * argument is expected to be a pointer to an array of character type           (pointer to a string).

``%``: A per cent sign '%' is written. No argument is converted.

Return value:

Upon success, _printfs return the number of characters printed (excluding the null byte used to end output to strings) A negative 1 is returned if an output error is encountered.

## Flowchart
 https://drive.google.com/file/d/1CX9wKFYvEFTlChoiaPSjeqMcQCfI115z/view?usp=sharing

# Resources
 https://holberton-school-org.slack.com/files/U044C5Q8TEV/F0496RMV3M1/secrets_of_printf.pdf

