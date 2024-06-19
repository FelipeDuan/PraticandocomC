// Olá, este é um código feito para rodar em Windows, em especial, no VS Code, exibindo acentuação e caracteres especiais, sem quaisquer tipos de problemas
// Acesse meu Github: FelipeDuan
// Jogo da Adivinhação 
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <string>
#include <time.h>

// Variáveis utilizadas
int TerceiraPessoa, AmbienteUrbano, Gangstar, SuperHeroi, CabecadeTeia, Gotham, Skate, Gow, Dbz, Sobrenaturais, DMC, Plataforma, Mario, Sonic, GuitarHero, MortalKombat, EncerrandoPrograma ;

// Voids a serem Utilizados

void Clear() {
    system("cls");
}

void Inicio() {
    // Tela do Menu Principal
    Clear();
    printf("+============================================================================================+\n");
    printf("|                                                                                            |\n");
    printf("|        ██████╗ ███████╗███╗   ███╗      ██╗   ██╗██╗███╗   ██╗██████╗  ██████╗ ██╗         |\n");
    printf("|        ██╔══██╗██╔════╝████╗ ████║      ██║   ██║██║████╗  ██║██╔══██╗██╔═══██╗██║         |\n");
    printf("|        ██████╔╝█████╗  ██╔████╔██║█████╗██║   ██║██║██╔██╗ ██║██║  ██║██║   ██║██║         |\n");
    printf("|        ██╔══██╗██╔══╝  ██║╚██╔╝██║╚════╝╚██╗ ██╔╝██║██║╚██╗██║██║  ██║██║   ██║╚═╝         |\n");
    printf("|        ██████╔╝███████╗██║ ╚═╝ ██║       ╚████╔╝ ██║██║ ╚████║██████╔╝╚██████╔╝██╗         |\n");
    printf("|        ╚═════╝ ╚══════╝╚═╝     ╚═╝        ╚═══╝  ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝ ╚═╝         |\n");
    printf("|                                                                                            |\n");
    printf("+============================================================================================+\n");
    printf("|                          ESTE É UM JOGO DE ADIVINHAÇÃO DE JOGOS!                           |\n");
    printf("+--------------------------------------------------------------------------------------------+\n");
    printf("|                             RESPONDA AS PERGUNTAS PARA ACERTAR                             |\n");
    printf("+--------------------------------------------------------------------------------------------+\n");
    printf("|                                  FEITO POR FELIPE DUAN!                                    |\n");
    printf("+============================================================================================+\n\n");
    Sleep(5000);
}

void Loading() {
    Clear();
    int progresso = 0;
    int f;

    printf("+====================================================+\n");
    printf("|                      CARREGANDO                    |\n");
    printf("+====================================================+\n");

    for (progresso = 0; progresso <= 100; progresso++) {
        printf("\r| [");
        for (f = 0; f < progresso / 2; f++) {
            printf("=");
        }
        for (f = progresso / 2; f < 50; f++) {
            printf(" ");
        }
        printf("] %d%%", progresso);
        fflush(stdout);
        Sleep(30); // Ajusta o tempo para tornar o carregamento mais rápido ou mais lento
    }
    printf("\n");
}

void MenuPrincipal() {   
    // Início de Funcionamento do Menu
    Clear();
    printf("Olá, seja muito bem-vindo ao jogo de adivinhação de jogos!\n");
    printf("Antes de ir para as perguntas, preciso que escolha uma das opções a seguir para participar do Jogo: \n\n");
    printf("+=============================================+\n");
    printf("|               OPÇÕES DE JOGOS               |\n");
    printf("+=============================================+\n");
    printf("| 1. God of War 3                             |\n");
    printf("+---------------------------------------------+\n");
    printf("| 2. Super Mario Bros                         |\n");
    printf("+---------------------------------------------+\n");
    printf("| 3. Sonic the Hedgehog                       |\n");
    printf("+---------------------------------------------+\n");
    printf("| 4. GTA San Andreas                          |\n");
    printf("+---------------------------------------------+\n");
    printf("| 5. Dragon Ball Budokai Tenkaichi 3          |\n");
    printf("+---------------------------------------------+\n");
    printf("| 6. Spider-Man 3 (PS2)                       |\n");
    printf("+---------------------------------------------+\n");
    printf("| 7. SuperMan Returns (Xbox 360)              |\n");
    printf("+---------------------------------------------+\n");
    printf("| 8. Devil May Cry 3                          |\n");
    printf("+---------------------------------------------+\n");
    printf("| 9. Batman Arkham Knight                     |\n");
    printf("+---------------------------------------------+\n");
    printf("| 10. Skate 3                                 |\n");
    printf("+---------------------------------------------+\n");
    printf("| 11. Guitar Hero                             |\n");
    printf("+---------------------------------------------+\n");
    printf("| 12. Mortal Kombat (Super Nintendo)          |\n");
    printf("+=============================================+\n\n");
    Sleep(2000);
    printf("Agora iremos iniciar o jogo!\n");
    system("pause");
}

