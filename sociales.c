/*
* @file/archivo tabladedispersion.c
*
* @brief/resumen Este programa hace la lectura de 250 archivos de texto los cuales, en los cuales 
se encuentra las respuestas de 250 entrevistas cada entrevista es asignada a una estructura para 
posteriormente de acuerdo al numero de identificacion que tenga la entrevista se asignara a una poscicion 
en una tabla HASH, a la par se generara una lista doble en la cual cada nodo de solo contara con el estado
donde se realizo la entrevista y su numero de identificacion, el usuario ingresara sobre que estado y campos 
quiere que se genere la bsqueda en la lista y en la tabla hash una vez que se tiene la busque sobre las entrevistas 
y respuestas indicaos por los campos ingresados por el usuario se debera generar un reporte en un archivo de texto 
el cual el usuario la dara el nombre.
*
* @author/autor Jose Castellanos Michelle Allegretti
* @date/fecha 22/04/2016
*/

#include "mistipos.h"
void crearTabla(tablaDispersa *tab);
int tranforma(const char *clave);
int direccion(tablaDispersa tab, const char *clave);
void insertar(tablaDispersa *tab, Entrevista lib);
Entrevista *buscar(tablaDispersa tab, const char *clave);
void eliminar(tablaDispersa *tab, const char *clave);
void mostrar(tablaDispersa tab);
void salidaDatos(Entrevista pr);
Entrevista *creaListaAZ(Entrevista *pt,Entrevista e);
Entrevista *recorreListaDer(Entrevista *pt);
Entrevista *filtraEstado(Entrevista *p);
Entrevista *filtraTema(Entrevista *pt,tablaDispersa *tab,char archivoout[20]);


/*
* En esta funcion se leen los 250 archivos y cada que lee un archivo osea una entrevista genera una estructura
con los campos estado, codigo, y las 250 preguntas posteriormente envia esta estructura a insertar en una tabla HASH
y ademas la misma estructura se envia para insertar en una lista doblemente enlazada.
* @author/autor Jose Castellanos Michelle Allegretti
* @param int agrc El numero de argumentos que se ingresaron en la linea de comandos
* @param char *argv[] Los argumentos ingresados en la linea de comando
*
*/

int main(int argc,char *argv[]){
  tablaDispersa tab;
  Entrevista e,*p,*pe;
  char codigo[20];

  FILE *fp, *fp2;
  int n;
  char test[1000], *token;
  char *separador="\n\t";
  char nomarchivo[10];
  char archivoout[20];

  int opc=0;
  int i;
  int opc1=0;
  int opc2=0;
  p=NULL;

  crearTabla(&tab);

 do{
  for(i=0;i<=59;i++){
  strcpy(nomarchivo,archivos[i]);

  //printf("%s\n",nomarchivo);

  fp=fopen(nomarchivo,"r");
  if(fp==NULL)
    {
      printf("Archivo el cual ordenar no disponible");
      exit (1);
    }
  system("clear");
  
  n=1;
  int libro=1;
  printf("%s\n", nomarchivo);
  
while(fgets(test,1000*sizeof(char),fp)!=NULL)//Cuando fgets lee algo que no es un caracter, envia NULL, proteger que no llegue al fin de archivo
    {
      if(n==154)
  { 
    n=1;
    libro++;
    }
token=strtok(test,separador);
      while(token!=NULL)//token es un puntero que si no recibe una frase, recibe NULL
  {
  if(n==1){strcpy(e.estado,token);}
  if(n==2){strcpy(e.codigo,token);}
   if(n==3){strcpy(e.p1,token);}
  if(n==4){ strcpy(e.p2,token);}
  if(n==5){ strcpy(e.p3,token);}
  if(n==6){ strcpy(e.p4,token);}
  if(n==7){strcpy(e.p5,token);}
  if(n==8){ strcpy(e.p6,token);}
  if(n==9){ strcpy(e.p7,token);}
  if(n==10){ strcpy(e.p8,token);}
  if(n==11){strcpy(e.p9,token);}
  if(n==12){ strcpy(e.p10,token);}
  if(n==13){ strcpy(e.p11,token);}
  if(n==14){ strcpy(e.p12,token);}
  if(n==15){strcpy(e.p13,token);}
  if(n==16){ strcpy(e.p14,token);}
  if(n==17){ strcpy(e.p15,token);}
  if(n==18){ strcpy(e.p16,token);}
  if(n==19){strcpy(e.p17,token);}
  if(n==20){ strcpy(e.p18,token);}
  if(n==21){ strcpy(e.p19,token);}
  if(n==22){ strcpy(e.p20,token);}
  if(n==23){strcpy(e.p21,token);}
  if(n==24){ strcpy(e.p22,token);}
  if(n==25){ strcpy(e.p23,token);}
  if(n==26){ strcpy(e.p24,token);}
  if(n==27){strcpy(e.p25,token);}
  if(n==28){ strcpy(e.p26,token);}
  if(n==29){ strcpy(e.p27,token);}
  if(n==30){ strcpy(e.p28,token);}
  if(n==31){strcpy(e.p29,token);}
  if(n==32){ strcpy(e.p30,token);}
  if(n==33){ strcpy(e.p31,token);}
  if(n==34){ strcpy(e.p32,token);}
    if(n==35){strcpy(e.p33,token);}
  if(n==36){ strcpy(e.p34,token);}
  if(n==37){ strcpy(e.p35,token);}
  if(n==38){ strcpy(e.p36,token);}
  if(n==39){strcpy(e.p37,token);}
  if(n==40){ strcpy(e.p38,token);}
  if(n==41){ strcpy(e.p39,token);}
  if(n==42){ strcpy(e.p40,token);}
  if(n==43){strcpy(e.p41,token);}
  if(n==44){ strcpy(e.p42,token);}
  if(n==45){ strcpy(e.p43,token);}
  if(n==46){ strcpy(e.p44,token);}
  if(n==47){strcpy(e.p45,token);}
  if(n==48){ strcpy(e.p46,token);}
  if(n==49){ strcpy(e.p47,token);}
  if(n==50){ strcpy(e.p48,token);}
  if(n==51){strcpy(e.p49,token);}
  if(n==52){ strcpy(e.p50,token);}
  if(n==53){ strcpy(e.p51,token);}
  if(n==54){ strcpy(e.p52,token);}
  if(n==55){strcpy(e.p53,token);}
  if(n==56){ strcpy(e.p54,token);}
  if(n==57){ strcpy(e.p55,token);}
  if(n==58){ strcpy(e.p56,token);}
  if(n==59){strcpy(e.p57,token);}
  if(n==60){ strcpy(e.p58,token);}
  if(n==61){ strcpy(e.p59,token);}
  if(n==62){ strcpy(e.p60,token);}
  if(n==63){strcpy(e.p61,token);}
  if(n==64){ strcpy(e.p62,token);}
  if(n==65){ strcpy(e.p63,token);}
  if(n==66){ strcpy(e.p64,token);}
    if(n==67){strcpy(e.p65,token);}
  if(n==68){ strcpy(e.p66,token);}
  if(n==69){ strcpy(e.p67,token);}
  if(n==70){ strcpy(e.p68,token);}
  if(n==71){strcpy(e.p69,token);}
  if(n==72){ strcpy(e.p70,token);}
  if(n==73){ strcpy(e.p71,token);}
  if(n==74){ strcpy(e.p72,token);}
  if(n==75){strcpy(e.p73,token);}
  if(n==76){ strcpy(e.p74,token);}
  if(n==77){ strcpy(e.p75,token);}
  if(n==78){ strcpy(e.p76,token);}
  if(n==79){strcpy(e.p77,token);}
  if(n==80){ strcpy(e.p78,token);}
  if(n==81){ strcpy(e.p79,token);}
  if(n==82){ strcpy(e.p80,token);}
  if(n==83){strcpy(e.p81,token);}
  if(n==84){ strcpy(e.p82,token);}
  if(n==85){ strcpy(e.p83,token);}
  if(n==86){ strcpy(e.p84,token);}
  if(n==87){strcpy(e.p85,token);}
  if(n==88){ strcpy(e.p86,token);}
  if(n==89){ strcpy(e.p87,token);}
  if(n==90){ strcpy(e.p88,token);}
  if(n==91){strcpy(e.p89,token);}
  if(n==92){ strcpy(e.p90,token);}
  if(n==93){ strcpy(e.p91,token);}
  if(n==94){ strcpy(e.p92,token);}
  if(n==95){strcpy(e.p92,token);}
  if(n==96){ strcpy(e.p93,token);}
  if(n==97){ strcpy(e.p94,token);}
  if(n==98){ strcpy(e.p95,token);}
    if(n==99){strcpy(e.p96,token);}
  if(n==100){ strcpy(e.p97,token);}
  if(n==101){ strcpy(e.p98,token);}
  if(n==102){ strcpy(e.p99,token);}
  if(n==103){strcpy(e.p100,token);}
  if(n==104){ strcpy(e.p101,token);}
  if(n==105){ strcpy(e.p102,token);}
  if(n==106){ strcpy(e.p103,token);}
  if(n==107){strcpy(e.p104,token);}
  if(n==108){ strcpy(e.p105,token);}
  if(n==109){ strcpy(e.p106,token);}
  if(n==110){ strcpy(e.p107,token);}
  if(n==111){strcpy(e.p108,token);}
  if(n==112){ strcpy(e.p109,token);}
  if(n==113){ strcpy(e.p110,token);}
  if(n==114){ strcpy(e.p111,token);}
  if(n==115){strcpy(e.p112,token);}
  if(n==116){ strcpy(e.p113,token);}
  if(n==117){ strcpy(e.p114,token);}
  if(n==118){ strcpy(e.p115,token);}
  if(n==119){strcpy(e.p116,token);}
  if(n==120){ strcpy(e.p117,token);}
  if(n==121){ strcpy(e.p118,token);}
  if(n==122){ strcpy(e.p119,token);}
  if(n==123){strcpy(e.p120,token);}
  if(n==124){ strcpy(e.p121,token);}
  if(n==125){ strcpy(e.p122,token);}
  if(n==126){ strcpy(e.p123,token);}
  if(n==127){strcpy(e.p124,token);}
  if(n==128){ strcpy(e.p125,token);}
  if(n==129){ strcpy(e.p126,token);}
  if(n==130){ strcpy(e.p127,token);}
    if(n==131){ strcpy(e.p128,token);}
  if(n==132){ strcpy(e.p129,token);}
  if(n==133){ strcpy(e.p130,token);}
  if(n==134){strcpy(e.p131,token);}
  if(n==135){ strcpy(e.p132,token);}
  if(n==136){ strcpy(e.p133,token);}
  if(n==137){ strcpy(e.p134,token);}
  if(n==138){strcpy(e.p135,token);}
  if(n==139){ strcpy(e.p136,token);}
  if(n==140){ strcpy(e.p137,token);}
  if(n==141){ strcpy(e.p138,token);}
  if(n==142){strcpy(e.p139,token);}
  if(n==143){ strcpy(e.p140,token);}
  if(n==144){strcpy(e.p141,token);}
  if(n==145){ strcpy(e.p142,token);}
  if(n==146){ strcpy(e.p143,token);}
  if(n==147){ strcpy(e.p144,token);}
  if(n==148){strcpy(e.p145,token);}
  if(n==149){ strcpy(e.p146,token);}
  if(n==150){ strcpy(e.p147,token);}
  if(n==151){ strcpy(e.p148,token);}
  if(n==152){strcpy(e.p149,token);}
  if(n==153){ strcpy(e.p150,token);insertar(&tab,e);
  p=creaListaAZ(p,e);}
  token=strtok(NULL,separador);
  n++;
    
  }

    }
      fclose(fp);
    }
  }while(strcmp(nomarchivo,"E60.txt")!=0);

  //mostrar(tab);
  recorreListaDer(p);
  do{
  printf("Busqueda inteligente\n");
  printf("Menu\n");
  printf("1.Busqueda de entrevista.\n");
  printf("2.Generar reporte.\n");
  printf("3.Salir");
  printf("Por favor escoja una opcion.\n");
  scanf("%d",&opc);
  switch(opc)
  {
      case 1:
      do{
      system("clear");
      getchar();
      printf("Busqueda\n");
      printf("Por favor ingrese el codigo a buscar: \n");
      scanf("%[^\n]",codigo);
      p=buscar(tab,codigo);
      if(p==NULL)
      {
        printf("No existe el usuario\n");
      }
      else{
      printf("Estado: %s\n",p->estado);
      printf("Codigo: %s\n",p->codigo);
      //printf(" %s\n",p->p1);
      //printf(" %s\n",p->p2);
      }
      printf("Desea buscar otro entrevista 1.SI 2.NO\n");
      scanf("%i",&opc2);
      system("clear");
      }while(opc2==1);
      printf("Desea regresar al menu 1.SI 2.NO\n");
      scanf("%i",&opc1);
      system("clear");
      break;

      case 2:
      getchar();
      pe=filtraEstado(p);
      recorreListaDer(pe);
      getchar();
      printf("Por favor ingrese el nombre del archivo de salida termina con '.txt'\n");
      scanf("%s",archivoout);
      pe=filtraTema(pe,&tab,archivoout);
      printf("Desea regresar al menu 1.SI 2.NO\n");
      scanf("%i",&opc1);
      system("clear");
      break;

      case 3:
      system("clear");
      printf("SALIENDO...\n");
      exit(0);
      break;

      default:
      printf("OPCION INVALIDA");
      printf("Desea regresar al menu 1.SI 2.NO\n");
      scanf("%i",&opc1);
      system("clear");
      break;
    }
  }while(opc1==1);



  return 0;
}

