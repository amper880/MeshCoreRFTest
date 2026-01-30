#pragma once

// src/Telemetry.h
// New header for MeshRFTest telemetry extensions
// Based on MeshCore v1.12.0 - Extension for MeshRFTest

namespace mesh {

// Struct for Admin Telemetry Ping
struct admin_telemetry_ping_t {
    uint8_t  version;    // = 1
    uint8_t  length;     // payload hossza (pl. 6)
    uint32_t ping_id;    // kliens által generált egyedi ID
};

// Struct for Admin Telemetry Pong v1
struct admin_telemetry_pong_v1_t {
    uint8_t  version;    // = 1
    uint8_t  length;     // teljes payload hossz

    uint32_t ping_id;

    int16_t repeater_rssi_dbm;
    int16_t repeater_snr_x10;        // SNR * 10
    int16_t repeater_noise_floor;

    uint16_t vbat_mv;
    int16_t  cpu_temp_c_x10;
};

}  // namespace mesh