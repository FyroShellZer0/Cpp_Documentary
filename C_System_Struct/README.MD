# C_System_Structs

This repository is dedicated to studying **system-defined C structs** used by the operating system,
standard libraries, and POSIX APIs.

These structs are not simple data containers — they define **memory layouts** that act as an
interface between **user-space programs and the kernel**.

Understanding them is essential for:
- Systems programming
- Networking
- Cybersecurity
- Reverse engineering
- Exploit development
- Low-level debugging

---

## What This Folder Is About

This project focuses on:
- Reading real system headers
- Understanding nested structs
- Learning why exact field order matters
- Mapping structs to memory layout
- Using `man` pages as primary documentation

This is **not** about abstract data structures (like linked lists),
but about **ABI / API structs** defined by the OS.

---

## Core Concepts Covered

- `struct` layout and memory representation
- Nested structs (structs inside structs)
- Padding and alignment
- Why casting between structs exists (e.g. `sockaddr` → `sockaddr_in`)
- How headers define contracts with the kernel
- Difference between compile-time headers and runtime memory

---

## Folder Structure