/*
* Esta función recibe un puntero del tipo tabladispersa y enviara todas las 
posiciones de la tabla a NULL esto siempre ocurrira la primera que se corra
programa.
* Regresa toda la tabla HASH apuntando a NULL
* @author/autor Jose Castellanos Michelle Allegretti
* @param tablaDispersa *tab el contenido de la tabla
* @return la tabla dispersa en NULL
*
*/

void crearTabla(tablaDispersa *tab){
  int i;
  for(i=0; i<TAMTABLA; i++){
    tab->tabla[i]=NULL;
  }
  tab->elementos=0;
  tab->factorCarga=0.0;
  return;
}

/*
* Esta función recibe un puntero del tipo char de la clave de la 
entrevista la cual va transformarla en un numero entero.
* Regresa la clave tranformada en un entero
* @author/autor Jose Castellanos Michelle Allegretti
* @param const char *clave para poder crear la tabla por primera vez
* @return int d un numero entero
*
*/

 int transforma(const char *clave)
 {
  int j;
  int d = 0;
  for (j = 0; j < strlen(clave); j++)
  {
     d = d + clave[j];
  }
  return d;
 }

/*
* Esta función recibe la tabla hash y la clave de la entrevista este tranforma
esta clave y determina en que lugar en la tabla estara
* Regresa la direccion donde se insertara el libro
* @author/autor Jose Castellanos Michelle Allegretti
* @param tablaDispersa tab que es la tabla hash
* @param const char *clave que es la clave del libro
* @return int p con la direccion que ocupara en la tabla hash
*
*/

 int direccion(tablaDispersa tab,const char *clave)
 {
  int p;
  int d;

  d = transforma(clave);
  // se aplica aritmética modular para obtener dirección base
  p =  d % TAMTABLA;
  while (tab.tabla[p]!= NULL  && tab.tabla[p]->esAlta)
  {
    p = p + 1;
    p = p % TAMTABLA;   // considera array como circular
  }

  return p;
 }

/*
* Esta función recibe un puntero de tipo tablaDispersa y la estructura
de la entrevista que se va insertar en la tabla hash con la clave que sera convertida
mediante la funcion de buscar y direccion
* @author/autor Jose Castellanos Michelle Allegretti
* @param tablaDispersa *tab que es la tabla hash
* @param Libros lib que es el libro a insertar
*
*/

