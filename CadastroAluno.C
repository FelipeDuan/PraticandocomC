// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>

// Vari�veis
int opMenuPrincipal, opCadastro, opImpressao, opConteudos, opNotas, EncerrandoPrograma, CadAluno, QuantAlunos;

// Voids
void Clear() {
    system("cls");
}

void MenuPrincipal() {
    Clear(); 
    printf("Ol�, usu�rio! Seja bem-vindo ao sistema do controle acad�mico. \n\n");
    printf("+===============================================+\n");
    printf("|               CONTROLE ACAD�MICO              |\n");
    printf("+===============================================+\n");
    printf("|     1 - CADASTROS      |     2 - IMPRESS�O    |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - CONTE�DOS      |     4 - NOTAS        |\n");
    printf("+-----------------------------------------------+\n");
    printf("|                    5 - SAIR                   |\n");
    printf("+===============================================+\n\n");
    printf("Essa � a tela inicial do controle acad�mico, informe o n�mero da opera��o desejada: ");
    scanf("%d", &opMenuPrincipal);
}

void SubMenuCad() {
    Clear();
    printf("+===============================================+\n");
    printf("|                    CADASTROS                  |\n");
    printf("+===============================================+\n");
    printf("|     1 - ALUNOS         |     2 - PROFESSORES  |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - DISCIPLINAS    |     4 - CURSOS       |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         5 - RETORNAR AO MENU PRINCIPAL        |\n");
    printf("+===============================================+\n");
    printf("Esse � o menu de Cadastro. \nPara acessar nossas funcionalidades, informe o n�mero da opera��o desejada: ");
    scanf("%d", &opCadastro);
}

