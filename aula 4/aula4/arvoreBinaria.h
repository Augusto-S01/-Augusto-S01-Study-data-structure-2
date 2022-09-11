typedef struct NO *ArvBin;

ArvBin *cria_ArvBin();

void liberar_arvBin(ArvBin *raiz);

int vazia_arvBin(ArvBin *raiz);

int altura_arvBin(ArvBin *raiz);

int totalNO_arvBin(ArvBin *raiz);

void preOrdem_arvBin(ArvBin *raiz);

void emOrdem_arvBin(ArvBin *raiz);

void posOrdem_arvBin(ArvBin *raiz);

int insere_ArvBin(ArvBin *raiz, int valor);

int remove_ArvBin(ArvBin *raiz, int valor);

struct NO *remove_atual(struct NO *atual);

int consulta_ArvBin(ArvBin *raiz, int valor);

void libera_NO(struct NO *no);