void insertar(tablaDispersa *tab,Entrevista e){
  Entrevista *p;
  int posicion,i;

  if ((*tab).factorCarga < 1)
  {
    p = buscar(*tab,e.codigo);
    if (p == NULL) //Si no esta
    {
     // se busca una posicion de insercion
     posicion = direccion(*tab,e.codigo);
     if ((*tab).tabla[posicion] == NULL)
      // nunca ha habido elemento en esa posicion
      (*tab).tabla[posicion] = (Entrevista*) malloc(sizeof(Entrevista));
     strcpy((*tab).tabla[posicion]->estado,e.estado);
     strcpy((*tab).tabla[posicion]->codigo,e.codigo);
     strcpy((*tab).tabla[posicion]->p1,e.p1);
     strcpy((*tab).tabla[posicion]->p2,e.p2);
     strcpy((*tab).tabla[posicion]->p3,e.p3);
     strcpy((*tab).tabla[posicion]->p4,e.p4);
     strcpy((*tab).tabla[posicion]->p5,e.p5);
     strcpy((*tab).tabla[posicion]->p6,e.p6);
     strcpy((*tab).tabla[posicion]->p7,e.p7);
     strcpy((*tab).tabla[posicion]->p8,e.p8);
     strcpy((*tab).tabla[posicion]->p9,e.p9);
     strcpy((*tab).tabla[posicion]->p10,e.p10);
     strcpy((*tab).tabla[posicion]->p11,e.p11);
     strcpy((*tab).tabla[posicion]->p12,e.p12);
     strcpy((*tab).tabla[posicion]->p13,e.p13);
     strcpy((*tab).tabla[posicion]->p14,e.p14);
     strcpy((*tab).tabla[posicion]->p15,e.p15);
     strcpy((*tab).tabla[posicion]->p16,e.p16);
     strcpy((*tab).tabla[posicion]->p17,e.p17);
     strcpy((*tab).tabla[posicion]->p18,e.p18);
     strcpy((*tab).tabla[posicion]->p19,e.p19);
     strcpy((*tab).tabla[posicion]->p20,e.p20);
     strcpy((*tab).tabla[posicion]->p21,e.p21);
     strcpy((*tab).tabla[posicion]->p22,e.p22);
     strcpy((*tab).tabla[posicion]->p23,e.p23);
     strcpy((*tab).tabla[posicion]->p24,e.p24);
     strcpy((*tab).tabla[posicion]->p25,e.p25);
     strcpy((*tab).tabla[posicion]->p26,e.p26);
     strcpy((*tab).tabla[posicion]->p27,e.p27);
     strcpy((*tab).tabla[posicion]->p28,e.p28);
     strcpy((*tab).tabla[posicion]->p29,e.p29);
     strcpy((*tab).tabla[posicion]->p30,e.p30);
     strcpy((*tab).tabla[posicion]->p31,e.p31);
     strcpy((*tab).tabla[posicion]->p32,e.p32);
     strcpy((*tab).tabla[posicion]->p33,e.p33);
     strcpy((*tab).tabla[posicion]->p34,e.p34);
     strcpy((*tab).tabla[posicion]->p35,e.p35);
     strcpy((*tab).tabla[posicion]->p36,e.p36);
     strcpy((*tab).tabla[posicion]->p37,e.p37);
     strcpy((*tab).tabla[posicion]->p38,e.p38);
     strcpy((*tab).tabla[posicion]->p39,e.p39);
     strcpy((*tab).tabla[posicion]->p40,e.p40);
     strcpy((*tab).tabla[posicion]->p41,e.p41);
     strcpy((*tab).tabla[posicion]->p42,e.p42);
     strcpy((*tab).tabla[posicion]->p43,e.p43);
     strcpy((*tab).tabla[posicion]->p44,e.p44);
     strcpy((*tab).tabla[posicion]->p45,e.p45);
     strcpy((*tab).tabla[posicion]->p46,e.p46);
     strcpy((*tab).tabla[posicion]->p47,e.p47);
     strcpy((*tab).tabla[posicion]->p48,e.p48);
     strcpy((*tab).tabla[posicion]->p49,e.p49);
     strcpy((*tab).tabla[posicion]->p50,e.p50);
     strcpy((*tab).tabla[posicion]->p51,e.p51);
     strcpy((*tab).tabla[posicion]->p52,e.p52);
     strcpy((*tab).tabla[posicion]->p53,e.p53);
     strcpy((*tab).tabla[posicion]->p54,e.p54);
     strcpy((*tab).tabla[posicion]->p55,e.p55);
     strcpy((*tab).tabla[posicion]->p56,e.p56);
     strcpy((*tab).tabla[posicion]->p57,e.p57);
     strcpy((*tab).tabla[posicion]->p58,e.p58);
     strcpy((*tab).tabla[posicion]->p59,e.p59);
     strcpy((*tab).tabla[posicion]->p60,e.p60);
     strcpy((*tab).tabla[posicion]->p61,e.p61);
     strcpy((*tab).tabla[posicion]->p62,e.p62);
     strcpy((*tab).tabla[posicion]->p63,e.p63);
     strcpy((*tab).tabla[posicion]->p64,e.p64);
     strcpy((*tab).tabla[posicion]->p65,e.p65);
     strcpy((*tab).tabla[posicion]->p66,e.p66);
     strcpy((*tab).tabla[posicion]->p67,e.p67);
     strcpy((*tab).tabla[posicion]->p68,e.p68);
     strcpy((*tab).tabla[posicion]->p69,e.p69);
     strcpy((*tab).tabla[posicion]->p70,e.p70);
     strcpy((*tab).tabla[posicion]->p71,e.p71);
     strcpy((*tab).tabla[posicion]->p72,e.p72);
     strcpy((*tab).tabla[posicion]->p73,e.p73);
     strcpy((*tab).tabla[posicion]->p74,e.p74);
     strcpy((*tab).tabla[posicion]->p75,e.p75);
     strcpy((*tab).tabla[posicion]->p76,e.p76);
     strcpy((*tab).tabla[posicion]->p77,e.p77);
     strcpy((*tab).tabla[posicion]->p78,e.p78);
     strcpy((*tab).tabla[posicion]->p79,e.p79);
     strcpy((*tab).tabla[posicion]->p80,e.p80);
     strcpy((*tab).tabla[posicion]->p81,e.p81);
     strcpy((*tab).tabla[posicion]->p82,e.p82);
     strcpy((*tab).tabla[posicion]->p83,e.p83);
     strcpy((*tab).tabla[posicion]->p84,e.p84);
     strcpy((*tab).tabla[posicion]->p85,e.p85);
     strcpy((*tab).tabla[posicion]->p86,e.p86);
     strcpy((*tab).tabla[posicion]->p87,e.p87);
     strcpy((*tab).tabla[posicion]->p88,e.p88);
     strcpy((*tab).tabla[posicion]->p89,e.p89);
     strcpy((*tab).tabla[posicion]->p90,e.p90);
     strcpy((*tab).tabla[posicion]->p91,e.p91);
     strcpy((*tab).tabla[posicion]->p92,e.p92);
     strcpy((*tab).tabla[posicion]->p93,e.p93);
     strcpy((*tab).tabla[posicion]->p94,e.p94);
     strcpy((*tab).tabla[posicion]->p95,e.p95);
     strcpy((*tab).tabla[posicion]->p96,e.p96);
     strcpy((*tab).tabla[posicion]->p97,e.p97);
     strcpy((*tab).tabla[posicion]->p98,e.p98);
     strcpy((*tab).tabla[posicion]->p99,e.p99);
     strcpy((*tab).tabla[posicion]->p100,e.p100);
     strcpy((*tab).tabla[posicion]->p101,e.p101);
     strcpy((*tab).tabla[posicion]->p102,e.p102);
     strcpy((*tab).tabla[posicion]->p103,e.p103);
     strcpy((*tab).tabla[posicion]->p104,e.p104);
     strcpy((*tab).tabla[posicion]->p105,e.p105);
     strcpy((*tab).tabla[posicion]->p106,e.p106);
     strcpy((*tab).tabla[posicion]->p107,e.p107);
     strcpy((*tab).tabla[posicion]->p108,e.p108);
     strcpy((*tab).tabla[posicion]->p109,e.p109);
     strcpy((*tab).tabla[posicion]->p110,e.p110);
     strcpy((*tab).tabla[posicion]->p111,e.p111);
     strcpy((*tab).tabla[posicion]->p112,e.p112);
     strcpy((*tab).tabla[posicion]->p113,e.p113);
     strcpy((*tab).tabla[posicion]->p114,e.p114);
     strcpy((*tab).tabla[posicion]->p115,e.p115);
     strcpy((*tab).tabla[posicion]->p116,e.p116);
     strcpy((*tab).tabla[posicion]->p117,e.p117);
     strcpy((*tab).tabla[posicion]->p118,e.p118);
     strcpy((*tab).tabla[posicion]->p119,e.p119);
     strcpy((*tab).tabla[posicion]->p120,e.p120);
     strcpy((*tab).tabla[posicion]->p121,e.p121);
     strcpy((*tab).tabla[posicion]->p122,e.p122);
     strcpy((*tab).tabla[posicion]->p123,e.p123);
     strcpy((*tab).tabla[posicion]->p124,e.p124);
     strcpy((*tab).tabla[posicion]->p125,e.p125);
     strcpy((*tab).tabla[posicion]->p126,e.p126);
     strcpy((*tab).tabla[posicion]->p127,e.p127);
     strcpy((*tab).tabla[posicion]->p128,e.p128);
     strcpy((*tab).tabla[posicion]->p129,e.p129);
     strcpy((*tab).tabla[posicion]->p130,e.p130);
     strcpy((*tab).tabla[posicion]->p131,e.p131);
     strcpy((*tab).tabla[posicion]->p132,e.p132);
     strcpy((*tab).tabla[posicion]->p133,e.p133);
     strcpy((*tab).tabla[posicion]->p134,e.p134);
     strcpy((*tab).tabla[posicion]->p135,e.p135);
     strcpy((*tab).tabla[posicion]->p136,e.p136);
     strcpy((*tab).tabla[posicion]->p137,e.p137);
     strcpy((*tab).tabla[posicion]->p138,e.p138);
     strcpy((*tab).tabla[posicion]->p139,e.p139);
     strcpy((*tab).tabla[posicion]->p140,e.p140);
     strcpy((*tab).tabla[posicion]->p141,e.p141);
     strcpy((*tab).tabla[posicion]->p142,e.p142);
     strcpy((*tab).tabla[posicion]->p143,e.p143);
     strcpy((*tab).tabla[posicion]->p144,e.p144);
     strcpy((*tab).tabla[posicion]->p145,e.p145);
     strcpy((*tab).tabla[posicion]->p146,e.p146);
     strcpy((*tab).tabla[posicion]->p147,e.p147);
     strcpy((*tab).tabla[posicion]->p148,e.p148);
     strcpy((*tab).tabla[posicion]->p149,e.p149);
     strcpy((*tab).tabla[posicion]->p150,e.p150);
     (*tab).tabla[posicion]->esAlta = 1;
     (*tab).elementos++;
     (*tab).factorCarga = ((double)(*tab).elementos)/TAMTABLA;
     //if ((*tab). factorCarga > 0.5)
       /*printf("Factor de   carga = %f \n", (*tab).factorCarga);*/
    //}
  }
 }
}

