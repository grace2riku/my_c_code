#include <stdio.h>
#include <string.h>

#define COMMAND_NUM 2
#define COMMAND_STR_LEN 16
char command_str[COMMAND_NUM][COMMAND_STR_LEN] = {"readrawtemp", "readcal"};

enum Command {
  ReadRawTemperature,
  ReadCalibtationData,
  NotSupportCommand,
  COMMAD_MAX
};

int main(void) {
    char line_str[16];
    int command_no;

    while (1) {
        printf("***** コマンドを%lu文字で入力し、エンターキーを押下してください。*****\n", sizeof(line_str)-1);
        fgets(line_str, sizeof(line_str), stdin);
//        puts(line_str);

        for (command_no = 0; command_no < COMMAND_NUM; command_no++) {
//            printf("line_str len = %lu\n", strlen(line_str));
//            printf("command_str[%d] = %s\n", command_no, command_str[command_no]);

            // 改行のみの入力かチェックする
            if (strcmp(line_str, "\n") == 0) {
                command_no = NotSupportCommand;
                break;
            }

            if (strncmp(line_str, command_str[command_no], strlen(line_str)-1) == 0) {
                break;
            }
        }

//        printf("command no = %d\n", command_no);

        switch (command_no)
        {
            case ReadRawTemperature:
                printf("readrawtemp command.\n");
                break;

            case ReadCalibtationData:
                printf("readcal command.\n");
                break;
            
            default:
                printf("Not support command.\n");
                break;
        }

    }

    return 0;
}