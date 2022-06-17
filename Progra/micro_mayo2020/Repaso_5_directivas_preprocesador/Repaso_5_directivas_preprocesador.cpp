 #directivas del preprocesador
 
 #define, #elif, #else, #endif, #error, #if, #ifdef, #ifndef, #include, #message y #undef.

           
//Sintaxis
         
#define 	label 	text
#elif 		condition
#else
#endif
#error 		"message"
#if 		condition
#ifdef 		label
#ifndef 	label
#include 	{"filename" | <filename>}
#message 	"message"
#undef 		label

//Descripción del comando
#define 	Definir macro
#include 	incluir un archivo de código fuente
#undef 		Cancelar la macro definida
#ifdef 		devuelve verdadero si la macro ya está definida
#ifndef 	Devuelve verdadero si la macro no está definida
#if 		Si la condición dada es verdadera, compile el siguiente código
#else 		#if alternativas
#elif 		Si la condición #if dada anterior no es verdadera y
			la condición actual es verdadera, compile el siguiente código
#endif 		Finalizando un bloque de compilación condicional # if ...... # else
#error 		Cuando encuentre un error estándar, envíe un mensaje de error
#pragma 	Use métodos estandarizados para emitir comandos especiales al compilador

//macros pre definidas
__DATE__ La fecha actual, una constante de caracteres expresada en el formato "MMM DD AAAA".
__TIME__ La hora actual, una constante de caracteres expresada en el formato "HH: MM: SS".
__FILE__ Esto contendrá el nombre del archivo actual, una constante de cadena.
__LINE__ Esto contendrá el número de línea actual, una constante decimal.
__STDC__ se define como 1 cuando el compilador compila con el estándar ANSI.


#ifndef __unix__ // __unix__ is typically defined when targetting Unix 
#error "Only Unix is supported"
#endif
