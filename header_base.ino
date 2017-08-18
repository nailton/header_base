/***************************************************************************
****************************************************************************
** CENTRO DE ENSINO PROFISSIONALIZANTE - CEP                              **
** ESCOLA TÉCNICA DE BRASÍLIA - ETB                                       **
** PROFESSOR: Nome do Professor                                           **
**                                                                        **
** PROJETO: NOME DO PROJETO                                               **
** ALUNOS: Nome dos Alunos - Matrícula-X                                  **
**                                                                        **
**                                                                        **
** TURMA: 4ºX Noturno Data inicial: 18/08/2017 Data final: 18/08/2017     **
****************************************************************************
***************************************************************************/

// Declaração de Bibliotecas

// Declaração de Variáveis
int LED0 = 0;                 //Declara o LED0 como inteiro conectando ao pino 0 do AT328P
int i = 0;                    //Declara a variável i como inteiro para o contador de loop

void setup()                  //Inicializa as variáveis
{
  pinMode(LED0, OUTPUT);      //Inicializa pino do LED0 como saída
}

void loop()                   //Programa propriamente dito
{
  digitalWrite(LED0, HIGH);   //Liga o LED0
  UmSeg();                    //Chama a rotina de um segundo
  digitalWrite(LED0, LOW);    //Desliga LED0
  UmSeg();                    //Chama a rotina de um segundo
}

void UmSeg()                  //Programa propriamente dito da sub-rotina
{
  for (i = 0; i < 1000; i++)  //Contador de 1000 loops de um milissegundo (mS)
  {
    delay(100);               //Espera 1mS
  }
}

