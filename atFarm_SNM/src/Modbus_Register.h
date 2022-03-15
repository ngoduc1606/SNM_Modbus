#ifndef _Register_atMB_
#define _Register_atMB_

/* _____DEFINETIONS__________________________________________________________ */

uint16_t data[32];

#define Initial_value   0

#define LCM_REGISTER_R_ID_MODBUS                    18

/*
    Request Data
*/

#define LCM_REGISTER_RW_FSD                 2001
#define LCM_REGISTER_R_SNM_ID               2002
#define LCM_REGISTER_R_ENM_ID               2003
#define LCM_REGISTER_R_IDM_ID               2004
#define LCM_REGISTER_R_IOM_ID               2005
#define LCM_REGISTER_R_HDM_ID               2006
#define LCM_REGISTER_R_DATA_READY           2007

/*
    Empty Register
*/

#define LCM_REGISTER_RW_REGISTER_1          2008
#define LCM_REGISTER_RW_REGISTER_2          2009
#define LCM_REGISTER_RW_REGISTER_3          2010
#define LCM_REGISTER_RW_REGISTER_4          2011
#define LCM_REGISTER_RW_REGISTER_5          2012
#define LCM_REGISTER_RW_REGISTER_6          2013
#define LCM_REGISTER_RW_REGISTER_7          2014
#define LCM_REGISTER_RW_REGISTER_8          2015
#define LCM_REGISTER_RW_REGISTER_9          2016
#define LCM_REGISTER_RW_REGISTER_10         2017
#define LCM_REGISTER_RW_REGISTER_11         2018
#define LCM_REGISTER_RW_REGISTER_12         2019
#define LCM_REGISTER_RW_REGISTER_13         2020
#define LCM_REGISTER_RW_REGISTER_14         2021
#define LCM_REGISTER_RW_REGISTER_15         2022
#define LCM_REGISTER_RW_REGISTER_16         2023
#define LCM_REGISTER_RW_REGISTER_17         2024
#define LCM_REGISTER_RW_REGISTER_18         2025
#define LCM_REGISTER_RW_REGISTER_19         2026
#define LCM_REGISTER_RW_REGISTER_20         2027
#define LCM_REGISTER_RW_REGISTER_21         2028
#define LCM_REGISTER_RW_REGISTER_22         2029
#define LCM_REGISTER_RW_REGISTER_23         2030
#define LCM_REGISTER_RW_REGISTER_24         2031
#define LCM_REGISTER_RW_REGISTER_25         2032
#define LCM_REGISTER_RW_REGISTER_26         2033
#define LCM_REGISTER_RW_REGISTER_27         2034
#define LCM_REGISTER_RW_REGISTER_28         2035
#define LCM_REGISTER_RW_REGISTER_29         2036
#define LCM_REGISTER_RW_REGISTER_30         2037
#define LCM_REGISTER_RW_REGISTER_31         2038
#define LCM_REGISTER_RW_REGISTER_32         2039
#define LCM_REGISTER_RW_REGISTER_33         2040


#endif


/***********
 ---------- General Register ------------
***********/


/*
 Connection
*/

// #define GENERAL_REGISTER_RW_MODBUS_RTU_ID                                       1
// #define GENERAL_REGISTER_RW_MODBUS_RTU_BAUDRATE                                 2
// #define GENERAL_REGISTER_RW_MODBUS_RTU_CHECK_NUMBER                             3
// //Time interval returns  for data to be after received command
// #define GENERAL_REGISTER_RW_MODBUS_RTU_TIME_DELAY_FOR_RETURN_DATA               4     
// // MODBUS TCP/IP: A.B.C.D
// #define GENERAL_REGISTER_R_MODBUS_TCP_IP_A                                      5
// #define GENERAL_REGISTER_R_MODBUS_TCP_IP_B                                      6
// #define GENERAL_REGISTER_R_MODBUS_TCP_IP_C                                      7
// #define GENERAL_REGISTER_R_MODBUS_TCP_IP_D                                      8
// // eg: 502 for modbus
// #define GENERAL_REGISTER_R_MODBUS_TCP_IP_PORT                                   9               
// //MESH ID(node): A.B.C.D.E.F.G.H
// #define GENERAL_REGISTER_R_MESH_ID_A                                            10  
// #define GENERAL_REGISTER_R_MESH_ID_B                                            11
// #define GENERAL_REGISTER_R_MESH_ID_C                                            12
// #define GENERAL_REGISTER_R_MESH_ID_D                                            13
// #define GENERAL_REGISTER_R_MESH_ID_E                                            14
// #define GENERAL_REGISTER_R_MESH_ID_F                                            15      
// #define GENERAL_REGISTER_R_MESH_ID_G                                            16
// #define GENERAL_REGISTER_R_MESH_ID_H                                            17

