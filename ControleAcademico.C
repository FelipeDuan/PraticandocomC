// Bibliotecas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <time.h>
#include <string.h>

// Variáveis
int opMenuPrincipal, opCadastro, opImpressao, opConteudos, opNotas, EncerrandoPrograma = 0, CadAluno, QuantAlunos, CadProfessor, QuantProfessores, CadDisciplina, QuantDisciplinas;

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

// Voids
void Clear() {
    system("cls");
}

void MenuPrincipal() {
    Clear();
    printf("Olá, usuário! Seja bem-vindo ao sistema do controle acadêmico. \n\n");
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
    printf("+===============================================+\n");
    printf("|                    CADASTROS                  |\n");
    printf("+===============================================+\n");
    printf("|     1 - ALUNOS         |     2 - PROFESSORES  |\n");
    printf("+-----------------------------------------------+\n");
    printf("|     3 - DISCIPLINAS    |     4 - CURSOS       |\n");
    printf("+-----------------------------------------------+\n");
    printf("|         5 - RETORNAR AO MENU PRINCIPAL        |\n");
    printf("+===============================================+\n");
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
    printf("Certo! Agora iremos cadastrar Alunos. \nOBS: Você só pode cadastrar até 4 alunos de uma vez \n");
    printf("Quantos Alunos você deseja cadastrar? - R: ");
    scanf("%d", &QuantAlunos);

    struct CadastroAlunos alunos[QuantAlunos];
    if (QuantAlunos < 5) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

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
            Clear();
        }

        for (i = 0; i < QuantAlunos; i++) {
            // Imprimindo dados
            printf("Parabéns, o Cadastro de Alunos foi um sucesso!\n");
            printf("Aqui está o resultado do Cadastro: \n\n");
            printf("+========================================+\n");
            printf("|            DADOS DO ALUNO %d            |\n", i+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", alunos[i].Nome);
            printf("| -> Matrícula: %s \n", alunos[i].Matricula);
            printf("| -> Turma: %s \n", alunos[i].Turma);
            printf("| -> Curso: %s \n\n\n", alunos[i].Curso);
        }
    } else {
        printf("Você inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    printf("Pressione qualquer tecla para continuar...\n");
    getchar();  // Espera o usuário pressionar uma tecla
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
    printf("Certo! Agora iremos cadastrar Professores. \nOBS: Você só pode cadastrar até 8 professores de uma vez \n");
    printf("Quantos Professores você deseja cadastrar? - R: ");
    scanf("%d", &QuantProfessores);

    struct CadastroProfessores professores[QuantProfessores];
    if (QuantProfessores < 8) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

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
            Clear();
        }

        for (n = 0; n < QuantProfessores; n++) {
            // Imprimindo dados
            printf("Parabéns, o Cadastro de Professores foi um sucesso!\n");
            printf("Aqui está o resultado do Cadastro: \n\n");
            printf("+========================================+\n");
            printf("|        DADOS DO PROFESSOR %d            |\n", n+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", professores[n].NomeProfessor);
            printf("| -> Disciplina: %s \n", professores[n].Disciplina);
            printf("| -> Turma: %s \n", professores[n].TurmaProfessor);
            printf("| -> Curso: %s \n\n\n", professores[n].CursoProfessor);
        }
    } else {
        printf("Você inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    printf("Pressione qualquer tecla para continuar...\n");
    getchar();  // Espera o usuário pressionar uma tecla
}

void Disciplinas() {
    Clear();
    printf("Bem-vindo à tela de Listagem das Disciplinas.\n");
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
    printf("Certo! Agora iremos cadastrar Disciplinas. \nOBS: Você só pode cadastrar até 8 disciplinas de uma vez \n");
    printf("Quantos Professores você deseja cadastrar? - R: ");
    scanf("%d", &QuantDisciplinas);

    struct CadastroDisciplinas disciplinas[QuantDisciplinas];
    if (QuantDisciplinas < 8) {
        // Consumir o caractere de nova linha deixado pelo scanf
        getchar();

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
            Clear();
        }

        for (d = 0; d < QuantDisciplinas; d++) {
            // Imprimindo dados
            printf("Parabéns, o Cadastro de Professores foi um sucesso!\n");
            printf("Aqui está o resultado do Cadastro: \n\n");
            printf("+========================================+\n");
            printf("|        DADOS DA DISCIPLINA %d           |\n", d+1);
            printf("+========================================+\n");
            printf("| -> Nome: %s \n", disciplinas[d].NomeDisciplina);
            printf("| -> Professor: %s \n", disciplinas[d].Professor);
            printf("| -> Curso: %s \n\n\n", disciplinas[d].CursoDisciplina);
        }
    } else {
        printf("Você inseriu uma quantidade de Cadastros inválida!\n\n");
    }

    Sleep(1500);

    // Espera que o usuário pressione qualquer tecla
    printf("Pressione qualquer tecla para continuar...\n");
    getchar();  // Espera o usuário pressionar uma tecla
}

void Cursos() {
    printf("Bem-vindo à tela de Listagem dos Cursos.\n");
}

void SubMenuImp() {
    Clear();
    printf("+==================================================+\n");
    printf("|                   GERAR IMPRESSÃO                |\n");
    printf("+==================================================+\n");
    printf("|   1 - ALUNOS e CURSO     |    2 - CONTEÚDOS      |\n");
    printf("+--------------------------------------------------+\n");
    printf("|   3 - DISCIPLINAS e PROF |    4 - BOLETIM        |\n");
    printf("+--------------------------------------------------+\n");
    printf("|           5 - RETORNAR AO MENU PRINCIPAL         |\n");
    printf("+==================================================+\n");
    printf("Esse é o menu de Impressão. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opImpressao);
}

void MenuConteudos() {
    printf("Esse é o menu de Conteúdos. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
    scanf("%d", &opConteudos);
}

void MenuNotas() {
    printf("Esse é o menu de Notas. \nPara acessar nossas funcionalidades, informe o número da operação desejada: ");
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
    printf("|       1 - SIM       |       0 - NÃO        |\n");
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
                            printf("Tudo bem, você não irá cadastrar nenhum aluno!");
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
                            printf("Tudo bem, você não irá cadastrar disciplinas!");
                        } else if (CadDisciplina == 1) {
                            Clear();
                            CadastroDisciplinas();
                        } else {
                            printf("Você inseriu uma opção inválida!");
                        }
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
                        printf("Você inseriu uma opção inválida!");
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
}
