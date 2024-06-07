// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <string.h>

// Variáveis
int opMenuPrincipal, opCadastro, opImpressao, opConteudos, opNotas, EncerrandoPrograma = 0, CadAluno, QuantAlunos, CadProfessor, QuantProfessores;
int CadDisciplina, QuantDisciplinas, CadCurso, QuantCursos, opInserirNotas, opEditarNotas, opExcluirNotas, opVisualizarNotas;

// Struct
struct CadastroAlunos {
    char Nome[50];
    char Matricula[50];
    char Turma[50];
    char Curso[50];
};

struct CadastroProfessores {
    char NomeProfessor[50];
    char Disciplina[50];
    char TurmaProfessor[50];
    char CursoProfessor[50];
};

struct CadastroDisciplinas {
    char NomeDisciplina[50];
    char Professor[50];
    char CursoDisciplina[50];
};

struct CadastroCursos {
    char NomeCurso[50];
    char DisciplinasCurso[200];
};

struct Notas {
    char Disciplina[50];
    char Professor[50];
    float Nota;
};

// Voids
void Clear() {
    system("cls");
}

void Agradecimento() {
    Clear();
    printf("+=======================================================================================+\n");
    printf("|                                                                                       |\n");
    printf("|                                  MUITO OBRIGADO!                                      |\n");
    printf("|                                                                                       |\n");
    printf("+=======================================================================================+\n");
    printf("|                                                                                       |\n");
    printf("|                          Muito obrigado por ver meu código!                           |\n");
    printf("|                                                                                       |\n");
    printf("+---------------------------------------------------------------------------------------+\n");
    printf("|                                                                                       |\n");
    printf("|                               Feito por Felipe Duan                                   |\n");
    printf("|                                                                                       |\n");
    printf("+=======================================================================================+\n");
    Sleep(5000);
    // Espera que o usuário pressione qualquer tecla
    system("pause");
}


void ExibirLayout() {
    Clear();
    printf("  _____ _____ ________      __\n");
    printf(" |_   _/ ____|  ____\\ \\    / /\n");
    printf("   | || |    | |__   \\ \\  / / \n");
    printf("   | || |    |  __|   \\ \\/ /  \n");
    printf("  _| || |____| |____   \\  /   \n");
    printf(" |_____\\_____|______|   \\/    \n");
    printf("                              \n");
    Sleep(3000);
    Clear();
}

void Loading() {
    Clear();
    int progresso = 0;
    int f;

    printf("+====================================================+\n");
    printf("|                      CARREGANDO                    |\n");
    printf("+====================================================+\n");
    //printf("| [                                                ] |\n");
    //printf("+====================================================+\n");

    for (progresso = 0; progresso <= 100; progresso++) {
        // Move o cursor para a posição do progresso
        printf("\r| [");
        for ( f = 0; f < progresso / 2; f++) {
            printf("=");
        }
        for ( f = progresso / 2; f < 50; f++) {
            printf(" ");
        }
        printf("] %d%%", progresso);
        fflush(stdout);
        Sleep(50); // Ajusta o tempo para tornar o carregamento mais rápido ou mais lento
    }
    printf("\n");
}

void SistemaIcev() {
    Clear();
    printf("+===========================================================+\n");
    printf("|                                                           |\n");
    printf("|                     CONTROLE ACADÊMICO                    |\n");
    printf("|                                                           |\n");
    printf("+===========================================================+\n");
    printf("|                                                           |\n");
    printf("|                        Bem-vindo ao                       |\n");
    printf("|                                                           |\n");
    printf("|                Sistema de Controle Acadêmico!             |\n");
    printf("|                                                           |\n");
    printf("+===========================================================+\n");
    Sleep(3000);
    Clear();
}

void MenuPrincipal() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao Sistema do Controle Acadêmico do ICEV. \n\n");
    printf("+===============================================+\n");
    printf("|               CONTROLE ACADÊMICO              |\n");
    printf("+===============================================+\n");
    printf("|     1 - CADASTROS      |     2 - IMPRESSÃO    |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - CONTEÚDOS      |     4 - NOTAS        |\n");
    printf("+-----------------------------------------------+\n");
    printf("|                    5 - SAIR                   |\n");
    printf("+===============================================+\n\n");
    printf("Essa é a tela inicial do controle acadêmico, informe o número da operação desejada: ");
    scanf("%d", &opMenuPrincipal);
}

void SubMenuCad() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao Menu de Cadastros. \n\n");
    printf("+===============================================+\n");
    printf("|                    CADASTROS                  |\n");
    printf("+===============================================+\n");
    printf("|     1 - ALUNOS         |     2 - PROFESSORES  |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - DISCIPLINAS    |     4 - CURSOS       |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         5 - RETORNAR AO MENU PRINCIPAL        |\n");
    printf("+===============================================+\n\n");
    printf("Esse é o menu de Cadastro. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opCadastro);
}