// /*
//  Device identification
// */

// #define GENERAL_REGISTER_R_DEVICE_TYPE                                          18
// //The level of this devide           
// #define GENERAL_REGISTER_RW_DEVICE_LEVEL                                        19       
// //Level highest for groups
// #define GENERAL_REGISTER_RW_LEVEL_1                                             20
// #define GENERAL_REGISTER_RW_LEVEL_2                                             21   
// #define GENERAL_REGISTER_RW_LEVEL_3                                             22
// //Level lowest for groups                    
// #define GENERAL_REGISTER_RW_LEVEL_4                                             23

// /*
//  Control
// */

// #define GENERAL_REGISTER_RW_CONTROL_COMMAND_CCA                                 24
// #define GENERAL_REGISTER_RW_CONTROL_COMMAND_CCB                                 25
// #define GENERAL_REGISTER_R_FAULT_CODE                                           26

// /******************************
//  Wifi
// ******************************/

// //Enable wifi driver
// #define GENERAL_REGISTER_RW_WIFI_ENABLE                                         27
// #define GENERAL_REGISTER_R_WIFI_STATUS                                          28
// //Received signal strength indication 
// #define GENERAL_REGISTER_R_WIFI_RSSI                                            29

// //SSID of wifi is connecting and to connect. 
// //They are converter to char and merge to a string conlude 30 char
// #define GENERAL_REGISTER_RW_WIFI_SSID_1                                         30
// #define GENERAL_REGISTER_RW_WIFI_SSID_2                                         31
// #define GENERAL_REGISTER_RW_WIFI_SSID_3                                         32
// #define GENERAL_REGISTER_RW_WIFI_SSID_4                                         33
// #define GENERAL_REGISTER_RW_WIFI_SSID_5                                         34
// #define GENERAL_REGISTER_RW_WIFI_SSID_6                                         35
// #define GENERAL_REGISTER_RW_WIFI_SSID_7                                         36
// #define GENERAL_REGISTER_RW_WIFI_SSID_8                                         37
// #define GENERAL_REGISTER_RW_WIFI_SSID_9                                         38
// #define GENERAL_REGISTER_RW_WIFI_SSID_10                                        39
// #define GENERAL_REGISTER_RW_WIFI_SSID_11                                        40
// #define GENERAL_REGISTER_RW_WIFI_SSID_12                                        41
// #define GENERAL_REGISTER_RW_WIFI_SSID_13                                        42
// #define GENERAL_REGISTER_RW_WIFI_SSID_14                                        43
// #define GENERAL_REGISTER_RW_WIFI_SSID_15                                        44
// #define GENERAL_REGISTER_RW_WIFI_SSID_16                                        45
// #define GENERAL_REGISTER_RW_WIFI_SSID_17                                        46
// #define GENERAL_REGISTER_RW_WIFI_SSID_18                                        47
// #define GENERAL_REGISTER_RW_WIFI_SSID_19                                        48
// #define GENERAL_REGISTER_RW_WIFI_SSID_20                                        49
// #define GENERAL_REGISTER_RW_WIFI_SSID_21                                        50
// #define GENERAL_REGISTER_RW_WIFI_SSID_22                                        51
// #define GENERAL_REGISTER_RW_WIFI_SSID_23                                        52
// #define GENERAL_REGISTER_RW_WIFI_SSID_24                                        53
// #define GENERAL_REGISTER_RW_WIFI_SSID_25                                        54
// #define GENERAL_REGISTER_RW_WIFI_SSID_26                                        55
// #define GENERAL_REGISTER_RW_WIFI_SSID_27                                        56
// #define GENERAL_REGISTER_RW_WIFI_SSID_28                                        57
// #define GENERAL_REGISTER_RW_WIFI_SSID_29                                        58
// #define GENERAL_REGISTER_RW_WIFI_SSID_30                                        59
// #define GENERAL_REGISTER_RW_WIFI_SSID_31                                        60

