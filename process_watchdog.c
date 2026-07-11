#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Structural Correction: Standardized relative path routing for Windows PE environments
    const char report_path[] = "..\\reports\\scan_report.txt"; 

    printf("====================================================================\n");
    printf("                         process-watchdog                           \n");
    printf("====================================================================\n");
    printf("[*] Querying dynamic system process tables for active tasks...\n\n");

    // Phase 1: Initialize baseline telemetry output matrix
    FILE *report = fopen(report_path, "a"); 
    if (report == NULL) {
        printf("[-] Fatal: Subsystem failure. Target destination path inaccessible.\n");
        return 1;
    }

    fprintf(report, "\n\n[SYSTEM METADATA LOG] SUB-PROCESS DISCOVERY ADVISORY\n");
    fprintf(report, "====================================================================\n");
    fclose(report);

    // Phase 2: Invoke local system subsystem configuration via structured terminal pipes
    char cmd[256];
    snprintf(cmd, sizeof(cmd), "tasklist /FI \"STATUS eq RUNNING\" >> %s 2>&1", report_path);
    system(cmd);

    // Phase 3: Enforce trailing block sequence metadata
    report = fopen(report_path, "a");
    if (report != NULL) {
        fprintf(report, "====================================================================\n");
        fprintf(report, " DISCOVERY SUMMARY: PROCESS BUFFER LOGGING SEGMENTATION COMPLETED\n");
        fprintf(report, "====================================================================\n");
        fclose(report);
    }

    printf("[+] Telemetry extraction pass executed nominally.\n");
    printf("[+] System metrics successfully appended to: '%s'\n", report_path);
    
    printf("\n====================================================================\n");
    printf(" CORE TERMINATED | LOCAL CONTEXT SPACE TELEMETRY EVALUATED         \n");
    printf("====================================================================\n");

    return 0;
}
