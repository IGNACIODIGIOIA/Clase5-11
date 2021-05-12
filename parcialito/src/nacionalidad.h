/*
 * nacionalidad.h
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */

#ifndef NACIONALIDAD_H_
#define NACIONALIDAD_H_
typedef struct{
	int idNacionalidad;
	char descripcion[100];

}Nacionalidad;

Nacionalidad* nacionalidad_new(void);
Nacionalidad* nacionalidad_newParam(void);
int nacionalidad_Delete(Nacionalidad* this);
int nacionalidad_SetDesc(Nacionalidad* this, char*descripcion);
char* nacionalidad_GetDesc(Nacionalidad* this, int* flagError);
int nacionalidad_SetIdNac(Nacionalidad* this, int idNacionalidad);
int nacionalidad_GetIdnac(Nacionalidad* this, int idNacionalidad);

#endif /* NACIONALIDAD_H_ */
