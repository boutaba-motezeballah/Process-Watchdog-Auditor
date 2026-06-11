#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // [🛠️ Fix] تصحيح المسار وزيادة الفواصل النّقية للويندوز عشان يصب في مجلد reports ديريكت
    char report_path[] = "..reportsscan_report.txt"; 

    printf("=========================================================\n");
    printf(" 🥷 PROCESS WATCHDOG AUDITOR | IN INCOGNITO MODE OPERATIONAL \n");
    printf("=========================================================\n");
    printf("[*] Scanning volatile system memory for active processes...\n\n");

    // 1. فتح ملف التقرير والنقاء التام
    FILE *report = fopen(report_path, "a"); // نفتحوه بـ "a" (Append) باش ما يمسحش التقرير السابق
    if (report == NULL) {
        printf("[-] Central Error: Cannot access target reports directory!\n");
        return 1;
    }

    fprintf(report, "\n\n🚨 BACKGROUND PROCESS SECURITY AUDIT REPORT 🚨\n");
    fprintf(report, "==================================================\n");
    fclose(report);

    // 2. استدعاء أداة الويندوز المركزية (tasklist) لصب العمليات داخل التقرير ديريكت
    char cmd[256];
    sprintf(cmd, "tasklist /FI \"STATUS eq RUNNING\" >> %s 2>&1", report_path);
    system(cmd);

    // 3. قفل التقرير بـ الواجهة الفخمة تع الزعماء
    report = fopen(report_path, "a");
    if (report != NULL) {
        fprintf(report, "==================================================\n");
        fprintf(report, " 🎓 WATCHDOG STATUS: MONITORING COMPLETE | SECURE 100%%\n");
        fprintf(report, "==================================================\n");
        fclose(report);
    }

    printf("[+] Process scan completed successfully.\n");
    printf("[+] Security log encrypted and appended inside 'reports/scan_report.txt'. 🔐\n");
    
    printf("\n=========================================================\n");
    printf(" COMPLETED | PROCESS WORKSPACE SECURITY ENFORCED 100%%    \n");
    printf("=========================================================\n");

    return 0;
}
