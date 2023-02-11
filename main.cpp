#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/time.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <sys/socket.h>



void print_domain_records(char *domain) {
    char command[1000];
    sprintf(command, "nslookup -type=any %s", domain);
    FILE *fp = popen(command, "r");
    if (fp == NULL) {
        printf("bruh\n");
        return;
    }
    char buffer[1000];
    while (fgets(buffer, 1000, fp) != NULL) {
        printf("%s", buffer);
    }
    pclose(fp);
}

void print_ewu(){
    //print
    printf("               ^G~                                                                                  \n"
           "        .?Y  ~#@J                                                                    !PY?~.         \n"
           "      :B&5  P@@G                                                                      J@@@@5        \n"
           "     5@@^  G@@@.     !?                                                                ~@@@@        \n"
           "    G@@@  !@@@@!   J@&.                                                                 B@@@:   GP  \n"
           "   :@@@#  B@@@@? .&@&                                                                   G@@@@  .@G  \n"
           "   ^@@@B  &@@@B  &@@#.  .?~                                                            ^@@@@&  #P   \n"
           "    @@@#  @@@@^ 7@@@@^ J@?                                                            7@@@@#..#@J   \n"
           "    !@@@. #@@@  B@@@Y P@Y  5?                                                        #@@@@? 7@@@@^  \n"
           "     7&&5 J@@@. #@@@ !@@. B@.                                                       :@@&G~!&@@@@@~  \n"
           "     .!~^.:?7?: ~55? ?&#.?@@.                                                   :G!  ^^!5&@@@@@@J   \n"
           "      !#@@@@&&&#BGPYY?7!~!77                                                  !#@@. ~G&@@@@@@@5..^  \n"
           "        ~&@@@@@@@@@@@@@@@@@@Y                                              ^P@@@@#  #@@@@@@#?.:PB   \n"
           "          !&@@@@@@@@@@@@@@@@@&!                                        .~P&@@@@@@Y  P&#G57!75&@@?   \n"
           "            Y@@@@@@@@@@@@@@@@@@#:                               :7   ?@@@@@@@@@@@^  !J5G#&@@@@@G..  \n"
           "             :#@@@@@@@@@&?!!7JP#&J                           .?&@@   !@@@@@@@@@@@  ~@@@@@&#GY!~?#!  \n"
           "               Y@@@@@@@@G        .                         .P@@@@@.  :@@@@@@@@@@#  :?7!!!7?YB&@&~   \n"
           "                ^@@@@@@@@@&#BGGPPPGP                     .G@@@@@@@^  ^@@@@@@@@@@Y  &@@@@@@@@@B~     \n"
           "                 .#@@@@@@@@@@@@@@@@@#                   5@@@@@@@@@J  !@@@@@@@@@@~  75PGGPY?^        \n"
           "                   P@@@@@@@@@@@@@@@@@#                ~&@@@@@@@@@@#  G@@@@@@@@@@. Y&G5?7!!!!:       \n"
           "                    J@@@@@@@@@@@@@@@@@#              P@@@@@@@@@@@@@^ @@@@@@@@@@&  5@@@@@@@P^        \n"
           "                     ?@@@@@@@@G.     ..             &@@@@@@@@@@@@@@@&@@@@@@@@@@B  ^~7JYP5.          \n"
           "                      7@@@@@@@@P!^......            Y@@@@@@@@@@@@@@@@@@@@@@@@@@P .@&BGP7            \n"
           "                       ?@@@@@@@@@@@@@@@@B      .Y.   5@@@@@@@@@@@@@@@@@@@@@@@@@5  .:^^:             \n"
           "                        Y@@@@@@@@@@@@@@@@~   :G@@&    B@@@@@@@&7#@@@@@@@@@@@@@@?                    \n"
           "                         G@@@@@@@@@@@@@@@5 ~#@@@@@#   .@@@@@@@@  :G@@@@@@@@@&!                      \n"
           "                          ......       .:5&@@@@@@@@&.  5@@@@@@@~   :#@@@@@@7                        \n"
           "                  .:!YG#&&@@@@&&#GY!:   Y&@@@@@@@@@@@5:!@@@@@@@B     J@@&?                          \n"
           "               :?YYG@@@@@@@@@@@@@@@@@@&P~..^5&@@@@@@@@@@@@@@@@@@^     ^:                            \n"
           "            .?&&J!5@@@@@@@@@@@@@@@@#Y7J#@@#?. :5&@@@@@@@@@@@@@@@P                                   \n"
           "            #@@@@@@@@@@@@@@@@@@@@&!7#&B7~&@@@#!  ~#@@@@@@@@@@#J.                                    \n"
           "            7@@@57^.....:~5&@@@@G^#@@@@@G.&@@@@@P. :G@@@@&P!~~                                      \n"
           "             !@&            !?J7:G###&@@@J:@@@@@@@B. :?!~!?B@@@#Y~.                                 \n"
           "               ~            B&? 75J?!~.:JP JBBBGPJ!^    ~&@@@@@@@@@&B57^.                           \n"
           "                          .&@G Y@@@@@@5     ~J5PG#&@@!    ~&@@@@@@@@@@@@@@&G5?!:                    \n"
           "                         ~@@#.B@G!!YB@@G^   .7#@@@@@@@#~    7@@@@@@@@@@@@@@@@&5:                    \n"
           "                       .P@@@? @@.     P@@?     ^#@@@@@@@&7.   B@@@@@@@@@@@#J:                       \n"
           "                ..    .B@@@@&~:J!    .YG~        !@@@@@@@@@&GG&@@@@@@@&P~.                          \n"
           "             ^G@@@@&B5!. ~#@@G:                   .&@@@@@@@@@@@@@@&P!.                              \n"
           "            7@@&#G^..7#@#?::                        B@@@@@@@@&GJ^.                                  \n"
           "            G@^        :J@@:                         #@&B57^.                                       \n"
           "             J.          Y7                           .                                             \n"
           "                                                                                                    \n");

    printf("  ______            _        ______           \n"
           " |  ____|          | |      |  ____|          \n"
           " | |__   __ _  __ _| | ___  | |__  _   _  ___ \n"
           " |  __| / _` |/ _` | |/ _ \\ |  __|| | | |/ _ \\\n"
           " | |___| (_| | (_| | |  __/ | |___| |_| |  __/\n"
           " |______\\__,_|\\__, |_|\\___| |______\\__, |\\___|\n"
           "               __/ |                __/ |     \n"
           "          ____|___/ _  ______      |___/_     \n"
           "         / ____| \\ | |/ __ \\ \\    / / __ \\    \n"
           "  ______| |    |  \\| | |  | \\ \\  / / |  | |   \n"
           " |______| |    | . ` | |  | |\\ \\/ /| |  | |   \n"
           "        | |____| |\\  | |__| | \\  / | |__| |   \n"
           "         \\_____|_| \\_|\\____/   \\/   \\____/    \n"
           "                                              \n");

    printf("Start Something Big\n");
}