// Perguntas
void Pergunta1() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|             O jogo escolhido é em Terceira Pessoa?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &TerceiraPessoa);
    printf("\n");
}

void Pergunta2() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|        O jogo escolhido se passa em um ambiente urbano?       |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &AmbienteUrbano);
    printf("\n");
}

void Pergunta3() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|     O personagem principal é gangstar e usa armas de Fogo?    |\n");
    printf("|             (Ain't that a surprise, I got a gun!)             |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Gangstar);
    printf("\n");
}

void Pergunta4() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|            O personagem principal é um super-herói?           |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &SuperHeroi);
    printf("\n");
}

void Pergunta5() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|              Ele é conhecido como Cabeça de Teia?             |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &CabecadeTeia);
    printf("\n");
}

void Pergunta6() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|    O personagem principal é sombrio como as trevas e defende  |\n");
    printf("|                         Gotham City?                          |\n");
    printf("|                   (Gotham precisa de mim!)                    |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Gotham);
    printf("\n");
}

void Pergunta7() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|             O personagem principal anda de skate              |\n");
    printf("|                         pelas ruas?                           |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Skate);
    printf("\n");
}

void Pergunta8() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|             O Jogo é baseado na mitologia Grega?              |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Gow);
    printf("\n");
}

void Pergunta9() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|      Alguns personagens desse jogo ficam mais fortes se       |\n");
    printf("|           transformando e mudando a cor do cabelo?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Dbz);
    printf("\n");
}

void Pergunta10() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|              O Jogo envolve missões sobrenaturais?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &Sobrenaturais);
    printf("\n");
}

void Pergunta11() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                           PERGUNTA                            |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|              O personagem principal é um caçador              |\n");
    printf("|                         de demônios?                          |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opção (1 ou 2): ");
    scanf(" %d", &DMC);
    printf("\n");
}

void Pergunta12() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|           O jogo é de plataforma e no padrão 8bit?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf(" %d", &Plataforma);
    printf("\n");
}

void Pergunta13() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|             O personagem principal é um encanador?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf(" %d", &Mario);
    printf("\n");
}

void Pergunta14() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|            O personagem principal é um ouriço azul?           |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf(" %d", &Sonic);
    printf("\n");
}

void Pergunta15() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|          O jogo envolve tocar instrumentos musicais?          |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf(" %d", &GuitarHero);
    printf("\n");
}

void Pergunta16() {
    Clear();
    printf("+===============================================================+\n");
    printf("|                          PERGUNTA                             |\n");
    printf("+===============================================================+\n");
    printf("|                                                               |\n");
    printf("|          O jogo envolve torneios de artes marciais e          |\n");
    printf("|             personagens com poderes sobrenaturais?            |\n");
    printf("|                                                               |\n");
    printf("+===============================================================+\n");
    printf("|     1. Sim                                                    |\n");
    printf("|     2. Não                                                    |\n");
    printf("+===============================================================+\n\n");
    printf("Escolha uma opcao (1 ou 2): ");
    scanf(" %d", &MortalKombat);
    printf("\n");
}