/*
* Esta función recibe la tabla hash y la clave de la entrevista este tranforma
esta clave y busca la entrevista dentro de la tabla hash
* Regresa la direccion donde se encuentra la entrevista
* @author/autor Jose Castellanos Michelle Allegretti
* @param tablaDispersa tab que es la tabla hash
* @param const char *clave que es la clave de la entrevista
* @return Entrevista *pr la direccion donde se encuentra la entrevista
*
*/

Entrevista *buscar(tablaDispersa tab,const char *clave)
 {
  Entrevista *pr;
  int p;
  int d, cont;
  int encontrado;

  d = transforma(clave);
  // se aplica aritmética modular para obtener dirección base
  p =  d % TAMTABLA;
  cont = 1;

  encontrado = 0;
  while  (tab.tabla[p]!= NULL && !encontrado && cont <= TAMTABLA)
  {
    if (strcmp(tab.tabla[p]->codigo,clave)== 0
                       && (tab.tabla[p]->esAlta))
       encontrado = 1;
    else
    {
       p = p + 1;
       p = p % TAMTABLA;  /* considera array como circular */
        cont = cont + 1;
    }
  }
  if (encontrado)
    pr = tab.tabla[p];
  else
    pr = NULL;
  return pr;
 }

/*
* Esta función recibe la tabla hash y la clave de la entrevista este tranforma
esta clave y busca el libro dentro de la tabla hash y pone el estado de alto
en 0 
* @author/autor Jose Castellanos Michelle Allegretti
* @param tablaDispersa tab que es la tabla hash
* @param const char *clave que es la clave del libro
*
*/


void eliminar(tablaDispersa *tab, const char *clave)
 {
  Entrevista *p;

  p =buscar(*tab,clave);

  if (p != NULL)
    p -> esAlta = 0;

  (*tab).elementos--;
  (*tab).factorCarga = ((*tab).elementos)/TAMTABLA;
 }

 void mostrar(tablaDispersa tab)
 {
  int i;

  for(i = 0 ;i <=TAMTABLA-1; i++)
    if (tab.tabla[i]!= NULL && (tab.tabla[i]->esAlta))
    {
      printf("Posicion %d ",i);
      salidaDatos(*tab.tabla[i]);
    }
 }

   void salidaDatos(Entrevista pr)
 {
  printf("Estado: %s\n", pr.estado);
  printf("Codigo: %s\n", pr.codigo);
  printf("%s\n", pr.p1);
  printf("%s\n", pr.p2);
 }

/*
* Esta función recibe la referencia de la lista enlazada y la estructura con la 
entrevista la funcion agregara las entrevista en orden alfabetico de la A a la Z 
en cada nodo solo tendra el nombre del estado y el codigo de identificacion
de la entrevista
* Regresa la direccion de donde se encuentra el puntero en la lista
* @author/autor Jose Castellanos Michelle Allegretti
* @param Entrevista *pt referencia de la lista
* @param Entrevista e que es la estructura de la entevista
* @return Entrevista *pt la direccion de donde se encuentra la lista 
*
*/

Entrevista *creaListaAZ(Entrevista *pt,Entrevista e)
{
  Entrevista *busca,*nuevo;
    if(pt==NULL)
      {
        pt=(Entrevista *)malloc(sizeof(Entrevista));
        if(pt==NULL)
          {
            printf("No hay memoria\n");
            exit(1);
          }
        strcpy(pt->estado,e.estado);
        strcpy(pt->codigo,e.codigo);
        pt->der = pt;
        pt->izq = pt;
      }
    else
      {
        if(strcmp(e.estado,pt->estado)<0)
          {
            nuevo=(Entrevista *)malloc(sizeof(Entrevista));
            if(nuevo==NULL)
              {
                printf("No hay memoria\n");
                exit(1);
              }
            strcpy(nuevo->estado,e.estado);
            strcpy(nuevo->codigo,e.codigo);
            nuevo->izq = pt->izq;
            nuevo->der = pt;
            pt->izq->der = nuevo;
            pt->izq = nuevo;
            pt = pt->izq;
          }
        else
          {
            busca=pt;
            nuevo=(Entrevista *)malloc(sizeof(Entrevista));
            if(nuevo==NULL)
              {
                printf("No hay memoria\n");
                exit(1);
              }
            strcpy(nuevo->estado,e.estado);
            strcpy(nuevo->codigo,e.codigo);
            while((busca->der!=pt)&& (strcpy(e.estado,busca->estado)>=0))
              {
                busca = busca->der;
              }
            if(strcpy(e.estado,busca->estado)<0)
              {
                nuevo->izq = busca->izq;
                nuevo->der = busca;
                busca->izq->der = nuevo;
                busca->izq = nuevo;
              }
            if((busca->der==pt)&&(strcpy(e.estado,busca->estado)>=0))
              {
                busca->der = nuevo;
                nuevo->izq = busca;
                nuevo->der = pt;
                pt->izq = nuevo;
              }
          }
      }
return(pt);
}

/*
* Esta función recibe la referencia de la lista enlazada y la recorrera 
hasta que el pt->der se encuentre con pt y mostrara en pantalla la lista
con sus elementos ordenados de la A a la Z
* Regresa la direccion de donde se encuentra el puntero en la lista
* @author/autor Jose Castellanos Michelle Allegretti
* @param Entrevista *pt referencia de la lista
* @return Entrevista *pt la direccion de donde se encuentra la lista 
*
*/

Entrevista *recorreListaDer(Entrevista *pt)
{
    Entrevista *aux;
    
    aux = pt;
    
    do
    { printf("%s\n", aux->estado);
      printf("%s\n", aux->codigo);
        aux = aux->der;
    } while (aux != pt);
    
    printf("\n");
    return (pt);
}

/*
* Esta función recibe la referencia de la lista enlazada y la ira recorriendo 
hasta que aux->der no se encuentre con pt en su recorrido ira encontrando los nodos
que tengan el nombre del estado que el usuario desea encontrar y que el ingreso
cada que encuentre el nodo con el estado igual al que el usuario indico se enviara
el nodo a la funcion creaListaAZ para crear una nueva lista doble con estos nodos
* Regresa la direccion de donde se encuentra el puntero en la nueva lista doble
* @author/autor Jose Castellanos Michelle Allegretti
* @param Entrevista *p referencia de la lista con todas la entrevistas
* @return Entrevista *nuevo la direccion de donde se encuentra la nueva lista doble 
*
*/


Entrevista *filtraEstado(Entrevista *p)
{
  Entrevista *nuevo,*aux;
  Entrevista e;
  char estado[20];
  char todos[]="Todos";
  char busqueda[20];
  int opc2;

  aux=p;
  nuevo=NULL;
  
  do{
  getchar();
  printf("Ingrese el estado termine con '.': \n");
  scanf("%[^\n]",estado);

  if(strcmp(estado,todos)!=0)
  {
    do
    {
      
        //printf("%s\n", aux->estado);
        //printf("%s\n", aux->codigo);
        strcpy(busqueda,aux->estado);
        //printf("%s\n",busqueda);

        if(strcmp(estado,busqueda)==0){
          //printf("Son iguales\n");
        strcpy(e.estado,aux->estado);
        strcpy(e.codigo,aux->codigo);
        //printf("%s\n", e.estado);
        //printf("%s\n", e.codigo);
        nuevo=creaListaAZ(nuevo,e);
        aux=aux->der;
        }
        if(strcmp(estado,busqueda)!=0){
          /*printf("Son diferentes\n");
        printf("%s", aux->estado);
        printf("%s", aux->codigo);*/
        aux=aux->der;
        }
    }while(aux!=p);
    //recorreListaDer(nuevo);
    //return (nuevo);
  }

  else
  {
    return (p);
  }
  printf("Desea agregar otro estado 1.SI 2.NO\n");
    scanf("%i",&opc2);
}while(opc2==1);
if(strcmp(estado,todos)!=0){
  return (nuevo);
}
}

