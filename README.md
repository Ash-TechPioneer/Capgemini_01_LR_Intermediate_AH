# Performance Testing Report – OctoPerf JPetStore
### Tool: LoadRunner Professional | Author: Ashlesha Vijay Hedaoo | Superset ID: 6375870

---

## Overview

This report documents the complete performance testing lifecycle of the **JPetStore web application** using **HP/Micro Focus LoadRunner Professional**. The testing covers script creation, parameterization, correlation, workload modeling, test execution, results analysis, and bottleneck identification using Dynatrace APM.

---

## Project Information

| Parameter | Details |
|-----------|---------|
| Project Title | Performance Testing of OctoPerf PetStore Web Application |
| Tool Used | LoadRunner Professional |
| Protocol | Web HTTP/HTML |
| Application Under Test | OctoPerf JPetStore |
| Test Type | Load Testing |
| Reporting Tool | LoadRunner Analysis |
| Monitoring | Dynatrace |
| Database | MySQL 8.0.44 (DB: `jpetstore`) |
| Environment | Windows 11, localhost:8080/jpetstore |

---

## Test Scenarios

| Scenario | Virtual Users | Duration | Result |
|----------|--------------|----------|--------|
| Scenario 1 | 25 VUsers | ~55 minutes | ✅ PASSED |
| Scenario 2 | 50 VUsers | ~55 minutes | ✅ PASSED |

---

## Scripts Created

Three performance test scripts were developed in VuGen using the **Web – HTTP/HTML** protocol:

| Script Name | Transaction Recorded | VUsers (25) | VUsers (50) |
|-------------|---------------------|-------------|-------------|
| LR_Intermediate_1 | Login | 5 | 15 |
| LR_Intermediate_2 | Search | 13 | 20 |
| LR_InterMediate_3 | Checkout | 7 | 15 |

---

## Test Cases Summary

### TC1 – Script Development
Created and recorded 3 VuGen scripts for Login, Search, and Checkout user flows. All scripts replayed successfully (status: PASSED).

### TC2 – Parameterization & Correlation
- **Login Script:** `Username` and `Password` parameterized using `.dat` files (5 user sets)
- **Search Script:** `SearchKeyword` parameterized with varied product terms
- **Checkout Script:** `F_name`, `L_name`, and `State` parameterized
- **Correlation:** Dynamic tokens `_sourcePage` and `__fp` captured using `web_reg_save_param` to handle session-specific values

### TC3 – Workload Model
Manual scenario created in Controller with:
- User distribution across 3 scripts
- Ramp-up: 10 users every 1 minute
- Defined user concurrency, pacing, and TPS targets

### TC4 – Runtime Settings
| Setting | Configuration |
|---------|--------------|
| Run Logic | 5 iterations per virtual user |
| Think Time | Replay as recorded (max 5 seconds) |
| Pacing | Configured for realistic intervals |
| SLA Goal | 4 seconds for all key transactions |

### TC5 – Test Execution
Executed both scenarios (25 and 50 VUsers) in LoadRunner Controller with real-time monitoring.

### TC6 & TC7 – Results & Export
Results captured and exported using LoadRunner Analysis.

### TC8 – Bottleneck Analysis
Server-side analysis performed using Dynatrace APM.

---

## Test Results

### Performance Metrics Comparison

| Metric | 25 VUsers | 50 VUsers |
|--------|-----------|-----------|
| Total Transactions Passed | 23,042 | 45,648 |
| Failed Transactions | 0 | 0 |
| Login Response Time | 0.006 sec | 0.007 sec |
| Search Response Time | 0.013 sec | 0.010 sec |
| Checkout Response Time | 0.037 sec | 0.032 sec |
| SLA Status | ✅ Passed | ✅ Passed |
| Hits/sec (Avg) | 76.243 | 141.944 |
| Hits/sec (Max) | 101.906 | 161.898 |
| Throughput (Avg) | 767,008 B/s | 1,414,707 B/s |
| Throughput (Max) | 952,442 B/s | 1,644,868 B/s |
| Availability | 100% | 100% |

---

## Bottleneck Analysis (Dynatrace)

### 1. 🔴 Memory Bottleneck (Primary)
- JVM Heap: ~400 MB (25 users) → ~600+ MB (50 users)
- Memory grows faster than load — session accumulation in heap
- **Fix:** Increase JVM heap allocation; enable G1GC or ParallelGC tuning

### 2. 🟠 Garbage Collection Bottleneck
- 100–200 GC events during peak load periods
- GC pauses compete with request serving
- **Fix:** Tune GC settings; use object pooling; remove memory leaks

### 3. 🟡 I/O Bottleneck
- I/O spiked during peak load in both tests
- Higher concurrency = more DB reads, file access, network calls
- **Fix:** Add caching layer; optimize DB indexing; use SSD storage

### 4. 🟡 Database Bottleneck
- CONNECT queries: 29 (1.6 ms avg) → 47 (2.4 ms avg)
- Connection count and latency grow with user load
- **Fix:** Implement connection pooling; optimize SQL queries; add indexing

### 5. 🟢 CPU — NOT a Bottleneck
- CPU remained low with minor spikes throughout
- Application is not CPU-bound at these load levels

---

## Conclusion

The JPetStore application handled **25 and 50 concurrent users** with:
- **Zero transaction failures**
- **100% availability**
- **All transactions within the 4-second SLA**
- **Near-linear throughput and hits/sec scaling**

The primary performance risks are **JVM memory pressure** and **Garbage Collection activity**, which will become critical if load scales beyond the current range.

---

## Recommendations

1. **JVM Tuning** — Increase heap size; configure G1GC for production
2. **Connection Pooling** — Prevent DB connection exhaustion at higher loads
3. **Caching** — Reduce I/O pressure with in-memory caching (e.g., Redis)
4. **Stress Testing** — Run tests at 100+ users to identify the breaking point
5. **Horizontal Scaling** — Consider load balancing for production environments
6. **Query Optimization** — Add indexing to frequently accessed DB tables

---

## Files in This Report

| File | Description |
|------|-------------|
| `LR_Intermediate_Ashlesha_hedaoo.docx` | Full performance testing report with screenshots |
| `Presentation_Script_LoadRunner_Report.md` | Script for explaining the report to the senior IT team |
| `README.md` | This file — project summary and quick reference |

---

*Report Author: Ashlesha Vijay Hedaoo | Superset ID: 6375870*
*Testing Tool: LoadRunner Professional | Monitoring: Dynatrace*