// Void de agradecimento
void Agradecimento() {
    Clear();
    printf("+====================================================================================================================+\n");
    printf("|                                                                                                                    |\n");
    printf("|   ███╗   ███╗██╗   ██╗██╗████████╗ ██████╗      ██████╗ ██████╗ ██████╗ ██╗ ██████╗  █████╗ ██████╗  ██████╗ ██╗   |\n");
    printf("|   ████╗ ████║██║   ██║██║╚══██╔══╝██╔═══██╗    ██╔═══██╗██╔══██╗██╔══██╗██║██╔════╝ ██╔══██╗██╔══██╗██╔═══██╗██║   |\n");
    printf("|   ██╔████╔██║██║   ██║██║   ██║   ██║   ██║    ██║   ██║██████╔╝██████╔╝██║██║  ███╗███████║██║  ██║██║   ██║██║   |\n");
    printf("|   ██║╚██╔╝██║██║   ██║██║   ██║   ██║   ██║    ██║   ██║██╔══██╗██╔══██╗██║██║   ██║██╔══██║██║  ██║██║   ██║╚═╝   |\n");
    printf("|   ██║ ╚═╝ ██║╚██████╔╝██║   ██║   ╚██████╔╝    ╚██████╔╝██████╔╝██║  ██║██║╚██████╔╝██║  ██║██████╔╝╚██████╔╝██╗   |\n");
    printf("|   ╚═╝     ╚═╝ ╚═════╝ ╚═╝   ╚═╝    ╚═════╝      ╚═════╝ ╚═════╝ ╚═╝  ╚═╝╚═╝ ╚═════╝ ╚═╝  ╚═╝╚═════╝  ╚═════╝ ╚═╝   |\n");
    printf("|                                                                                                                    |\n");
    printf("+====================================================================================================================+\n");
    printf("|                                                                                                                    |\n");
    printf("|                                       Muito obrigado por ver meu código!                                           |\n");
    printf("|                                                                                                                    |\n");
    printf("+--------------------------------------------------------------------------------------------------------------------+\n");
    printf("|                                                                                                                    |\n");
    printf("|                                             Feito por Felipe Duan                                                  |\n");
    printf("|                                                                                                                    |\n");
    printf("+====================================================================================================================+\n\n");
    Sleep(5000);
    Clear();    
}

// Void para sair do programa
void SaindoDoPrograma() {
    Clear();
    printf("+====================================+\n");
    printf("|                                    |\n");
    printf("|         SAINDO DO PROGRAMA         |\n");
    printf("|                                    |\n");
    printf("+====================================+\n");
    Sleep(2500);
}

// Função para confirmar saída do programa
void DesejaEncerrar() {
    Clear();
    printf("+============================================+\n");
    printf("|         DESEJA REINICIAR O PROGRAMA?       |\n");
    printf("+============================================+\n");
    printf("|       1 - SIM       |       0 - NÃO        |\n");
    printf("+============================================+\n");
    printf("| Sua Resposta: ");
    scanf("%d", &EncerrandoPrograma);
}

void OpErrada() {
    Clear();
    printf("Você inseriu uma opção inválida\n");
    system("pause");
}