/*
* Esta función recibe la referencia de la nueva lista enlazada y la ira recorriendo 
hasta que aux->der no se encuentre con pt en su recorrido se le pedira al usuario 
ingrese sobre que tema y subtemas requiere que se filtren las respuestas de las entrevistas
una vez hecho hecho se enviara el codigo de la entrevista a la funcion buscar la cual regresara
el puntero apuntando el la direccion de la tabla hash donde se encuentra toda la entrevista
y se procedera a filtrar las respuestas de acuerdo a lo que el usuario determino, ademas una vez 
completado la busqueda se procedera a guardar en un archivo dicha informacion de nombre
que el usuario previamente escribio
* Regresa la direccion de donde se encuentra el puntero en la nueva lista doble
* @author/autor Jose Castellanos Michelle Allegretti
* @param Entrevista *pt referencia de la lista con todas la entrevistas
* @param tablaDispersa *tab toda la tabla HASH con las entrevistas completas
* @param char archivoout nombre del archivo de salida.
* @return Entrevista *pt la direccion de donde se encuentra la  lista doble 
*
*/

Entrevista *filtraTema(Entrevista *pt,tablaDispersa *tab,char archivoout[20])
{
    Entrevista *aux,*busqueda;
    FILE *fp;
    char codigo[4];
    int opc,opc1;
    aux = pt;

    fp=fopen(archivoout,"w");

    printf("1.Educacion\n");
    printf("2.Trabajo e ingresos\n");
    printf("3.Seguridad social y salud\n");
    printf("4.Seguridad alimentaria\n");
    printf("5.Caracteristicas de la vivienda\n");
    printf("6.Calidad del entorno fisico\n");
    printf("7.Inseguridad\n");
    printf("8.Bienestar subjetivo\n");
    printf("9.Uso de la tecnologia\n");
    printf("10.Acceso a la cultura y el esparcimiento\n");
    printf("11.Redes sociales de pertenencia\n");
    printf("12.Redes de apoyo\n");
    printf("13.Reciprocidad\n");
    printf("14.Cohesion\n");
    printf("15.Confianza en los lideres comunitarios\n");
    printf("16.Percepcion de las condiciones de vida\n");
    printf("Por favor seleccione el tema a buscar:\n");
    scanf("%i",&opc);

    if (opc==1)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Rezago educativo\n");
      printf("2.Tipo institucion\n");
      printf("3.Calidad de la educacion\n");
      printf("4.Importancia de la educacion en la vida\n");
      printf("5.Movilidad social\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==2)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Actividad laboral principal\n");
      printf("2.Actividad laboral secundiaria\n");
      printf("3.Trabajo y condiciones de vida\n");
      printf("4.Prestaciones y condiciones laborales\n");
      printf("5.Desempleo\n");
      printf("6.Trabajo y gastos del hogar\n");
      printf("7.Ayuda de personas o instituciones\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==3)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Autopercepcion de salud\n");
      printf("2.Lugar de atencion y servicio medico con el que cuenta\n");
      printf("3.Calidad medica\n");
      printf("4.Accesibilidad\n");
      printf("5.Causas por la que no acude al medico y alternativas\n");
      printf("6.Vulnerabilidad por falta de seguridad social\n");
      printf("7.Seguridad social / Capital social\n");
      printf("8.Envejecimiento\n");
      printf("9.Pensiones\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==4)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Calidad y cantidad de los alimentos\n");
      printf("2.Preocupacion por la falta de alimentos\n");
      printf("3.Accesibilidad\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==5)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Tipo de vivienda\n");
      printf("2.Comodidad y seguridad\n");
      printf("3.Hacinamiento\n");
      printf("4.Servicios basicos\n");
      printf("5.Vulnerabilidad\n");
      printf("6.Programas del gobierno\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==6)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Alumbrado publico\n");
      printf("2.Banquetas y calles\n");
      printf("3.Movilidad urbana\n");
      printf("4.Areas verdes y esparcimiento\n");
      printf("5.Calidad del transporte publico\n");
      printf("6.Estacionamiento\n");
      printf("7.Accesibilidad\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==7)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Victimas de delitos\n");
      printf("2.Percepcion de inseguridad\n");
      printf("3.Prevencion\n");
      printf("4.Delitos en la colonia o localidad\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==8)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Satisfacccion con la vida\n");
      printf("2.Felicidad\n");
      printf("3.Intranquilidad, nerviosismo, depresion o tristeza\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==9)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Acceso y uso de las TIC\n");
      printf("2.Importancia de las TIC en la vida\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    if (opc==10)
    {
      printf("Subtemas de seleccion:\n");
      printf("0.Ninguno\n");
      printf("1.Tiempo libre\n");
      printf("2.Acceso a la cultura\n");
      printf("3.Cultura comunitaria\n");
      printf("4.Otros intereses culturales\n");
      printf("Por favor seleccione el subtema: \n");
      scanf("%i",&opc1);
    }

    do
    { printf("%s\n", aux->estado);
      printf("%s\n", aux->codigo);
      strcpy(codigo,aux->codigo);
      busqueda=buscar(*tab,codigo);
      printf("Estado: %s\n",busqueda->estado);
      fprintf(fp,"%s\n",busqueda->estado);
      printf("Codigo: %s\n",busqueda->codigo);
      fprintf(fp,"%s\n",busqueda->codigo);
      printf("Respuestas:\n");
      switch(opc)
      {
        case 1:
        if(opc1==1){
          printf("%s\n",busqueda->p1);
          fprintf(fp,"%s\n",busqueda->p1);
          printf("%s\n",busqueda->p2);
          fprintf(fp,"%s\n",busqueda->p2);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p3);
          fprintf(fp,"%s\n",busqueda->p3);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p4);
          fprintf(fp,"%s\n",busqueda->p4);
          printf("%s\n",busqueda->p5);
          fprintf(fp,"%s\n",busqueda->p5);
          printf("%s\n",busqueda->p6);
          fprintf(fp,"%s\n",busqueda->p6);
          printf("%s\n",busqueda->p7);
          fprintf(fp,"%s\n",busqueda->p7);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p8);
          fprintf(fp,"%s\n",busqueda->p8);
          printf("%s\n",busqueda->p9);
          fprintf(fp,"%s\n",busqueda->p9);
        }
        if(opc1==5){
          printf("%s\n",busqueda->p10);
          fprintf(fp,"%s\n",busqueda->p10);
          printf("%s\n",busqueda->p11);
          fprintf(fp,"%s\n",busqueda->p11);
          printf("%s\n",busqueda->p12);
          fprintf(fp,"%s\n",busqueda->p12);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p1);
          printf("%s\n",busqueda->p2);
          printf("%s\n",busqueda->p3);
          printf("%s\n",busqueda->p4);
          printf("%s\n",busqueda->p5);
          printf("%s\n",busqueda->p6);
          printf("%s\n",busqueda->p7);
          printf("%s\n",busqueda->p8);
          printf("%s\n",busqueda->p9);
          printf("%s\n",busqueda->p10);
          printf("%s\n",busqueda->p11);
          printf("%s\n",busqueda->p12);
          fprintf(fp,"%s\n",busqueda->p1);
          fprintf(fp,"%s\n",busqueda->p2);
          fprintf(fp,"%s\n",busqueda->p3);
          fprintf(fp,"%s\n",busqueda->p4);
          fprintf(fp,"%s\n",busqueda->p5);
          fprintf(fp,"%s\n",busqueda->p6);
          fprintf(fp,"%s\n",busqueda->p7);
          fprintf(fp,"%s\n",busqueda->p8);
          fprintf(fp,"%s\n",busqueda->p9);
          fprintf(fp,"%s\n",busqueda->p10);
          fprintf(fp,"%s\n",busqueda->p11);
          fprintf(fp,"%s\n",busqueda->p12);
        }
        break;

        case 2:
        if(opc1==1){
          printf("%s\n",busqueda->p13);
          fprintf(fp,"%s\n",busqueda->p13);
          printf("%s\n",busqueda->p14);
          fprintf(fp,"%s\n",busqueda->p14);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p15);
          fprintf(fp,"%s\n",busqueda->p15);
          printf("%s\n",busqueda->p16);
          fprintf(fp,"%s\n",busqueda->p16);
          printf("%s\n",busqueda->p17);
          fprintf(fp,"%s\n",busqueda->p17);
          printf("%s\n",busqueda->p18);
          fprintf(fp,"%s\n",busqueda->p18);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p19);
          fprintf(fp,"%s\n",busqueda->p19);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p20);
          fprintf(fp,"%s\n",busqueda->p20);
          printf("%s\n",busqueda->p21);
          fprintf(fp,"%s\n",busqueda->p21);
          printf("%s\n",busqueda->p22);
          fprintf(fp,"%s\n",busqueda->p22);
        }
        if(opc1==5){
          printf("%s\n",busqueda->p23);
          fprintf(fp,"%s\n",busqueda->p23);
          printf("%s\n",busqueda->p24);
          fprintf(fp,"%s\n",busqueda->p24);
          printf("%s\n",busqueda->p25);
          fprintf(fp,"%s\n",busqueda->p25);
        }
        if(opc1==6){
          printf("%s\n",busqueda->p26);
          fprintf(fp,"%s\n",busqueda->p26);
          printf("%s\n",busqueda->p27);
          fprintf(fp,"%s\n",busqueda->p27);
          printf("%s\n",busqueda->p28);
          fprintf(fp,"%s\n",busqueda->p28);
        }
        if(opc1==7){
          printf("%s\n",busqueda->p29);
          fprintf(fp,"%s\n",busqueda->p29);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p13);
          printf("%s\n",busqueda->p14);
          printf("%s\n",busqueda->p15);
          printf("%s\n",busqueda->p16);
          printf("%s\n",busqueda->p17);
          printf("%s\n",busqueda->p18);
          printf("%s\n",busqueda->p19);
          printf("%s\n",busqueda->p20);
          printf("%s\n",busqueda->p21);
          printf("%s\n",busqueda->p22);
          printf("%s\n",busqueda->p23);
          printf("%s\n",busqueda->p24);
          printf("%s\n",busqueda->p25);
          printf("%s\n",busqueda->p26);
          printf("%s\n",busqueda->p27);
          printf("%s\n",busqueda->p28);
          printf("%s\n",busqueda->p29);
          fprintf(fp,"%s\n",busqueda->p13);
          fprintf(fp,"%s\n",busqueda->p14);
          fprintf(fp,"%s\n",busqueda->p15);
          fprintf(fp,"%s\n",busqueda->p16);
          fprintf(fp,"%s\n",busqueda->p17);
          fprintf(fp,"%s\n",busqueda->p18);
          fprintf(fp,"%s\n",busqueda->p19);
          fprintf(fp,"%s\n",busqueda->p20);
          fprintf(fp,"%s\n",busqueda->p21);
          fprintf(fp,"%s\n",busqueda->p22);
          fprintf(fp,"%s\n",busqueda->p23);
          fprintf(fp,"%s\n",busqueda->p24);
          fprintf(fp,"%s\n",busqueda->p25);
          fprintf(fp,"%s\n",busqueda->p26);
          fprintf(fp,"%s\n",busqueda->p27);
          fprintf(fp,"%s\n",busqueda->p28);
          fprintf(fp,"%s\n",busqueda->p29);
        }
        break;

        case 3:
        if(opc1==1){
          printf("%s\n",busqueda->p30);
          fprintf(fp,"%s\n",busqueda->p30);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p31);
          fprintf(fp,"%s\n",busqueda->p31);
          printf("%s\n",busqueda->p32);
          fprintf(fp,"%s\n",busqueda->p32);
          printf("%s\n",busqueda->p33);
          fprintf(fp,"%s\n",busqueda->p33);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p34);
          fprintf(fp,"%s\n",busqueda->p34);
          printf("%s\n",busqueda->p35);
          fprintf(fp,"%s\n",busqueda->p35);
          printf("%s\n",busqueda->p36);
          fprintf(fp,"%s\n",busqueda->p36);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p37);
          fprintf(fp,"%s\n",busqueda->p37);
          printf("%s\n",busqueda->p38);
          fprintf(fp,"%s\n",busqueda->p38);
        }
        if(opc1==5){
          printf("%s\n",busqueda->p39);
          fprintf(fp,"%s\n",busqueda->p39);
          printf("%s\n",busqueda->p40);
          fprintf(fp,"%s\n",busqueda->p40);
          printf("%s\n",busqueda->p41);
          fprintf(fp,"%s\n",busqueda->p41);
        }
        if(opc1==6){
          printf("%s\n",busqueda->p42);
          fprintf(fp,"%s\n",busqueda->p42);
        }
        if(opc1==7){
          printf("%s\n",busqueda->p43);
          fprintf(fp,"%s\n",busqueda->p43);
        }
        if(opc1==8){
          printf("%s\n",busqueda->p44);
          fprintf(fp,"%s\n",busqueda->p44);
          printf("%s\n",busqueda->p45);
          fprintf(fp,"%s\n",busqueda->p45);
          printf("%s\n",busqueda->p46);
          fprintf(fp,"%s\n",busqueda->p46);
        }
        if(opc1==9){
          printf("%s\n",busqueda->p47);
          fprintf(fp,"%s\n",busqueda->p47);
          printf("%s\n",busqueda->p48);
          fprintf(fp,"%s\n",busqueda->p48);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p30);
          printf("%s\n",busqueda->p31);
          printf("%s\n",busqueda->p32);
          printf("%s\n",busqueda->p33);
          printf("%s\n",busqueda->p34);
          printf("%s\n",busqueda->p35);
          printf("%s\n",busqueda->p36);
          printf("%s\n",busqueda->p37);
          printf("%s\n",busqueda->p38);
          printf("%s\n",busqueda->p39);
          printf("%s\n",busqueda->p40);
          printf("%s\n",busqueda->p41);
          printf("%s\n",busqueda->p42);
          printf("%s\n",busqueda->p43);
          printf("%s\n",busqueda->p44);
          printf("%s\n",busqueda->p45);
          printf("%s\n",busqueda->p46);
          printf("%s\n",busqueda->p47);
          printf("%s\n",busqueda->p48);
          fprintf(fp,"%s\n",busqueda->p30);
          fprintf(fp,"%s\n",busqueda->p31);
          fprintf(fp,"%s\n",busqueda->p32);
          fprintf(fp,"%s\n",busqueda->p33);
          fprintf(fp,"%s\n",busqueda->p34);
          fprintf(fp,"%s\n",busqueda->p35);
          fprintf(fp,"%s\n",busqueda->p36);
          fprintf(fp,"%s\n",busqueda->p37);
          fprintf(fp,"%s\n",busqueda->p38);
          fprintf(fp,"%s\n",busqueda->p39);
          fprintf(fp,"%s\n",busqueda->p40);
          fprintf(fp,"%s\n",busqueda->p41);
          fprintf(fp,"%s\n",busqueda->p42);
          fprintf(fp,"%s\n",busqueda->p43);
          fprintf(fp,"%s\n",busqueda->p44);
          fprintf(fp,"%s\n",busqueda->p45);
          fprintf(fp,"%s\n",busqueda->p46);
          fprintf(fp,"%s\n",busqueda->p47);
          fprintf(fp,"%s\n",busqueda->p48);
        }
        break;

        case 4:
        if(opc1==1){
          printf("%s\n",busqueda->p49);
          fprintf(fp,"%s\n",busqueda->p49);
          printf("%s\n",busqueda->p50);
          fprintf(fp,"%s\n",busqueda->p50);
          printf("%s\n",busqueda->p51);
          fprintf(fp,"%s\n",busqueda->p51);
          printf("%s\n",busqueda->p52);
          fprintf(fp,"%s\n",busqueda->p52);
          printf("%s\n",busqueda->p53);
          fprintf(fp,"%s\n",busqueda->p53);
          printf("%s\n",busqueda->p54);
          fprintf(fp,"%s\n",busqueda->p54);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p55);
          fprintf(fp,"%s\n",busqueda->p55);
          printf("%s\n",busqueda->p56);
          fprintf(fp,"%s\n",busqueda->p56);
          printf("%s\n",busqueda->p57);
          fprintf(fp,"%s\n",busqueda->p57);
          printf("%s\n",busqueda->p58);
          fprintf(fp,"%s\n",busqueda->p58);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p59);
          fprintf(fp,"%s\n",busqueda->p59);
          printf("%s\n",busqueda->p60);
          fprintf(fp,"%s\n",busqueda->p60);
          printf("%s\n",busqueda->p61);
          fprintf(fp,"%s\n",busqueda->p61);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p49);
          printf("%s\n",busqueda->p50);
          printf("%s\n",busqueda->p51);
          printf("%s\n",busqueda->p52);
          printf("%s\n",busqueda->p53);
          printf("%s\n",busqueda->p54);
          printf("%s\n",busqueda->p55);
          printf("%s\n",busqueda->p56);
          printf("%s\n",busqueda->p57);
          printf("%s\n",busqueda->p58);
          printf("%s\n",busqueda->p59);
          printf("%s\n",busqueda->p60);
          printf("%s\n",busqueda->p61);
          fprintf(fp,"%s\n",busqueda->p49);
          fprintf(fp,"%s\n",busqueda->p50);
          fprintf(fp,"%s\n",busqueda->p51);
          fprintf(fp,"%s\n",busqueda->p52);
          fprintf(fp,"%s\n",busqueda->p53);
          fprintf(fp,"%s\n",busqueda->p54);
          fprintf(fp,"%s\n",busqueda->p55);
          fprintf(fp,"%s\n",busqueda->p56);
          fprintf(fp,"%s\n",busqueda->p57);
          fprintf(fp,"%s\n",busqueda->p58);
          fprintf(fp,"%s\n",busqueda->p59);
          fprintf(fp,"%s\n",busqueda->p60);
          fprintf(fp,"%s\n",busqueda->p61);
        }
        break;

        case 5:
        if(opc1==1){
          printf("%s\n",busqueda->p62);
          fprintf(fp,"%s\n",busqueda->p62);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p63);
          fprintf(fp,"%s\n",busqueda->p63);
          printf("%s\n",busqueda->p64);
          fprintf(fp,"%s\n",busqueda->p64);
          printf("%s\n",busqueda->p65);
          fprintf(fp,"%s\n",busqueda->p65);
          printf("%s\n",busqueda->p66);
          fprintf(fp,"%s\n",busqueda->p66);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p67);
          fprintf(fp,"%s\n",busqueda->p67);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p68);
          fprintf(fp,"%s\n",busqueda->p68);
          printf("%s\n",busqueda->p69);
          fprintf(fp,"%s\n",busqueda->p69);
        }
        if(opc1==5){
          printf("%s\n",busqueda->p70);
          fprintf(fp,"%s\n",busqueda->p70);
        }
        if(opc1==6){
          printf("%s\n",busqueda->p71);
          fprintf(fp,"%s\n",busqueda->p71);
          printf("%s\n",busqueda->p72);
          fprintf(fp,"%s\n",busqueda->p72);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p62);
          printf("%s\n",busqueda->p63);
          printf("%s\n",busqueda->p64);
          printf("%s\n",busqueda->p65);
          printf("%s\n",busqueda->p66);
          printf("%s\n",busqueda->p67);
          printf("%s\n",busqueda->p68);
          printf("%s\n",busqueda->p69);
          printf("%s\n",busqueda->p70);
          printf("%s\n",busqueda->p71);
          printf("%s\n",busqueda->p72);
          fprintf(fp,"%s\n",busqueda->p62);
          fprintf(fp,"%s\n",busqueda->p63);
          fprintf(fp,"%s\n",busqueda->p64);
          fprintf(fp,"%s\n",busqueda->p65);
          fprintf(fp,"%s\n",busqueda->p66);
          fprintf(fp,"%s\n",busqueda->p67);
          fprintf(fp,"%s\n",busqueda->p68);
          fprintf(fp,"%s\n",busqueda->p69);
          fprintf(fp,"%s\n",busqueda->p70);
          fprintf(fp,"%s\n",busqueda->p71);
          fprintf(fp,"%s\n",busqueda->p72);
        }
        break;

        case 6:
        if(opc1==1){
          printf("%s\n",busqueda->p73);
          fprintf(fp,"%s\n",busqueda->p73);
          printf("%s\n",busqueda->p74);
          fprintf(fp,"%s\n",busqueda->p74);
          printf("%s\n",busqueda->p75);
          fprintf(fp,"%s\n",busqueda->p75);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p76);
          fprintf(fp,"%s\n",busqueda->p76);
          printf("%s\n",busqueda->p77);
          fprintf(fp,"%s\n",busqueda->p77);
          printf("%s\n",busqueda->p78);
          fprintf(fp,"%s\n",busqueda->p78);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p79);
          fprintf(fp,"%s\n",busqueda->p79);
          printf("%s\n",busqueda->p80);
          fprintf(fp,"%s\n",busqueda->p80);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p81);
          fprintf(fp,"%s\n",busqueda->p81);
          printf("%s\n",busqueda->p82);
          fprintf(fp,"%s\n",busqueda->p82);
          printf("%s\n",busqueda->p83);
          fprintf(fp,"%s\n",busqueda->p83);
        }
        if(opc1==5){
          printf("%s\n",busqueda->p84);
          fprintf(fp,"%s\n",busqueda->p84);
          printf("%s\n",busqueda->p85);
          fprintf(fp,"%s\n",busqueda->p85);
          printf("%s\n",busqueda->p86);
          fprintf(fp,"%s\n",busqueda->p86);
          printf("%s\n",busqueda->p87);
          fprintf(fp,"%s\n",busqueda->p87);
        }
        if(opc1==6){
          printf("%s\n",busqueda->p88);
          fprintf(fp,"%s\n",busqueda->p88);
        }
        if(opc1==7){
          printf("%s\n",busqueda->p89);
          fprintf(fp,"%s\n",busqueda->p89);
          printf("%s\n",busqueda->p90);
          fprintf(fp,"%s\n",busqueda->p90);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p73);
          printf("%s\n",busqueda->p74);
          printf("%s\n",busqueda->p75);
          printf("%s\n",busqueda->p76);
          printf("%s\n",busqueda->p77);
          printf("%s\n",busqueda->p78);
          printf("%s\n",busqueda->p79);
          printf("%s\n",busqueda->p80);
          printf("%s\n",busqueda->p81);
          printf("%s\n",busqueda->p82);
          printf("%s\n",busqueda->p83);
          printf("%s\n",busqueda->p84);
          printf("%s\n",busqueda->p85);
          printf("%s\n",busqueda->p86);
          printf("%s\n",busqueda->p87);
          printf("%s\n",busqueda->p88);
          printf("%s\n",busqueda->p89);
          printf("%s\n",busqueda->p90);
          fprintf(fp,"%s\n",busqueda->p73);
          fprintf(fp,"%s\n",busqueda->p74);
          fprintf(fp,"%s\n",busqueda->p75);
          fprintf(fp,"%s\n",busqueda->p76);
          fprintf(fp,"%s\n",busqueda->p77);
          fprintf(fp,"%s\n",busqueda->p78);
          fprintf(fp,"%s\n",busqueda->p79);
          fprintf(fp,"%s\n",busqueda->p80);
          fprintf(fp,"%s\n",busqueda->p81);
          fprintf(fp,"%s\n",busqueda->p82);
          fprintf(fp,"%s\n",busqueda->p83);
          fprintf(fp,"%s\n",busqueda->p84);
          fprintf(fp,"%s\n",busqueda->p85);
          fprintf(fp,"%s\n",busqueda->p86);
          fprintf(fp,"%s\n",busqueda->p87);
          fprintf(fp,"%s\n",busqueda->p88);
          fprintf(fp,"%s\n",busqueda->p89);
          fprintf(fp,"%s\n",busqueda->p90);
        }
        break;

        case 7:
        if(opc1==1){
          printf("%s\n",busqueda->p91);
          fprintf(fp,"%s\n",busqueda->p91);
          printf("%s\n",busqueda->p92);
          fprintf(fp,"%s\n",busqueda->p92);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p93);
          fprintf(fp,"%s\n",busqueda->p93);
          printf("%s\n",busqueda->p94);
          fprintf(fp,"%s\n",busqueda->p94);
          printf("%s\n",busqueda->p95);
          fprintf(fp,"%s\n",busqueda->p95);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p96);
          fprintf(fp,"%s\n",busqueda->p96);
          printf("%s\n",busqueda->p97);
          fprintf(fp,"%s\n",busqueda->p97);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p98);
          fprintf(fp,"%s\n",busqueda->p98);
          printf("%s\n",busqueda->p99);
          fprintf(fp,"%s\n",busqueda->p99);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p91);
          printf("%s\n",busqueda->p92);
          printf("%s\n",busqueda->p93);
          printf("%s\n",busqueda->p94);
          printf("%s\n",busqueda->p95);
          printf("%s\n",busqueda->p96);
          printf("%s\n",busqueda->p97);
          printf("%s\n",busqueda->p98);
          printf("%s\n",busqueda->p99);
          fprintf(fp,"%s\n",busqueda->p91);
          fprintf(fp,"%s\n",busqueda->p92);
          fprintf(fp,"%s\n",busqueda->p93);
          fprintf(fp,"%s\n",busqueda->p94);
          fprintf(fp,"%s\n",busqueda->p95);
          fprintf(fp,"%s\n",busqueda->p96);
          fprintf(fp,"%s\n",busqueda->p97);
          fprintf(fp,"%s\n",busqueda->p98);
          fprintf(fp,"%s\n",busqueda->p99);
        }
        break;

        case 8:
        if(opc1==1){
          printf("%s\n",busqueda->p121);
          fprintf(fp,"%s\n",busqueda->p121);
          printf("%s\n",busqueda->p122);
          fprintf(fp,"%s\n",busqueda->p122);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p123);
          fprintf(fp,"%s\n",busqueda->p123);
          printf("%s\n",busqueda->p124);
          fprintf(fp,"%s\n",busqueda->p124);
          printf("%s\n",busqueda->p125);
          fprintf(fp,"%s\n",busqueda->p125);
          printf("%s\n",busqueda->p126);
          fprintf(fp,"%s\n",busqueda->p126);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p127);
          fprintf(fp,"%s\n",busqueda->p127);
          printf("%s\n",busqueda->p128);
          fprintf(fp,"%s\n",busqueda->p128);
          printf("%s\n",busqueda->p129);
          fprintf(fp,"%s\n",busqueda->p129);
          printf("%s\n",busqueda->p130);
          fprintf(fp,"%s\n",busqueda->p130);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p121);
          printf("%s\n",busqueda->p122);
          printf("%s\n",busqueda->p123);
          printf("%s\n",busqueda->p124);
          printf("%s\n",busqueda->p125);
          printf("%s\n",busqueda->p126);
          printf("%s\n",busqueda->p127);
          printf("%s\n",busqueda->p128);
          printf("%s\n",busqueda->p129);
          printf("%s\n",busqueda->p130);
          fprintf(fp,"%s\n",busqueda->p121);
          fprintf(fp,"%s\n",busqueda->p122);
          fprintf(fp,"%s\n",busqueda->p123);
          fprintf(fp,"%s\n",busqueda->p124);
          fprintf(fp,"%s\n",busqueda->p125);
          fprintf(fp,"%s\n",busqueda->p126);
          fprintf(fp,"%s\n",busqueda->p127);
          fprintf(fp,"%s\n",busqueda->p128);
          fprintf(fp,"%s\n",busqueda->p129);
          fprintf(fp,"%s\n",busqueda->p130);
        }
        break;

        case 9:
        if(opc1==1){
          printf("%s\n",busqueda->p131);
          fprintf(fp,"%s\n",busqueda->p131);
          printf("%s\n",busqueda->p132);
          fprintf(fp,"%s\n",busqueda->p132);
          printf("%s\n",busqueda->p133);
          fprintf(fp,"%s\n",busqueda->p133);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p134);
          fprintf(fp,"%s\n",busqueda->p134);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p131);
          printf("%s\n",busqueda->p132);
          printf("%s\n",busqueda->p133);
          printf("%s\n",busqueda->p134);
          fprintf(fp,"%s\n",busqueda->p131);
          fprintf(fp,"%s\n",busqueda->p132);
          fprintf(fp,"%s\n",busqueda->p133);
          fprintf(fp,"%s\n",busqueda->p134);
        }
        break;

        case 10:
        if(opc1==1){
          printf("%s\n",busqueda->p135);
          fprintf(fp,"%s\n",busqueda->p135);
          printf("%s\n",busqueda->p136);
          fprintf(fp,"%s\n",busqueda->p136);
          printf("%s\n",busqueda->p137);
          fprintf(fp,"%s\n",busqueda->p137);
          printf("%s\n",busqueda->p138);
          fprintf(fp,"%s\n",busqueda->p138);
          printf("%s\n",busqueda->p139);
          fprintf(fp,"%s\n",busqueda->p139);
          printf("%s\n",busqueda->p140);
          fprintf(fp,"%s\n",busqueda->p140);
        }
        if(opc1==2){
          printf("%s\n",busqueda->p141);
          fprintf(fp,"%s\n",busqueda->p141);
          printf("%s\n",busqueda->p142);
          fprintf(fp,"%s\n",busqueda->p142);
          printf("%s\n",busqueda->p143);
          fprintf(fp,"%s\n",busqueda->p143);
        }
        if(opc1==3){
          printf("%s\n",busqueda->p144);
          fprintf(fp,"%s\n",busqueda->p144);
          printf("%s\n",busqueda->p145);
          fprintf(fp,"%s\n",busqueda->p145);
          printf("%s\n",busqueda->p146);
          fprintf(fp,"%s\n",busqueda->p146);
        }
        if(opc1==4){
          printf("%s\n",busqueda->p147);
          fprintf(fp,"%s\n",busqueda->p147);
          printf("%s\n",busqueda->p148);
          fprintf(fp,"%s\n",busqueda->p148);
        }
        if(opc1==0){
          printf("%s\n",busqueda->p91);
          printf("%s\n",busqueda->p92);
          printf("%s\n",busqueda->p93);
          printf("%s\n",busqueda->p94);
          printf("%s\n",busqueda->p95);
          printf("%s\n",busqueda->p96);
          printf("%s\n",busqueda->p97);
          printf("%s\n",busqueda->p98);
          printf("%s\n",busqueda->p99);
          fprintf(fp,"%s\n",busqueda->p135);
          fprintf(fp,"%s\n",busqueda->p136);
          fprintf(fp,"%s\n",busqueda->p137);
          fprintf(fp,"%s\n",busqueda->p138);
          fprintf(fp,"%s\n",busqueda->p139);
          fprintf(fp,"%s\n",busqueda->p140);
          fprintf(fp,"%s\n",busqueda->p141);
          fprintf(fp,"%s\n",busqueda->p142);
          fprintf(fp,"%s\n",busqueda->p143);
          fprintf(fp,"%s\n",busqueda->p144);
          fprintf(fp,"%s\n",busqueda->p145);
          fprintf(fp,"%s\n",busqueda->p146);
          fprintf(fp,"%s\n",busqueda->p147);
          fprintf(fp,"%s\n",busqueda->p148);
        }
        break;

        case 11:
        printf("%s\n",busqueda->p100);
        fprintf(fp,"%s\n",busqueda->p100);
        break;

        case 12:
        printf("%s\n",busqueda->p101);
        fprintf(fp,"%s\n",busqueda->p101);
        printf("%s\n",busqueda->p102);
        fprintf(fp,"%s\n",busqueda->p102);
        printf("%s\n",busqueda->p103);
        fprintf(fp,"%s\n",busqueda->p103);
        printf("%s\n",busqueda->p104);
        fprintf(fp,"%s\n",busqueda->p104);
        break;

        case 13:
        printf("%s\n",busqueda->p105);
        fprintf(fp,"%s\n",busqueda->p105);
        printf("%s\n",busqueda->p106);
        fprintf(fp,"%s\n",busqueda->p106);
        printf("%s\n",busqueda->p107);
        fprintf(fp,"%s\n",busqueda->p107);
        break;

        case 14:
        printf("%s\n",busqueda->p108);
        fprintf(fp,"%s\n",busqueda->p108);
        printf("%s\n",busqueda->p109);
        fprintf(fp,"%s\n",busqueda->p109);
        printf("%s\n",busqueda->p110);
        fprintf(fp,"%s\n",busqueda->p110);
        printf("%s\n",busqueda->p111);
        fprintf(fp,"%s\n",busqueda->p111);
        printf("%s\n",busqueda->p112);
        fprintf(fp,"%s\n",busqueda->p112);
        printf("%s\n",busqueda->p113);
        fprintf(fp,"%s\n",busqueda->p113);
        break;

        case 15:
        printf("%s\n",busqueda->p114);
        fprintf(fp,"%s\n",busqueda->p114);
        printf("%s\n",busqueda->p115);
        fprintf(fp,"%s\n",busqueda->p115);
        printf("%s\n",busqueda->p116);
        fprintf(fp,"%s\n",busqueda->p116);
        printf("%s\n",busqueda->p117);
        fprintf(fp,"%s\n",busqueda->p117);
        printf("%s\n",busqueda->p118);
        fprintf(fp,"%s\n",busqueda->p118);
        printf("%s\n",busqueda->p119);
        fprintf(fp,"%s\n",busqueda->p119);
        printf("%s\n",busqueda->p120);
        fprintf(fp,"%s\n",busqueda->p120);
        break;

        case 16:
        printf("%s\n",busqueda->p149);
        fprintf(fp,"%s\n",busqueda->p149);
        printf("%s\n",busqueda->p150);
        fprintf(fp,"%s\n",busqueda->p150);
        break;

        default:
        printf("OPCION INVALIDA\n");
        break;
      }
        aux = aux->der;
    } while (aux != pt);
    
    printf("\n");
    fclose(fp);
    return (pt);
}
