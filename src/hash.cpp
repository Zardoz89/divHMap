/*****************************************************************************/
/**                 Tabla Hash para DIV2                                    **/
/**                                                                         **/
/**  Permite utilizar una clave String para acceder a arrays de INTs        **/
/*****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Tipos de tama¤o predeterminado */
#if __STDC_VERSION__ >= 199901L
#include <stdint.h>
#else
#include "myint.h"
#endif

#define GLOBALS
#include "div.h"

/**
 * newMap()
 * Devuelve un puntero a un nuevo map
 */

/**
 * putIntMap(ptrMap, String, valor)
 *
 * Agrega o sobre-escribe una entrada del mapa con un Int
 * Devuelve 0 si no hay ningun error
 */

/**
 * getIntMap(ptrMap, String, offset variable)
 *
 * Busca el valor dado para una clave y lo devuelve en la variable pasada como ultimo argumento.
 * Devuelve 0 si ha encontrado dicho valor para la clave pasada
 */

/**
 * putIntArrayMap(ptrMap, String, offset array)
 *
 * Agrega o sobre-escribe una entrada del mapa con un array de ints. El primer valor del array siempre debe de ser el tama¤o del array
 * Devuelve 0 si no hay ningun error
 */

/**
 * getIntArrayMap(ptrMap, String, offset variable)
 *
 * Busca el valor dado para una clave y asigna el offset a la variable dada
 * Devuelve 0 si ha encontrado dicho valor para la clave pasada
 */

/**
 * removeMap(ptrMap, String)
 *
 * Elimina una entrada en el mapa
 * Devuelve 0 si ha encontrado dicho valor para la clave pasada
 */

/**
 * freeMap(ptrMap)
 *
 * Libera la memoria usada por el mapa
 * TODO Deberia de recorrer todos los valores del map y liberarlos
 */

/**
 * mapSize(ptrMap)
 *
 * Devuelve el n§ de entradas en el mapa
 */

void __export divlibrary(LIBRARY_PARAMS) {
  //          Nombre en DIV,      ptr a funci¢n,     n§ de par metros
  //COM_export("newMap", newHashMap, 0);
  //COM_export("putIntMap", newHashMap, 3);
  //COM_export("getIntMap", newHashMap, 3);
  //COM_export("removeMap", newHashMap, 2);
  //COM_export("freeMap", newHashMap, 1);
}

void __export divmain(COMMON_PARAMS) {
  GLOBAL_IMPORT();
}
/* vim: set ts=2 sw=2 tw=0 et fileencoding=cp858 :*/
