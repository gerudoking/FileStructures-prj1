/*
Header contendo a interface das seguintes funções
*/

struct tipoChave{
	char key[30];
	int apontador;
};
typedef tipoChave TipoChave;

struct tipoRegistro{
	char matricula[6];
	char nome[40];
	char op[2];
	char curso[2];
	char turma;
};
typedef TipoRegistro;

void insere_registro(TipoRegistro r, FILE* arq, FILE* ind);

void exclui_registro(TipoChave chave, FILE* arq, FILE* ind);

void quicksort(TipoChave ind[], TipoChave esq, TipoChave dir);