void Alunos() {
    Clear();
    printf("Bem-vindo � tela de Cadastro dos Alunos. \n\n");
    printf("+============================================+\n");
    printf("|        DESEJA CADASTRAR ALGUM ALUNO?       |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - N�O        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &CadAluno);
}

void CadastroAluno() {
    int i;

    printf("Certo! Agora iremos cadastrar Alunos. \n OBS: Voc� s� pode cadastrar at� 4 alunos de uma vez \n");
    printf("Quantos Alunos voc� deseja cadastrar? - R: ");
    scanf("%d", &QuantAlunos);

    struct CadastroAlunos {
    char Nome[40];
    int Matricula;
    char Turma[10];
    char Curso[20];
    } alunos;

    switch (QuantAlunos) {
        case 1:
            struct CadastroAlunos alunos[1];
            // Recebendo os Dados 
            Clear();
            printf("Informe o nome do Aluno: ");
            scanf("%s", &alunos->Nome);

            printf("Informe a matr�cula do Aluno: ");
            scanf("%d", &alunos->Matricula);

            printf("Informe a turma do Aluno: ");
            scanf("%s", &alunos->Turma);

            printf("Informe o curso do Aluno: ");
            scanf("%s", &alunos->Curso);

            // Imprimindo dados
            Clear();
            printf("+========================================+\n");
            printf("|             DADOS DO PRODUTO           |\n");
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", alunos->Nome);
            printf("| -> Matr�cula: %d \n", alunos->Matricula);
            printf("| -> Turma: %s \n", alunos->Turma);
            printf("| -> Curso: %s \n\n\n", alunos->Curso);
        break;

        case 2:
            struct CadastroAlunos alunos[3];
            // Recebendo os Dados
            for (i = 1; i < 3; i++) {
                Clear();
                printf("Informe o nome do Aluno %d: ", i);
                scanf("%s", &alunos->Nome);

                printf("Informe a matr�cula do Aluno %d: ", i);
                scanf("%d", &alunos->Matricula);

                printf("Informe a turma do Aluno %d: ", i);
                scanf("%s", &alunos->Turma);

                printf("Informe o curso do Aluno %d: ", i);
                scanf("%s", &alunos->Curso);
            }

            // Imprimindo dados
            for (i = 1; i < 3; i++) {
                Clear();
                printf("+========================================+\n");
                printf("|            DADOS DO PRODUTO %d          |\n", i);
                printf("+========================================+\n");
                printf("| -> Nome: %s \n", alunos->Nome);
                printf("| -> Matr�cula: %d \n", alunos->Matricula);
                printf("| -> Turma: %s \n", alunos->Turma);
                printf("| -> Curso: %s \n\n\n", alunos->Curso);
            }
        break;

        case 3:
            struct CadastroAlunos alunos[4];
            // Recebendo os Dados
            for (i = 1; i < 4; i++) {
                Clear();
                printf("Informe o nome do Aluno %d: ", i);
                scanf("%s", &alunos->Nome);

                printf("Informe a matr�cula do Aluno %d: ", i);
                scanf("%d", &alunos->Matricula);

                printf("Informe a turma do Aluno %d: ", i);
                scanf("%s", &alunos->Turma);

                printf("Informe o curso do Aluno %d: ", i);
                scanf("%s", &alunos->Curso);
            }

            // Imprimindo Dados
            for (i = 1; i < 4; i++) {
                Clear();
                printf("+========================================+\n");
                printf("|            DADOS DO PRODUTO %d          |\n", i);
                printf("+========================================+\n");
                printf("| -> Nome: %s \n", alunos->Nome);
                printf("| -> Matr�cula: %d \n", alunos->Matricula);
                printf("| -> Turma: %s \n", alunos->Turma);
                printf("| -> Curso: %s \n\n\n", alunos->Curso);
            }
        break;

        case 4:
            struct CadastroAlunos alunos[5];
            // Recebendo os Dados
            for (i = 1; i < 5; i++) {
                Clear();
                printf("Informe o nome do Aluno %d: ", i);
                scanf("%s", &alunos->Nome);

                printf("Informe a matr�cula do Aluno %d: ", i);
                scanf("%d", &alunos->Matricula);

                printf("Informe a turma do Aluno %d: ", i);
                scanf("%s", &alunos->Turma);

                printf("Informe o curso do Aluno %d: ", i);
                scanf("%s", &alunos->Curso);
            }

            // Imprimindo Dados
            for (i = 1; i < 5; i++) {
                Clear();
                printf("+========================================+\n");
                printf("|            DADOS DO PRODUTO %d          |\n", i);
                printf("+========================================+\n");
                printf("| -> Nome: %s \n", alunos->Nome);
                printf("| -> Matr�cula: %d \n", alunos->Matricula);
                printf("| -> Turma: %s \n", alunos->Turma);
                printf("| -> Curso: %s \n\n\n", alunos->Curso);
            }
        break;

        default:
        printf("Voc� inseriu uma op��o inv�lida!");
    }

}

void Professores() {
    printf("Bem-vindo � tela de Acompanhamento dos Professores.");
}

void Disciplinas() {
    printf("Bem-vindo � tela de Listagem das Disciplinas.");
}

void Cursos() {
    printf("Bem-vindo � tela de Listagem dos Cursos.");
}

void SubMenuImp() {
    Clear();
    printf("+==================================================+\n");
    printf("|                   GERAR IMPRESS�O                |\n");
    printf("+==================================================+\n");
    printf("|   1 - ALUNOS e CURSO     |    2 - CONTE�DOS      |\n");
    printf("+--------------------------------------------------+\n");
    printf("|   3 - DISCIPLINAS e PROF |    4 - BOLETIM        |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n");
    printf("Esse � o menu de Impress�o. \n Para acessar nossas funcionalidades, informe o n�mero da opera��o desejada: ");
    scanf("%d", &opImpressao);
}

void MenuConteudos() {
    printf("Esse � o menu de Conte�dos. \n Para acessar nossas funcionalidades, informe o n�mero da opera��o desejada: ");
    scanf("%d", &opConteudos);
}

void MenuNotas() {
    printf("Esse � o menu de Notas. \n Para acessar nossas funcionalidades, informe o n�mero da opera��o desejada: ");
    scanf("%d", &opNotas);
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
    printf("+============================================+\n");
    printf("|       DESEJA MESMO SAIR DO PROGRAMA?       |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - N�O        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &EncerrandoPrograma);
}

int main() {
    do {
    // Definindo Idioma
    setlocale(LC_ALL,"");
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
                        printf("Tudo bem, voc� n�o ir� cadastrar nenhum aluno!");
                    } else if (CadAluno == 1) {
                        Clear();
                        CadastroAluno();
                    } else {
                        printf("Voc� inseriu uma op��o inv�lida!");
                    }
                break;

                case 2:
                    Clear();
                    Professores();
                break;

                case 3:
                    Clear();
                    Disciplinas();
                break;

                case 4:
                    Clear();
                    Professores();
                break;

                case 5:
                    Clear();
                    RetornarMenu();
                break;

                default:
                printf("Voc� inseriu uma op��o inv�lida!");
            }
        break;

        case 2:
            Clear();
            SubMenuImp();
        break;

        case 3:
            Clear();
            MenuConteudos();
        break;

        case 4:
            Clear();
            MenuNotas();
        break;

        case 5:
            Clear();
            DesejaEncerrar();
            switch (EncerrandoPrograma) {
                case 0:
                    printf("Tudo bem, voc� retornar� ao sistema!");
                break;

                case 1:
                    Clear();
                    SaindoDoPrograma();
                    Clear();
                break;

                default:
                printf("Voc� inseriu uma op��o inv�lida!");
            }
        break;

        default:
        printf("Voc� inseriu uma op��o inv�lida!");
    }
    } while ( EncerrandoPrograma !=  0);
}