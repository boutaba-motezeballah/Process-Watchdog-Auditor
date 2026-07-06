#  Advanced Process Watchdog Auditor & Hardware Forensic Core Framework

An enterprise-grade, low-overhead system monitoring utility and low-level volatile memory inspector written in native C. This framework interfaces directly with operating system structures, kernel subsystem abstraction layers, and management instrumentation subsystems (`WMIC`) to execute high-fidelity hardware capability tracking, application path auditing, and environment analysis while maintaining absolute operational security (OpSec).

---

## 📖 Table of Contents
1. [System Capabilities & Multi-Stage Architecture](#-system-capabilities--multi-stage-architecture)
2. [Deep System Layout & How It Works Under the Hood](#-deep-system-layout--how-it-works-under-the-hood)
3. [Compilation, Local Deployment & Operational Flags](#-compilation-local-deployment--operational-flags)
4. [Enterprise Defensive Use Cases & Deployment Scenarios](#-enterprise-defensive-use-cases--depolyment-scenarios)
5. [The Architecture Mission Statement](#-the-architecture-mission-statement)
6. [Security Containment Analysis & Evidence](#-security-containment-analysis--evidence)
7. [Comprehensive Forensic Audit Report (Obfuscated Sandbox Output)](#-comprehensive-forensic-audit-report-obfuscated-sandbox-output)

---

## 🔍 System Capabilities & Multi-Stage Architecture

The software pipeline isolates system metrics using a 5-tier architecture layer mapped inside the unmanaged memory partition:

- **Stage 1 - CPU Hardware & Load Forensics:** Reads current core clock frequencies, processes hardware model configurations, and checks core thread efficiency metrics (`LoadPercentage`).
- **Stage 2 - GPU Graphics Infrastructure Audit:** Targets physical video controller components to identify graphical processing architecture elements and kernel driver versions.
- **Stage 3 - Firmware & BIOS Footprint Extraction:** Queries system board identification parameters, flash deployment timestamps, and physical manufacturing layout metadata.
- **Stage 4 - Network Interface Fingerprinting:** Maps active networking adapters to capture dynamic transmission speeds and unmanaged hardware physical addresses (MAC layers).
- **Stage 5 - Active Process Resolution Loop:** Scans active kernel threads to build an absolute executable roadmap mapping image names directly to their paths on the disk.

---

## ⚙️ Deep System Layout & How It Works Under the Hood

The architecture leverages native OS interfaces to aggregate system metrics directly from the kernel data grids, ensuring structured compilation without causing system latency:

```text
  [ Memory Heap Setup ] ---> [ Subsystem Query (WMIC) ] ---> [ Data Normalization ] ---> [ Isolated Logging ]
   Pipes Report Assets         Reads Core Drivers Matrix        Filters Strings Bytes        Generates Final Vault
```

1. **Memory Safety & Target Allocation:** The framework defines explicit array partitions inside the thread stack registers (`char report_path[]`). It runs a strict file validation hook (`report == NULL`) to isolate the environment and block system buffer crashes or allocation errors.
2. **Subsystem Interfacing & Kernel Shell Queries:** Rather than injecting untrusted hooks into the kernel space, the monitor coordinates queries using localized environment controllers. The engine formats variables utilizing the `/format:list` and `/format:table` layout matrices to enforce strict structural output, effectively bypassing raw translation anomalies during variable conversion cycles.
3. **Stream Redirection & Handle Preservation:** Output operations are piped from core diagnostics registers and cleanly injected into the safe block drive (`../reports/scan_report.txt`). Post-execution routines enforce immediate closing of open file pointers to isolate systemic foot-printing.

---

## 🚀 Compilation, Local Deployment & Operational Flags

To register and run this auditing framework within your production environment, execute these sequential command steps in your dedicated Terminal workspace:

### 1. Source Code Compilation (Windows Toolchain Environment)
```bash
gcc process_watchdog.c -o process_watchdog.exe
```

### 2. Live Runtime Execution
```bash
./process_watchdog.exe
```

*Note: For optimal automation routines, place the resulting binary file directly into your centralized configuration directory tree (`./tools/`). This allows integrated shell orchestrators (`botaba_shell`) to recognize and run its forensics tasks natively [1, 2].*

---

## 🛡️ Enterprise Defensive Use Cases & Deployment Scenarios

This forensics monitor provides crucial technical insights across several endpoint defense operations:
- **Malware Executable Mapping:** Flags unverified or suspicious background processes running out of temporary folders by displaying their absolute execution paths on disk (`C:\Windowsystem32\...`).
- **System Bottleneck Identification:** Diagnoses background CPU thrashing and physical RAM depletion parameters down to individual PIDs, allowing rapid resource tracking.
- **Rogue Hardware Tracking:** Checks local network physical interface structures (such as unverified wireless USB adapters) by displaying their hardware MAC fingerprints.

---

## 🎯 The Architecture Mission Statement

Most third-party diagnostic and monitoring utilities invoke heavy background services, consume massive memory blocks, and transmit private telemetry metrics back to unknown remote data clusters. 

This framework was engineered to provide a self-contained, zero-dependency diagnostic module that functions under total **Data Isolation Boundaries**. The mission is to guarantee absolute visibility over the machine's hardware and runtime stack while ensuring that not a single byte of telemetry leaks outside the physical computer framework.

---

## 🔐 Security Containment Analysis & Evidence

**Yes, the application layout operates under maximum system isolation principles.**

### Core Security Evidence:
- **Zero Inbound/Outbound Hooks:** The application source code contains no networking connections, API lookups, or remote telemetry web sockets. All parsed variables remain local.
- **Non-Destructive Read Operations:** Diagnostic commands communicate with system controller tables in read-only verification arrays. The script does not manipulate memory structures, alter register values, or terminate running system services.
- **Anonymization Compliance Enforcements:** Real-world execution logs uploaded to open repositories are processed via string masking filters to safely scrub structural identifiers (`XX-XX`), neutralizing data profiling vectors.

---

## 📊 Comprehensive Forensic Audit Report (Obfuscated Sandbox Output)

> [!IMPORTANT]
> **OpSec Tracking Warning:** Serial hardware strings, network MAC layers, and active process tree nodes have been pseudo-anonymized (`XX-XX`) to guarantee secure infrastructure protection inside the public presentation layout.

```text
🚨 MEGA-DATA ADVANCED FORENSIC SYSTEM REPORT | OPERATIONAL 100% 🚨
======================================================================
[+] Enforced by Islam Botaba (isl_ambt) | Oued Sly Command Station 🥷
----------------------------------------------------------------------

[1. ADVANCED CPU HARDWARE INFO] 
LoadPercentage = 30%
MaxClockSpeed  = 2600 MHz
Name           = Intel(R) Pentium(R) CPU G2030T @ 2.60GHz
NumberOfCores  = 2
 
[2. GPU GRAPHICS INFRASTRUCTURE] 
DriverVersion  = 10.18.10.4252
Name           = Intel(R) HD Graphics 5000
VideoProcessor = Intel(R) HD Graphics Family
 
[3. KERNEL BIOS & FIRMWARE DETAILS] 
Manufacturer   = American Megatrends Inc.
Name           = BIOS Date: 11/27/13 16:30:25 Ver: 04.06.05
SerialNumber   = XX-XX-XX-XX (Protected Core Layout)
Version        = ALASKA - 1072009
 
[4. NETWORK INTERFACES & PHYSICAL MAC ADDRESSES] 
MACAddress     = FC:6B:F0:XX:XX:74 (Obfuscated Gateway Interface)
Name           = 802.11n USB Wireless LAN Card
Speed          = 354000000 Bits/Sec
 
[5. ACTIVE PROCESSES & ABSOLUTE EXECUTABLE PATHS] 
ExecutablePath                                                 Name                       ProcessId     
=============================================================  =========================  =========
System Protected / Kernel Space                                System Idle Process        0                     
System Protected / Kernel Space                                System                     4                     
System Protected / Kernel Space                                Registry                   88                   
System Protected / Kernel Space                                smss.exe                   368                 
System Protected / Kernel Space                                csrss.exe                  508                 
C:\Windowsystem32\winlogon.exe                               winlogon.exe               652                 
System Protected / Kernel Space                                services.exe               724                 
C:\Windowsystem32\lsass.exe                                  lsass.exe                  744                 
C:\Windowsystem32vchost.exe                                svchost.exe                844                 
botaba_shell.exe                                               botaba_shell.exe           1105
process_watchdog.exe                                           process_watchdog.exe       4444
======================================================================
    WATCHDOG STATUS: MEGA DATA MATRIX COMPLETE | SECURE 100% 
======================================================================
```

---