// //Password wifi is connecting and to connect.
// //They are converter to char and merge to a string conlude 30 char
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_1                                     61
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_2                                     62
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_3                                     63
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_4                                     64
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_5                                     65
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_6                                     66
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_7                                     67
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_8                                     68
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_9                                     69
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_10                                    70
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_11                                    71
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_12                                    72
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_13                                    73
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_14                                    74
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_15                                    75
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_16                                    76
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_17                                    77
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_18                                    78
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_19                                    79
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_20                                    80
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_21                                    81
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_22                                    82
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_23                                    83
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_24                                    84
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_25                                    85
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_26                                    86
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_27                                    87
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_28                                    88
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_29                                    89
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_30                                    90
// #define GENERAL_REGISTER_RW_WIFI_PASSWORD_31                                    91

// //local IP: A.B.C.D
// #define GENERAL_REGISTER_RW_WIFI_LOCAL_IP_A                                     92
// #define GENERAL_REGISTER_RW_WIFI_LOCAL_IP_B                                     93
// #define GENERAL_REGISTER_RW_WIFI_LOCAL_IP_C                                     94
// #define GENERAL_REGISTER_RW_WIFI_LOCAL_IP_D                                     95

// //gateway: A.B.C.D
// #define GENERAL_REGISTER_RW_WIFI_GATEWAY_A                                      96
// #define GENERAL_REGISTER_RW_WIFI_GATEWAY_B                                      97
// #define GENERAL_REGISTER_RW_WIFI_GATEWAY_C                                      98
// #define GENERAL_REGISTER_RW_WIFI_GATEWAY_D                                      99

// //subnet mark: A.B.C.D
// #define GENERAL_REGISTER_RW_WIFI_SUBNET_A                                       100
// #define GENERAL_REGISTER_RW_WIFI_SUBNET_B                                       101
// #define GENERAL_REGISTER_RW_WIFI_SUBNET_C                                       102
// #define GENERAL_REGISTER_RW_WIFI_SUBNET_D                                       103

// //primary DNS: A.B.C.D
// #define GENERAL_REGISTER_RW_WIFI_PRIMARY_DNS_A                                  104
// #define GENERAL_REGISTER_RW_WIFI_PRIMARY_DNS_B                                  105
// #define GENERAL_REGISTER_RW_WIFI_PRIMARY_DNS_C                                  106
// #define GENERAL_REGISTER_RW_WIFI_PRIMARY_DNS_D                                  107

// //secondary DNS: A.B.C.D
// #define GENERAL_REGISTER_RW_WIFI_SECONDARY_DNS_A                                108
// #define GENERAL_REGISTER_RW_WIFI_SECONDARY_DNS_B                                109
// #define GENERAL_REGISTER_RW_WIFI_SECONDARY_DNS_C                                110
// #define GENERAL_REGISTER_RW_WIFI_SECONDARY_DNS_D                                111

// /*
//  Ethernet
// */

// #define GENERAL_REGISTER_RW_ETHERNET_ENABLE                                     112

// ////local IP: A.B.C.D
// #define GENERAL_REGISTER_RW_ETHERNET_LOCAL_IP_A                                 113
// #define GENERAL_REGISTER_RW_ETHERNET_LOCAL_IP_B                                 114
// #define GENERAL_REGISTER_RW_ETHERNET_LOCAL_IP_C                                 115
// #define GENERAL_REGISTER_RW_ETHERNET_LOCAL_IP_D                                 116

// //gateway: A.B.C.D
// #define GENERAL_REGISTER_RW_ETHERNET_GATEWAY_A                                  117
// #define GENERAL_REGISTER_RW_ETHERNET_GATEWAY_B                                  118
// #define GENERAL_REGISTER_RW_ETHERNET_GATEWAY_C                                  119
// #define GENERAL_REGISTER_RW_ETHERNET_GATEWAY_D                                  120

// //subnet mark: A.B.C.D
// #define GENERAL_REGISTER_RW_ETHERNET_SUBNET_A                                   121
// #define GENERAL_REGISTER_RW_ETHERNET_SUBNET_B                                   122
// #define GENERAL_REGISTER_RW_ETHERNET_SUBNET_C                                   123
// #define GENERAL_REGISTER_RW_ETHERNET_SUBNET_D                                   124