void print_ip_address(char *domain) {
    struct hostent *he;
    struct in_addr **addr_list;
    if ((he = gethostbyname(domain)) == NULL) {
        printf("Cant get IP for %s :(\n", domain);
        return;
    }
    addr_list = (struct in_addr **) he->h_addr_list;
    for (int i = 0; addr_list[i] != NULL; i++) {
        printf("%s\n", inet_ntoa(*addr_list[i]));
    }
}

void ping_domain(char *domain) {
    struct timeval tval_before, tval_after, tval_result;
    struct addrinfo hints, *res;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_UNSPEC;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_CANONNAME;
    int status = getaddrinfo(domain, NULL, &hints, &res);
    if (status != 0) {
        printf("Crap I can't find the IP for %s\n", domain);
        return;
    }
    int sockfd = socket(res->ai_family, res->ai_socktype, res->ai_protocol);
    if (sockfd < 0) {
        printf("AGHHHHH CANT MAKE A SOCKET FOR %s\n", domain);
        return;
    }
    gettimeofday(&tval_before, NULL);
    if (connect(sockfd, res->ai_addr, res->ai_addrlen) < 0) {
        printf("Something got screwed up connecting to %s\n", domain);
        return;
    }
    gettimeofday(&tval_after, NULL);
    timersub(&tval_after, &tval_before, &tval_result);
    printf("Ping response time: %ld.%06ld seconds\n", tval_result.tv_sec, tval_result.tv_usec);
}

void print_menu() {
    printf("\nDomain Tools Menu\n");
    printf("1. Print domain records\n");
    printf("2. Print IP address for a domain\n");
    printf("3. Ping a domain and print response time\n");
    printf("4. Exit\n");
}

int main() {
    int choice;
    char domain[100];
    print_ewu();
    while (1) {
        print_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter the domain: ");
                scanf("%s", domain);
                print_domain_records(domain);
                break;
            case 2:
                printf("Enter the domain: ");
                scanf("%s", domain);
                print_ip_address(domain);
                break;
            case 3:
                printf("Enter the domain: ");
                scanf("%s", domain);
                ping_domain(domain);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}
