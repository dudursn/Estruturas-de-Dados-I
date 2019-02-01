
/*Struct Dados*/
    typedef struct _VIDEOGAMES_{
        int avaliacao;
        char nome_do_jogo[50];
        float preco ;
    }VidGames;

/*Menu com as op�oes para manipular a Cole��o*/
    void menu();

/*Adiciona dados na struct VidGames e retorna na main para ser inserido na cole��o*/
    void *adicionaDados();

/*Formas de consultar a cole��o*/
    int comparaNomeDoJogo(void *a, void *b);
    int comparaAvaliacaoDoUsuario(void *a, void *b);
    int comparaPreco(void *a, void *b);

/*Imprimir informa��es*/
    void imprimirInfo(VidGames *a);

/*Teste para verificar os dados que o usu�rio digita*/
    float testeFloat();
    int testeInteiro();