int main() {
 // Define o valor das páginas de código UTF8 e default do Windows
 UINT CPAGE_UTF8 = 65001;

 // Fazendo a acentuação funcionar em conjunto com os caracteres especiais
 UINT CPAGE_DEFAULT = GetConsoleOutputCP();

 // Define codificação como sendo UTF-8
 SetConsoleOutputCP(CPAGE_UTF8);

// Início do Jogo
Inicio();
Loading();
do {
    MenuPrincipal();
    Pergunta1();
    switch (TerceiraPessoa) {
        case 1:
            Pergunta2();
            switch (AmbienteUrbano) {
                case 1:
                    Pergunta3();
                    switch (Gangstar) {
                        case 1:
                            Clear();
                            printf("O jogo escolhido foi GTA San Andreas!\n\n");
                            system("pause");
                        break;

                        case 2:
                            Pergunta4();
                            switch (SuperHeroi) {
                                case 1:
                                    Pergunta5();
                                    switch (CabecadeTeia) {
                                        case 1:
                                            Clear();
                                            printf("O jogo escolhido foi Spider-Man 3! (Vai teia!)\n\n");
                                            system("pause");
                                        break;

                                        case 2:
                                            Pergunta6();
                                            switch (Gotham) {
                                                case 1:
                                                    Clear();
                                                    printf("O jogo escolhido foi Batman Arkham Knight!\n\n");
                                                    system("pause");
                                                break;

                                                case 2:
                                                    Clear();
                                                    printf("O jogo escolhido foi SuperMan Returns!\n\n");
                                                    system("pause");
                                                break;

                                                default:
                                                    OpErrada();
                                            }
                                        break;
                            
                                        default:
                                            OpErrada();
                                    }
                                break;

                                case 2:
                                    Pergunta7();
                                    switch (Skate) {
                                        case 1:
                                        Clear();
                                        printf("O jogo escolhido foi Skate 3!\n\n");
                                        system("pause");
                                        break;

                                        case 2:
                                            Clear();
                                            printf("Eu sei que você está mentindo, o jogo escolhido foi Skate 3!\n\n");
                                            system("pause");
                                        break;

                                        default:
                                            OpErrada();
                                    }
                                break;

                                default:
                                    OpErrada();
                            }
                        break;

                        default:
                            OpErrada();
                    }
                break;

                case 2:
                    Pergunta8();
                    switch (Gow) {
                    case 1:
                        Clear();
                        printf("O jogo escolhido foi God of War 3! (Cleiton Bom de Guerra)\n\n");
                        system("pause");
                    break;

                    case 2:
                        Pergunta9();
                        switch (Dbz) {
                            case 1:
                                Clear();
                                printf("O jogo escolhido foi Dragon Ball Budokai Tenkaichi 3!\n\n");
                                system("pause");
                            break;

                            case 2:
                                Pergunta10();
                                switch (Sobrenaturais) {
                                    case 1:
                                    Pergunta11();
                                    switch (DMC) {
                                        case 1:
                                            Clear();
                                            printf("O jogo escolhido foi Devil May Cry!\n\n");
                                            system("pause");
                                        break;

                                        case 2:
                                            Clear();
                                            printf("Eu sei que você está mentindo, o jogo escolhido foi Devil May Cry!\n\n");
                                            system("pause");
                                        break;

                                        default:
                                            OpErrada();
                                    }
                                    break;

                                    case 2:
                                        Clear();
                                        printf("Será que você poderia parar de escolher opções aleatoriamente?\nVocê chutou e acertou em Devil May Cry!\n\n");
                                        system("pause");
                                    break;

                                    default:
                                        OpErrada();
                                }
                            break;

                            default:
                                OpErrada();
                        }
                        break;

                        default:
                            OpErrada();
                    }
                    break;

                    default:
                        OpErrada();
            }
        break;

        case 2:
            Pergunta12();
            switch (Plataforma) {
                case 1:
                    Pergunta13();
                    switch (Mario) {
                        case 1:
                            Clear();
                            printf("O jogo escolhido foi Super Mario Bros (It's me, Mario!)\n\n");
                            system("pause");
                        break;

                        case 2:
                            Pergunta14();
                            switch (Sonic) {
                                case 1:
                                    Clear();
                                    printf("O jogo escolhido foi Sonic!\n\n");
                                    system("pause");
                                break;

                                case 2:
                                    Clear();
                                    printf("Será que você poderia parar de escolher opções aleatoriamente?\nVocê chutou e acertou no Sonic!\n\n");
                                    system("pause");
                                break;

                                default:
                                OpErrada();
                            }
                        break;
                    
                        default:
                        OpErrada();
                    }
                break;

                case 2:
                    Pergunta15();
                    switch (GuitarHero) {
                        case 1:
                            Clear();
                            printf("O jogo escolhido foi Guitar Hero!\n\n");
                            system("pause");
                        break;

                        case 2:
                            Pergunta16();
                            switch (MortalKombat) {
                                case 1:
                                    Clear();
                                    printf("O jogo escolhido foi Mortal Kombat!\n\n");
                                    system("pause");
                                break;

                                case 2:
                                    Clear();
                                    printf("Será que você poderia parar de escolher opções aleatoriamente?\nVocê chutou e acertou no Mortal Kombat!\n\n");
                                    system("pause");
                                break;

                                default:
                                    OpErrada();
                            }
                        break;

                        default:
                            OpErrada();
                }
                break;

                default:
                OpErrada();
            }
        break;

        default:
            OpErrada();
    }

    DesejaEncerrar();
} while (EncerrandoPrograma != 0);

// SetConsoleOutputCP(CPAGE_DEFAULT);

// Encerrando o Programa
SaindoDoPrograma();
Agradecimento();

}