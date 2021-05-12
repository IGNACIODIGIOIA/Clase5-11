/*
 * tipo.h
 *
 *  Created on: 11 may. 2021
 *      Author: ignac
 */

#ifndef TIPO_H_
#define TIPO_H_

typedef struct{
	int idTipo;
	char marca[50];
	char fabrica[50];
	char tipoTela[50];
}Tipo;

Tipo* producto_new(void);
Tipo* producto_newParam(void);
int producto_Delete(Tipo* this);

int tipo_SetIdTipo(Tipo* this, int idTipo);
int tipo_GetIdTipo(Tipo* this, int idTipo);
int tipo_SetMarca(Tipo* this, char* marca);
char* tipo_GetMarca(Tipo* this, int* flagError);
int tipo_SetFabrica(Tipo* this, char* fabrica);
char* tipo_GetFabrica(Tipo* this, int* flagError);
int tipo_SetTipoTela(Tipo* this, char* TipoTela);
char* tipo_GetTipoTela(Tipo* this, int* flagError);


#endif /* TIPO_H_ */