void Alunos() {
    Clear();
    printf("Bem-vindo à tela de Cadastro dos Alunos. \n\n");
    printf("+============================================+\n");
    printf("|        DESEJA CADASTRAR ALGUM ALUNO?       |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &CadAluno);
}

void CadastroAluno() {
    int i;
    char nomeArquivo[100];
    printf("Certo! Agora iremos cadastrar Alunos. \nOBS: Você só pode cadastrar até 4 alunos de uma vez \n");
    printf("Quantos Alunos você deseja cadastrar? - R: ");
    scanf("%d", &QuantAlunos);

    struct CadastroAlunos alunos[QuantAlunos];
    if (QuantAlunos < 5) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

        printf("\nInforme o nome do arquivo para salvar os dados dos alunos: ");
        fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
        strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

        char caminhoArquivo[150] = "C:\\ControleAcademico\\Alunos\\";
        strcat(caminhoArquivo, nomeArquivo);
        FILE *arquivo = fopen(caminhoArquivo, "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        for (i = 0; i < QuantAlunos; i++) {
            // Recebendo dados
            Clear();
            printf("Informe o nome do Aluno %d: ", i+1);
            fgets(alunos[i].Nome, sizeof(alunos[i].Nome), stdin);
            strtok(alunos[i].Nome, "\n");

            printf("Informe a matrícula do Aluno %d: ", i+1);
            fgets(alunos[i].Matricula, sizeof(alunos[i].Matricula), stdin);
            strtok(alunos[i].Matricula, "\n");

            printf("Informe a turma do Aluno %d: ", i+1);
            fgets(alunos[i].Turma, sizeof(alunos[i].Turma), stdin);
            strtok(alunos[i].Turma, "\n");

            printf("Informe o curso do Aluno %d: ", i+1);
            fgets(alunos[i].Curso, sizeof(alunos[i].Curso), stdin);
            strtok(alunos[i].Curso, "\n");

            // Gravando dados no arquivo
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "|            DADOS DO ALUNO %d            |\n", i+1);
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "| -> Nome: %s\n", alunos[i].Nome);
            fprintf(arquivo, "| -> Matrícula: %s\n", alunos[i].Matricula);
            fprintf(arquivo, "| -> Turma: %s\n", alunos[i].Turma);
            fprintf(arquivo, "| -> Curso: %s\n\n", alunos[i].Curso);
            Clear();
        }

        fclose(arquivo);

        // Imprimindo dados
        printf("Parabéns, o Cadastro de Alunos foi um sucesso!\n");
        printf("Aqui está o resultado do Cadastro: \n\n");

        for (i = 0; i < QuantAlunos; i++) {
            printf("+========================================+\n");
            printf("|            DADOS DO ALUNO %d            |\n", i+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", alunos[i].Nome);
            printf("| -> Matrícula: %s \n", alunos[i].Matricula);
            printf("| -> Turma: %s \n", alunos[i].Turma);
            printf("| -> Curso: %s \n\n\n", alunos[i].Curso);
        }
    } else {
        printf("\nVocê inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Professores() {
    Clear();
    printf("Bem-vindo à tela de Cadastro dos Professores.\n");
    printf("+============================================+\n");
    printf("|     DESEJA CADASTRAR ALGUM PROFESSOR?      |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &CadProfessor);
}

void CadastroProfessores() {
    int n;
    char nomeArquivo[100];
    printf("Certo! Agora iremos cadastrar Professores. \nOBS: Você só pode cadastrar até 8 professores de uma vez \n");
    printf("Quantos Professores você deseja cadastrar? - R: ");
    scanf("%d", &QuantProfessores);

    struct CadastroProfessores professores[QuantProfessores];
    if (QuantProfessores < 9) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

        printf("\nInforme o nome do arquivo para salvar os dados dos professores: ");
        fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
        strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

        char caminhoArquivo[150] = "C:\\ControleAcademico\\Professores\\";
        strcat(caminhoArquivo, nomeArquivo);
        FILE *arquivo = fopen(caminhoArquivo, "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        for (n = 0; n < QuantProfessores; n++) {
            // Recebendo Dados
            Clear();
            printf("Informe o nome do Professor %d: ", n+1);
            fgets(professores[n].NomeProfessor, sizeof(professores[n].NomeProfessor), stdin);
            strtok(professores[n].NomeProfessor, "\n");

            printf("Informe a disciplina do Professor %d: ", n+1);
            fgets(professores[n].Disciplina, sizeof(professores[n].Disciplina), stdin);
            strtok(professores[n].Disciplina, "\n");

            printf("Informe a turma do Professor %d: ", n+1);
            fgets(professores[n].TurmaProfessor, sizeof(professores[n].TurmaProfessor), stdin);
            strtok(professores[n].TurmaProfessor, "\n");

            printf("Informe o curso do Professor %d: ", n+1);
            fgets(professores[n].CursoProfessor, sizeof(professores[n].CursoProfessor), stdin);
            strtok(professores[n].CursoProfessor, "\n");

            // Gravando dados no arquivo
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "|        DADOS DO PROFESSOR %d            |\n", n+1);
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "| -> Nome: %s\n", professores[n].NomeProfessor);
            fprintf(arquivo, "| -> Disciplina: %s\n", professores[n].Disciplina);
            fprintf(arquivo, "| -> Turma: %s\n", professores[n].TurmaProfessor);
            fprintf(arquivo, "| -> Curso: %s\n\n", professores[n].CursoProfessor);
            Clear();
        }

        fclose(arquivo);

        // Imprimindo dados
        printf("Parabéns, o Cadastro de Professores foi um sucesso!\n");
        printf("Aqui está o resultado do Cadastro: \n\n");

        for (n = 0; n < QuantProfessores; n++) {
            printf("+========================================+\n");
            printf("|        DADOS DO PROFESSOR %d            |\n", n+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", professores[n].NomeProfessor);
            printf("| -> Disciplina: %s \n", professores[n].Disciplina);
            printf("| -> Turma: %s \n", professores[n].TurmaProfessor);
            printf("| -> Curso: %s \n\n\n", professores[n].CursoProfessor);
        }
    } else {
        printf("\nVocê inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Disciplinas() {
    Clear();
    printf("Bem-vindo à tela de Cadastro das Disciplinas.\n");
    printf("+============================================+\n");
    printf("|     DESEJA CADASTRAR ALGUMA DISCIPLINA?    |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &CadDisciplina);
}

void CadastroDisciplinas() {
    int d;
    char nomeArquivo[100];
    printf("Certo! Agora iremos cadastrar Disciplinas. \nOBS: Você só pode cadastrar até 8 disciplinas de uma vez \n");
    printf("Quantas Disciplinas você deseja cadastrar? - R: ");
    scanf("%d", &QuantDisciplinas);

    struct CadastroDisciplinas disciplinas[QuantDisciplinas];
    if (QuantDisciplinas < 9) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

        printf("\nInforme o nome do arquivo para salvar os dados das disciplinas: ");
        fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
        strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

        char caminhoArquivo[150] = "C:\\ControleAcademico\\Disciplinas\\";
        strcat(caminhoArquivo, nomeArquivo);
        FILE *arquivo = fopen(caminhoArquivo, "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        for (d = 0; d < QuantDisciplinas; d++) {
            // Recebendo Dados
            Clear();
            printf("Informe o nome da Disciplina %d: ", d+1);
            fgets(disciplinas[d].NomeDisciplina, sizeof(disciplinas[d].NomeDisciplina), stdin);
            strtok(disciplinas[d].NomeDisciplina, "\n");

            printf("Informe o nome do professor que ministra a Disciplina %d: ", d+1);
            fgets(disciplinas[d].Professor, sizeof(disciplinas[d].Professor), stdin);
            strtok(disciplinas[d].Professor, "\n");

            printf("Informe o curso da Disciplina %d: ", d+1);
            fgets(disciplinas[d].CursoDisciplina, sizeof(disciplinas[d].CursoDisciplina), stdin);
            strtok(disciplinas[d].CursoDisciplina, "\n");

            // Gravando dados no arquivo
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "|        DADOS DA DISCIPLINA %d           |\n", d+1);
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "| -> Nome: %s\n", disciplinas[d].NomeDisciplina);
            fprintf(arquivo, "| -> Professor: %s\n", disciplinas[d].Professor);
            fprintf(arquivo, "| -> Curso: %s\n\n", disciplinas[d].CursoDisciplina);
            Clear();
        }

        fclose(arquivo);

        // Imprimindo dados
        printf("Parabéns, o Cadastro de Disciplinas foi um sucesso!\n");
        printf("Aqui está o resultado do Cadastro: \n\n");

        for (d = 0; d < QuantDisciplinas; d++) {
            printf("+========================================+\n");
            printf("|        DADOS DA DISCIPLINA %d           |\n", d+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", disciplinas[d].NomeDisciplina);
            printf("| -> Professor: %s \n", disciplinas[d].Professor);
            printf("| -> Curso: %s \n\n\n", disciplinas[d].CursoDisciplina);
        }
    } else {
        printf("\nVocê inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Cursos() {
    Clear();
    printf("Bem-vindo à tela de Cadastro dos Cursos.\n");
    printf("+============================================+\n");
    printf("|       DESEJA CADASTRAR ALGUM CURSO?        |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &CadCurso);
}

void CadastroCursos() {
    int c;
    char nomeArquivo[100];
    printf("Certo! Agora iremos cadastrar Cursos. \nOBS: Você só pode cadastrar até 3 cursos de uma vez \n");
    printf("Quantos Cursos você deseja cadastrar? - R: ");
    scanf("%d", &QuantCursos);

    struct CadastroCursos cursos[QuantCursos];
    if (QuantCursos < 4) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

        printf("\nInforme o nome do arquivo para salvar os dados dos cursos: ");
        fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
        strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

        char caminhoArquivo[150] = "C:\\ControleAcademico\\Cursos\\";
        strcat(caminhoArquivo, nomeArquivo);
        FILE *arquivo = fopen(caminhoArquivo, "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            return;
        }

        for (c = 0; c < QuantCursos; c++) {
            // Recebendo Dados
            Clear();
            printf("Informe o nome do Curso %d: ", c+1);
            fgets(cursos[c].NomeCurso, sizeof(cursos[c].NomeCurso), stdin);
            strtok(cursos[c].NomeCurso, "\n");

            printf("Informe as disciplinas do curso %d: ", c+1);
            fgets(cursos[c].DisciplinasCurso, sizeof(cursos[c].DisciplinasCurso), stdin);
            strtok(cursos[c].DisciplinasCurso, "\n");

            // Gravando dados no arquivo
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "|            DADOS DO CURSO %d            |\n", c+1);
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "| -> Nome: %s\n", cursos[c].NomeCurso);
            fprintf(arquivo, "| -> Disciplinas: %s\n\n", cursos[c].DisciplinasCurso);
            Clear();
        }

        fclose(arquivo);

        // Imprimindo dados
        printf("Parabéns, o Cadastro de Cursos foi um sucesso!\n");
        printf("Aqui está o resultado do Cadastro: \n\n");

        for (c = 0; c < QuantCursos; c++) {
            printf("+========================================+\n");
            printf("|            DADOS DO CURSO %d            |\n", c+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", cursos[c].NomeCurso);
            printf("| -> Disciplinas: %s \n\n\n", cursos[c].DisciplinasCurso);
        }
    } else {
        printf("\nVocê inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void SubMenuImp() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao Menu de Impressão. \n\n");
    printf("+===============================================+\n");
    printf("|                 GERAR IMPRESSÃO               |\n");
    printf("+===============================================+\n");
    printf("|     1 - ALUNOS         |     2 - PROFESSORES  |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - DISCIPLINAS    |     4 - CURSOS       |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         5 - RETORNAR AO MENU PRINCIPAL        |\n");
    printf("+===============================================+\n\n");
    printf("Esse é o menu de Impressão. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opImpressao);
}

void LerArquivo(char *caminhoArquivo) {
    FILE *arquivo = fopen(caminhoArquivo, "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        printf("Arquivo não encontrado, tente novamente com um arquivo válido / já criado!\n");
        Sleep(2500);
        return;
    }

    char linha[200];
    while (fgets(linha, sizeof(linha), arquivo)) {
        printf("%s", linha);
    }

    fclose(arquivo);
    system("pause");
}

void ImpressaoAlunos() {
    char nomeArquivo[100];
    printf("Informe o nome do arquivo de alunos a ser lido: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Alunos\\";
    strcat(caminhoArquivo, nomeArquivo);
    LerArquivo(caminhoArquivo);
}

void ImpressaoProfessores() {
    char nomeArquivo[100];
    printf("Informe o nome do arquivo de professores a ser lido: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Professores\\";
    strcat(caminhoArquivo, nomeArquivo);
    LerArquivo(caminhoArquivo);
}

void ImpressaoDisciplinas() {
    char nomeArquivo[100];
    printf("Informe o nome do arquivo de disciplinas a ser lido: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Disciplinas\\";
    strcat(caminhoArquivo, nomeArquivo);
    LerArquivo(caminhoArquivo);
}

void ImpressaoCursos() {
    char nomeArquivo[100];
    printf("Informe o nome do arquivo de cursos a ser lido: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Cursos\\";
    strcat(caminhoArquivo, nomeArquivo);
    LerArquivo(caminhoArquivo);
}

void MenuConteudos() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao Menu de Conteúdos. \n\n");
    printf("+==================================================+\n");
    printf("|                     CONTEÚDOS                    |\n");
    printf("+==================================================+\n");
    printf("|      1 - CALENDÁRIO      |    2 - BIBLIOGRAFIA   |\n");
    printf("+--------------------------------------------------+\n");
    printf("|      3 - HORÁRIO         |    4 - CRONOGRAMA     |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n\n");
    printf("Esse é o menu de Conteúdos. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opConteudos);
}

void Calendario() {
    Clear();
    printf("Olá, usuário! Essa é o Calendário Acadêmico dos alunos do 1º Período - Turma Ada de Engenharia de Software. Fique a vontade para olhar: \n\n");
    printf("+======================================================================================================================================+\n");
    printf("|                                                     1º Período - ADA - Tarde                                                         |\n");
    printf("+======================================================================================================================================+\n");
    printf("|                  Disciplina                 | P1        | Rec P1    | P2        | Rec P2    | Simulado   | Rec Simulado | Rec Final  |\n");
    printf("+---------------------------------------------+-----------+-----------+-----------+-----------+------------+--------------+------------+\n");
    printf("|  Engenharia de Software - Prof Futino       | 09/04/2024| 08/05/2024| 21/05/2024| 12/06/2024| 22/06/2024 | 28/06/2024   | 03/07/2024 |\n");
    printf("+---------------------------------------------+-----------+-----------+-----------+-----------+------------+--------------+------------+\n");
    printf("|  Matemática Discreta - Prof Francisco Araújo| 10/04/2024| 07/05/2024| 22/05/2024| 11/06/2024| 22/06/2024 | 28/06/2024   | 02/07/2024 |\n");
    printf("+---------------------------------------------+-----------+-----------+-----------+-----------+------------+--------------+------------+\n");
    printf("|  Inglês I - Prof Stela                      | 09/04/2024| 06/05/2024| 24/05/2024| 10/06/2024| 22/06/2024 | 28/06/2024   | 01/07/2024 |\n");
    printf("+---------------------------------------------+-----------+-----------+-----------+-----------+------------+--------------+------------+\n");
    printf("|  Arquitetura de Computadores - Prof Luciani | 15/04/2024| 06/05/2024| 27/05/2024| 10/06/2024| 22/06/2024 | 28/06/2024   | 01/07/2024 |\n");
    printf("+---------------------------------------------+-----------+-----------+-----------+-----------+------------+--------------+------------+\n");
    printf("|  Algoritmo e Programação - Prof Hilson      | 19/04/2024| 08/05/2024| 06/06/2024| 12/06/2024| 22/06/2024 | 28/06/2024   | 03/07/2024 |\n");
    printf("+=============================================+===========+===========+===========+===========+============+==============+============+\n\n");
    Sleep(3000);
    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Bibliografia() {
    Clear();
    printf("Olá, usuário! Essa é a Bibliográfia Acadêmica dos alunos do 1º Período de Engenharia de Software. Fique a vontade para olhar: \n\n");
    printf("+===================================================+\n");
    printf("|                    BIBLIOGRAFIA                   |\n");
    printf("+===================================================+\n");
    printf("| 1. Engenharia de Software                         |\n");
    printf("|    - Autor: Sommerville                           |\n");
    printf("|    - Edição: 9ª                                   |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 2. Matemática Discreta para Ciências da Computação|\n");
    printf("|    - Autor: STEIN, DRYSDALE, BOGART               |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 3. Algoritmos e Programação com Exemplos          |\n");
    printf("|    - Autor: EDELWEISS                             |\n");
    printf("|    - Série Livros Didáticos UFRGS - Volume 23     |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 4. Interdisciplinaridade em Ciência, Tecnologia   |\n");
    printf("|    & Inovação                                     |\n");
    printf("|    - Autor: PHILIPPI JR.                          |\n");
    printf("|    - Edição: 1ª                                   |\n");
    printf("+---------------------------------------------------+\n");
    printf("| 5. Arquitetura e Organização de Computadores      |\n");
    printf("|    - Autor: STALLINGS                             |\n");
    printf("|    - Edição: 10ª                                  |\n");
    printf("+===================================================+\n\n");
    Sleep(3000);
    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Horario() {
    Clear();
    printf("Olá, usuário! Essa é o Horário Acadêmico dos alunos do 1º Período - Turma Ada de Engenharia de Software. Fique a vontade para olhar: \n\n");
    printf("+=======================================================================================================================================================================================+\n");
    printf("|                                                                                 HORÁRIO                                                                                               |\n");
    printf("+=======================================================================================================================================================================================+\n");
    printf("| Horário          |            Segunda             |             Terça              |             Quarta             |             Quinta             |             Sexta              |\n");
    printf("+------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+\n");
    printf("| 14:30 - 16:00    | Arquitetura de Computadores    | Matemática Discreta            | Arquitetura de Computadores    | Algoritmos e Programação       | Algoritmos e Programação       |\n");
    printf("|                  | Prof. Luciani                  | Prof. Chiquinho                | Prof. Luciani                  | Prof. Hilson                   | Prof. Hilson                   |\n");
    printf("+------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+\n");
    printf("| 16:30 - 18:00    | Seminários I                   | Engenharia de Software         | Matemática Discreta            | Engenharia de Software         | Projeto de Extensão I          |\n");
    printf("|                  | Prof. Dimmy                    | Prof. Futino                   | Prof. Luciani                  | Prof. Futino                   | Prof. Lilian                   |\n");
    printf("+------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+--------------------------------+\n");
    printf("| 18:30 - 20:00    | Inglês I                       |                                |                                |                                |                                |\n");
    printf("|                  | Prof. Stela                    |                                |                                |                                |                                |\n");
    printf("+=======================================================================================================================================================================================+\n\n");
    Sleep(3000);
    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void Cronograma() {
    Clear();
    printf("Olá, usuário! Essa é o Cronograma Acadêmico dos alunos do 1º Período de Engenharia de Software. Fique a vontade para olhar: \n\n");
    printf("+====================================================================+\n");
    printf("|                             CRONOGRAMA                             |\n");
    printf("+====================================================================+\n");
    printf("| Data     | Descrição                                               |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 05/06    | Artigo sobre Criptografia - Prof. Dimmy                 |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 06/06    | Prova de Algoritmos e Programação                       |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 07/06    | Trabalho de Algoritmos e Programação                    |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 07/06    | Artigo Científico de Extensão                           |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 15/06    | Trabalho Extra - Prof. Futino                           |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 20/06    | Trabalho de IA - Prof. Dimmy                            |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 22/06    | Simulado para P3                                        |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 24/06    | Seminário Escrito - Prof. Dimmy                         |\n");
    printf("+----------+---------------------------------------------------------+\n");
    printf("| 30/06    | RedHat                                                  |\n");
    printf("+====================================================================+\n\n");
    Sleep(3000);
    // Espera que o usuário pressione qualquer tecla
    system("pause");
}


void MenuNotas() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao Menu de Notas. \n\n");
    printf("+==================================================+\n");
    printf("|                        NOTAS                     |\n");
    printf("+==================================================+\n");
    printf("|    1 - INSERIR NOTAS     |    2 - EDITAR NOTAS   |\n");
    printf("+--------------------------------------------------+\n");
    printf("|    3 - EXCLUIR NOTAS     |    4 - VISUALIZAR     |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n\n");
    printf("Esse é o menu de Notas. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opNotas);
}

void InserirNotas() {
    Clear();
    printf("Bem-vindo à tela de inserção das Notas.\n");
    printf("+============================================+\n");
    printf("|        DESEJA INSERIR ALGUMA NOTA?         |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM        |       0 - NÃO       |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &opInserirNotas);
}


void RecebendoNotas() {
    int r;
    char nomeArquivo[100];
    int QuantNotas;
    printf("Certo! Agora iremos receber as Notas.\n");
    printf("OBS: Você só pode colocar até 5 notas de uma só vez no sistema. \n");
    printf("Quantas notas você deseja cadastrar? - R: ");
    scanf("%d", &QuantNotas);

    if (QuantNotas >= 1 && QuantNotas <= 5) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

        struct Notas notas[QuantNotas];

        printf("\nInforme o nome do arquivo para salvar os dados das notas: ");
        fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
        strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

        char caminhoArquivo[150] = "C:\\ControleAcademico\\Notas\\";
        strcat(caminhoArquivo, nomeArquivo);
        FILE *arquivo = fopen(caminhoArquivo, "w");

        if (arquivo == NULL) {
            printf("Erro ao abrir o arquivo!\n");
            printf("Tente novamente!\n\n");
            Sleep(2000);
            system("pause");
            return;
        }

        for (r = 0; r < QuantNotas; r++) {
            Clear();
            printf("Informe o nome da disciplina %d: ", r+1);
            fgets(notas[r].Disciplina, sizeof(notas[r].Disciplina), stdin);
            strtok(notas[r].Disciplina, "\n");

            printf("Informe o nome do professor que ministra a disciplina %d: ", r+1);
            fgets(notas[r].Professor, sizeof(notas[r].Professor), stdin);
            strtok(notas[r].Professor, "\n");

            printf("Informe a nota do exame %d: ", r+1);
            scanf("%f", &notas[r].Nota);
            getchar();  // Consumir o caractere de nova linha deixado pelo scanf

            if (notas[r].Nota < 0 || notas[r].Nota > 10) {
                printf("\n\nNota inválida! O valor deve estar entre 0 e 10.\n");
                fclose(arquivo);
                remove(caminhoArquivo);  // Remover o arquivo incompleto
                Sleep(2500);
                return;
            }

            // Gravando dados no arquivo
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "|             DADOS DA NOTA %d            |\n", r+1);
            fprintf(arquivo, "+========================================+\n");
            fprintf(arquivo, "| -> Disciplina: %s\n", notas[r].Disciplina);
            fprintf(arquivo, "| -> Professor: %s\n", notas[r].Professor);
            fprintf(arquivo, "| -> Nota %d: %.2f\n\n", r+1, notas[r].Nota);
        }

        fclose(arquivo);

        // Imprimindo Dados
        Clear();
        printf("Parabéns, Notas inseridas com sucesso!\n");
        printf("Aqui está o resultado deste cadastro: \n\n");

        for (r = 0; r < QuantNotas; r++) {
            printf("+========================================+\n");
            printf("|             DADOS DA NOTA %d            |\n", r+1);
            printf("+========================================+\n");
            printf("| -> Disciplina: %s \n", notas[r].Disciplina);
            printf("| -> Professor: %s \n", notas[r].Professor);
            printf("| -> Nota %d: %.2f\n", r+1, notas[r].Nota);
            printf("\n");
        }       
    } else {
        printf("\nVocê inseriu uma quantidade de Notas inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}


void EditarNotas() {
    Clear();
    printf("Bem-vindo à tela de inserção das Notas.\n");
    printf("+============================================+\n");
    printf("|         DESEJA EDITAR ALGUMA NOTA?         |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM        |       0 - NÃO       |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &opEditarNotas);
}

void EditandoNotas() {
    Clear();
    int r;
    char nomeArquivo[100];
    int QuantNotas;
    struct Notas notas[5];  // Definimos um máximo de 5 notas conforme o limite

    printf("Informe o nome do arquivo para editar as notas: ");
    getchar();  // Consumir o caractere de nova linha deixado pelo scanf
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Notas\\";
    strcat(caminhoArquivo, nomeArquivo);

    FILE *arquivo = fopen(caminhoArquivo, "r+");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo!\n");
        printf("Tente novamente com algum arquivo válido!\n\n");
        Sleep(2000);
        system("pause");
        return;
    }

    Clear();
    // Leitura do conteúdo atual do arquivo
    printf("Conteúdo atual do arquivo:\n");
    char buffer[255];
    while (fgets(buffer, sizeof(buffer), arquivo)) {
        printf("%s", buffer);
    }

    // Voltar para o início do arquivo para edição
    rewind(arquivo);

    printf("Certo! Iremos editar suas notas.\n");
    printf("Para isso será necessário que você recoloque as notas, fazendo as alterações necessárias!\n");
    printf("Quantas notas você deseja colocar? (Até 5) - R: ");
    scanf("%d", &QuantNotas);

    if (QuantNotas < 1 || QuantNotas > 5) {
        printf("Número inválido de notas. Deve ser entre 1 e 5.\n");
        fclose(arquivo);
        Sleep(2000);
        system("pause");
        return;
    }

    // Consumir o caractere de nova linha deixado pelo scanf
    getchar();

    for (r = 0; r < QuantNotas; r++) {
        Clear();
        printf("Informe o nome da disciplina %d: ", r+1);
        fgets(notas[r].Disciplina, sizeof(notas[r].Disciplina), stdin);
        strtok(notas[r].Disciplina, "\n");

        printf("Informe o nome do professor que ministra a disciplina %d: ", r+1);
        fgets(notas[r].Professor, sizeof(notas[r].Professor), stdin);
        strtok(notas[r].Professor, "\n");

        printf("Informe a nota do exame %d (entre 0 e 10): ", r+1);
        scanf("%f", &notas[r].Nota);
        getchar();  // Consumir o caractere de nova linha deixado pelo scanf

        if (notas[r].Nota < 0 || notas[r].Nota > 10) {
            printf("Nota inválida! O valor deve estar entre 0 e 10.\n");
            fclose(arquivo);
            return;
        }
    }

    // Reescrever o arquivo com os novos dados
    freopen(caminhoArquivo, "w", arquivo);

    for (r = 0; r < QuantNotas; r++) {
        fprintf(arquivo, "+========================================+\n");
        fprintf(arquivo, "|             DADOS DA NOTA %d            |\n", r+1);
        fprintf(arquivo, "+========================================+\n");
        fprintf(arquivo, "| -> Disciplina: %s\n", notas[r].Disciplina);
        fprintf(arquivo, "| -> Professor: %s\n", notas[r].Professor);
        fprintf(arquivo, "| -> Nota %d: %.2f\n\n", r+1, notas[r].Nota);
    }

    fclose(arquivo);

    // Imprimindo Dados
    printf("Parabéns, Notas editadas com sucesso!\n");
    printf("Aqui está o resultado deste cadastro: \n\n");

    for (r = 0; r < QuantNotas; r++) {
        printf("+========================================+\n");
        printf("|             DADOS DA NOTA %d            |\n", r+1);
        printf("+========================================+\n");
        printf("| -> Disciplina: %s \n", notas[r].Disciplina);
        printf("| -> Professor: %s \n", notas[r].Professor);
        printf("| -> Nota %d: %.2f\n", r+1, notas[r].Nota);
        printf("\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void ExcluirNotas() {
    Clear();
    printf("Bem-vindo à tela de inserção das Notas.\n");
    printf("+============================================+\n");
    printf("|        DESEJA EXCLUIR ALGUMA NOTA?         |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM        |       0 - NÃO       |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &opExcluirNotas);
}

void ExcluindoNotas() {
    Clear();
    char nomeArquivo[100];

    // Consumir o caractere de nova linha deixado pelo scanf
    getchar();

    printf("Informe o nome do arquivo que deseja excluir: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Notas\\";
    strcat(caminhoArquivo, nomeArquivo);

    // Tentar remover o arquivo
    if (remove(caminhoArquivo) == 0) {
        printf("\nArquivo %s excluído com sucesso!\n\n", nomeArquivo);
    } else {
        printf("\nErro ao excluir o arquivo %s. Verifique se o arquivo existe.\n\n", nomeArquivo);
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void VisualizarNotas(){
    Clear();
    printf("Bem-vindo à tela de visualização das Notas.\n");
    printf("+============================================+\n");
    printf("|       DESEJA VISUALIZAR ALGUMA NOTA?       |\n");
    printf("+============================================+\n");
    printf("|        1 - SIM        |       0 - NÃO      |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &opVisualizarNotas);
}

void VisualizandoNotas() {
    Clear();
    char nomeArquivo[100];

    // Consumir o caractere de nova linha deixado pelo scanf
    getchar();

    printf("Informe o nome do arquivo que deseja visualizar: ");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);
    strtok(nomeArquivo, "\n");  // Remover o caractere de nova linha

    char caminhoArquivo[150] = "C:\\ControleAcademico\\Notas\\";
    strcat(caminhoArquivo, nomeArquivo);

    FILE *arquivo = fopen(caminhoArquivo, "r");
    if (arquivo == NULL) {
        printf("\nErro ao abrir o arquivo %s. Verifique se o arquivo existe.\n\n", nomeArquivo);
        Sleep(1500);
        system("pause");
        return;
    }

    // Ler e exibir o conteúdo do arquivo
    printf("\nConteúdo do arquivo %s:\n\n", nomeArquivo);
    char buffer[255];
    while (fgets(buffer, sizeof(buffer), arquivo)) {
        printf("%s", buffer);
    }

    fclose(arquivo);

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    system("pause");
}

void RetornarMenu() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|    RETORNANDO AO MENU ANTERIOR     |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(2500);
}

void SaindoDoPrograma() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|         SAINDO DO PROGRAMA         |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(2500);
}

void DesejaEncerrar() {
    Clear();
    printf("+============================================+\n");
    printf("|       DESEJA MESMO SAIR DO PROGRAMA?       |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &EncerrandoPrograma);
}

int main() {
    // Definindo Idioma
    setlocale(LC_ALL,"");

    ExibirLayout();
    Loading();
    SistemaIcev();
    do {    
        MenuPrincipal();
        switch (opMenuPrincipal){
            case 1:
                Clear();
                SubMenuCad();
                switch (opCadastro) {
                    case 1:
                        Clear();
                        Alunos();
                        if (CadAluno == 0) {
                            printf("Tudo bem, você não irá cadastrar nenhum aluno!");
                        } else if (CadAluno == 1) {
                            Clear();
                            CadastroAluno();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 2:
                        Clear();
                        Professores();
                        if (CadProfessor == 0) {
                            printf("Tudo bem, você não irá cadastrar nenhum professor!");
                        } else if (CadProfessor == 1) {
                            Clear();
                            CadastroProfessores();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 3:
                        Clear();
                        Disciplinas();
                        if (CadDisciplina == 0) {
                            printf("Tudo bem, você não irá cadastrar nenhuma disciplina!");
                        } else if (CadDisciplina == 1) {
                            Clear();
                            CadastroDisciplinas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 4:
                        Clear();
                        Cursos();
                        if (CadCurso == 0) {
                            printf("Tudo bem, você não irá cadastrar nenhum curso!");
                        } else if (CadCurso == 1) {
                            Clear();
                            CadastroCursos();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 5:
                        Clear();
                        RetornarMenu();
                    break;

                    default:
                        printf("Você inseriu uma opção inválida!");
                }
            break;

            case 2:
                Clear();
                SubMenuImp();
                switch (opImpressao) {
                    case 1:
                        Clear();
                        ImpressaoAlunos();
                    break;
                    
                    case 2:
                        Clear();
                        ImpressaoProfessores();
                    break;

                    case 3:
                        Clear();
                        ImpressaoDisciplinas();
                    break;

                    case 4:
                        Clear();
                        ImpressaoCursos();
                    break;

                    case 5:
                        Clear();
                        RetornarMenu();
                    break;

                    default:
                        printf("Você inseriu uma opção inválida!");
                }
            break;

            case 3:
                Clear();
                MenuConteudos();
                switch (opConteudos) {
                    case 1:
                        Clear();
                        Calendario();
                    break;

                    case 2:
                        Clear();
                        Bibliografia();
                    break;

                    case 3:
                        Clear();
                        Horario();
                    break;

                    case 4:
                        Clear();
                        Cronograma();
                    break;

                    case 5:
                        // Retornar ao Menu Principal
                        Clear();
                        RetornarMenu();
                    break;

                    default:
                        printf("Você inseriu uma opção inválida!");
                }
            break;

            case 4:
                Clear();
                MenuNotas();
                switch (opNotas) {
                    case 1:
                        Clear();
                        InserirNotas();
                        if (opInserirNotas == 0){
                            printf("Tudo bem, você não irá inserir nenhuma nota!");
                        } else if (opInserirNotas == 1) {
                            Clear();
                            RecebendoNotas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 2:
                        Clear();
                        EditarNotas();
                        if (opEditarNotas == 0){
                            printf("Tudo bem, você não irá editar nenhuma nota!");
                        } else if (opEditarNotas == 1) {
                            Clear();
                            EditandoNotas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 3:
                        Clear();
                        ExcluirNotas();
                        if (opExcluirNotas == 0){
                            printf("Tudo bem, você não irá excluir nenhuma nota!");
                        } else if (opExcluirNotas == 1) {
                            Clear();
                            ExcluindoNotas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 4:
                        Clear();
                        VisualizarNotas();
                        if (opVisualizarNotas == 0){
                            printf("Tudo bem, você não irá visualizar nenhuma nota!");
                        } else if (opVisualizarNotas == 1) {
                            Clear();
                            VisualizandoNotas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
                    break;

                    case 5:
                        Clear();
                        RetornarMenu();
                    break;

                    default:
                    printf("Você inseriu uma opção inválida!");
                }
            break;

            case 5:
                Clear();
                DesejaEncerrar();
                switch (EncerrandoPrograma) {
                    case 0:
                        printf("Tudo bem, você retornará ao sistema!");
                    break;

                    case 1:
                        Clear();
                        SaindoDoPrograma();
                        Clear();
                    break;

                    default:
                        printf("Você inseriu uma opção inválida!");
                }
            break;

            default:
                printf("Você inseriu uma opção inválida!");
        }
    } while (EncerrandoPrograma != 1);
    Agradecimento();
    ExibirLayout();
}
