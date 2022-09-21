/**
 * 批量 Ping IP
 *
 * author: zhouhuajian
 * version: v1.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "config.h"

// ip 数组
int ip_arr_len = 7;
char *ip_arr[7] = {
    "192.168.1.100",
    "192.168.1.101",
    "192.168.1.102",
    "192.168.1.103",
    "192.168.1.104",
    "192.168.1.105",
    "192.168.1.106",
};
// ping 命令返回值数组
int ping_result_arr[7];


int main() {
    // 遍历 IP 数组
    printf("\n");
    for (int i = 0; i < ip_arr_len; i++) {
        char *ip = ip_arr[i];
        // ping 命令
        char cmd[14] =
#ifdef _WIN32
        "ping -n 1 ";
#elif __linux__
        "ping -c 1 ";
#endif
        // 拼接 IP
        strcat(cmd, ip);
#ifdef _WIN32
        // strcat(cmd, " > nul");
#elif __linux__
        strcat(cmd, " > /dev/null");
#endif
        printf("%s\n", cmd);
        // TODO: Window ping 失败的返回值是 0，可能需要使用其他方式进行判断 ping 结果
        ping_result_arr[i] = system(cmd);
    }
    // 输出 ping 成功的 IP
    printf("\n=============================\n\n");
    printf("ping IP successfully:\n\n");
    for (int i = 0; i < ip_arr_len; i++) {
        int ping_result = ping_result_arr[i];
        // ping 失败 不做处理
        if (ping_result != 0) {
            continue;
        }
        // ping 成功 输出 IP
        printf("%s\n", ip_arr[i]);
    }
    return 0;
}