// //primary DNS: A.B.C.D
// #define GENERAL_REGISTER_RW_ETHERNET_PRIMARY_DNS_A                              125
// #define GENERAL_REGISTER_RW_ETHERNET_PRIMARY_DNS_B                              126
// #define GENERAL_REGISTER_RW_ETHERNET_PRIMARY_DNS_C                              127
// #define GENERAL_REGISTER_RW_ETHERNET_PRIMARY_DNS_D                              128

// //socondary DNS: A.B.C.D
// #define GENERAL_REGISTER_RW_ETHERNET_SECONDARY_DNS_A                            129
// #define GENERAL_REGISTER_RW_ETHERNET_SECONDARY_DNS_B                            130
// #define GENERAL_REGISTER_RW_ETHERNET_SECONDARY_DNS_C                            131
// #define GENERAL_REGISTER_RW_ETHERNET_SECONDARY_DNS_D                            132

// /*
//  Mesh
// */

// //Enable mesh driver
// #define GENERAL_REGISTER_RW_MESH_ENABLE                                         133

// //MESH ID: A.B.C.D.E.F.G.H
// #define GENERAL_REGISTER_R_MESH_ID_A                                            134
// #define GENERAL_REGISTER_R_MESH_ID_B                                            135
// #define GENERAL_REGISTER_R_MESH_ID_C                                            136
// #define GENERAL_REGISTER_R_MESH_ID_D                                            137
// #define GENERAL_REGISTER_R_MESH_ID_E                                            138
// #define GENERAL_REGISTER_R_MESH_ID_F                                            139
// #define GENERAL_REGISTER_R_MESH_ID_G                                            140
// #define GENERAL_REGISTER_R_MESH_ID_H                                            141

// //Password wifi is connecting and to connect. 
// //They are converter to char and merge to a string conlude 10 char
// #define GENERAL_REGISTER_RW_MESH_PREFIX_1                                       142
// #define GENERAL_REGISTER_RW_MESH_PREFIX_2                                       143
// #define GENERAL_REGISTER_RW_MESH_PREFIX_3                                       144
// #define GENERAL_REGISTER_RW_MESH_PREFIX_4                                       145
// #define GENERAL_REGISTER_RW_MESH_PREFIX_5                                       146
// #define GENERAL_REGISTER_RW_MESH_PREFIX_6                                       147
// #define GENERAL_REGISTER_RW_MESH_PREFIX_7                                       148
// #define GENERAL_REGISTER_RW_MESH_PREFIX_8                                       149
// #define GENERAL_REGISTER_RW_MESH_PREFIX_9                                       150
// #define GENERAL_REGISTER_RW_MESH_PREFIX_10                                      151
// #define GENERAL_REGISTER_RW_MESH_PREFIX_10                                      152

// //Password wifi is connecting and to connect. 
// //They are converter to char and merge to a string conlude 10 char
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_1                                     153
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_2                                     154
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_3                                     155
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_4                                     156
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_5                                     157
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_6                                     158
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_7                                     159
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_8                                     160
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_9                                     161
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_10                                    162
// #define GENERAL_REGISTER_RW_MESH_PASSWORD_10                                    163

// //eg 5555
// #define GENERAL_REGISTER_RW_MESH_PORT                                           164

// /*
//  Electrical characteristic
// */
// #define GENERAL_REGISTER_R_220V_BUS_VOLTAGE                                     165
// #define GENERAL_REGISTER_R_220V_BUS_CURRENT                                     166
// #define GENERAL_REGISTER_R_24V_BUS_VOLTAGE                                      167
// #define GENERAL_REGISTER_R_24V_BUS_CURRENT                                      168
// #define GENERAL_REGISTER_R_12V_BUS_VOLTAGE                                      169
// #define GENERAL_REGISTER_R_12V_BUS_CURRENT                                      170
// #define GENERAL_REGISTER_R_5V_BUS_VOLTAGE                                       171
// #define GENERAL_REGISTER_R_5V_BUS_CURRENT                                       172
// #define GENERAL_REGISTER_R_3V3_BUS_VOLTAGE                                      173
// #define GENERAL_REGISTER_R_3V3_BUS_CURRENT                                      174

// /*
//  Condition operating
// */
// #define GENERAL_REGISTER_R_TEMPERATURE                                          175
// #define GENERAL_REGISTER_R_HUMIDITY                                             176



