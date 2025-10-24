#ifndef _SPLITTANGL_OVERRIDES_HPP
#define _SPLITTANGL_OVERRIDES_HPP

#include "comms/B0XXInputViewer.hpp"
#include "comms/NeoPixelBackend.hpp"
#include "core/config_utils.hpp"
#include "neopixel_definitions.hpp"
#include "stdlib.hpp"

#include <Wire.h>
#include <config.pb.h>

#endif

const Config default_config = {
    .game_mode_configs_count = 5,
    .game_mode_configs = {
        GameModeConfig {
            .mode_id = MODE_MELEE,
            .button_remapping_count = 8,
            .button_remapping = {
                // switch right side rows for top homerow
                ButtonRemap { .physical_button = BTN_RF5,  .activates = BTN_RF1 },
                ButtonRemap { .physical_button = BTN_RF6,  .activates = BTN_RF2 },
                ButtonRemap { .physical_button = BTN_RF7,  .activates = BTN_RF3 },
                ButtonRemap { .physical_button = BTN_RF8,  .activates = BTN_RF4 },
                ButtonRemap { .physical_button = BTN_RF1,  .activates = BTN_RF5 },
                ButtonRemap { .physical_button = BTN_RF2,  .activates = BTN_RF6 },
                ButtonRemap { .physical_button = BTN_RF3,  .activates = BTN_RF7 },
                ButtonRemap { .physical_button = BTN_RF4,  .activates = BTN_RF8 },
            },
            .rgb_config = 1,
        },
        GameModeConfig {
            .mode_id = MODE_PROJECT_M,
            .button_remapping_count = 8,
            .button_remapping = {
                // switch right side rows for top homerow
                ButtonRemap { .physical_button = BTN_RF5,  .activates = BTN_RF1 },
                ButtonRemap { .physical_button = BTN_RF6,  .activates = BTN_RF2 },
                ButtonRemap { .physical_button = BTN_RF7,  .activates = BTN_RF3 },
                ButtonRemap { .physical_button = BTN_RF8,  .activates = BTN_RF4 },
                ButtonRemap { .physical_button = BTN_RF1,  .activates = BTN_RF5 },
                ButtonRemap { .physical_button = BTN_RF2,  .activates = BTN_RF6 },
                ButtonRemap { .physical_button = BTN_RF3,  .activates = BTN_RF7 },
                ButtonRemap { .physical_button = BTN_RF4,  .activates = BTN_RF8 },
            },
            .rgb_config = 1,
        },
        GameModeConfig {
            .mode_id = MODE_ULTIMATE,
            .button_remapping_count = 8,
            .button_remapping = {
                // switch right side rows for top homerow
                ButtonRemap { .physical_button = BTN_RF5,  .activates = BTN_RF1 },
                ButtonRemap { .physical_button = BTN_RF6,  .activates = BTN_RF2 },
                ButtonRemap { .physical_button = BTN_RF7,  .activates = BTN_RF3 },
                ButtonRemap { .physical_button = BTN_RF8,  .activates = BTN_RF4 },
                ButtonRemap { .physical_button = BTN_RF1,  .activates = BTN_RF5 },
                ButtonRemap { .physical_button = BTN_RF2,  .activates = BTN_RF6 },
                ButtonRemap { .physical_button = BTN_RF3,  .activates = BTN_RF7 },
                ButtonRemap { .physical_button = BTN_RF4,  .activates = BTN_RF8 },
            },
            .rgb_config = 1,
        },
        GameModeConfig {
            .mode_id = MODE_RIVALS_2,
            .button_remapping_count = 8,
            .button_remapping = {
                // switch right side rows for top homerow
                ButtonRemap { .physical_button = BTN_RF5,  .activates = BTN_RF1 },
                ButtonRemap { .physical_button = BTN_RF6,  .activates = BTN_RF2 },
                ButtonRemap { .physical_button = BTN_RF7,  .activates = BTN_RF3 },
                ButtonRemap { .physical_button = BTN_RF8,  .activates = BTN_RF4 },
                ButtonRemap { .physical_button = BTN_RF1,  .activates = BTN_RF5 },
                ButtonRemap { .physical_button = BTN_RF2,  .activates = BTN_RF6 },
                ButtonRemap { .physical_button = BTN_RF3,  .activates = BTN_RF7 },
                ButtonRemap { .physical_button = BTN_RF4,  .activates = BTN_RF8 },
            },
            .rgb_config = 1,
        },
        GameModeConfig {
            .mode_id = MODE_FGC,
            .button_remapping_count = 9,
            .button_remapping = {
                ButtonRemap { .physical_button = BTN_RT1,  .activates = BTN_LT1 },
            },
            .rgb_config = 2,
        },
        GameModeConfig {
            .mode_id = MODE_KEYBOARD,
            .socd_pairs_count = 0,
            .button_remapping_count = 0,
            .keyboard_mode_config = 1,
            .rgb_config = 3,
        },
    },
    .keyboard_modes_count = 1,
    .keyboard_modes = {
        KeyboardModeConfig {
            0,
            20,
            {
                { BTN_LF4, HID_KEY_A },
                { BTN_LF3, HID_KEY_B },
                { BTN_LF2, HID_KEY_C },
                { BTN_LF1, HID_KEY_D },
                { BTN_LT1, HID_KEY_E },
                { BTN_LT2, HID_KEY_F },
                { BTN_MB1, HID_KEY_H },
                { BTN_RF5, HID_KEY_J },
                { BTN_RF6, HID_KEY_K },
                { BTN_RF7, HID_KEY_L },
                { BTN_RF8, HID_KEY_M },
                { BTN_RF1, HID_KEY_N },
                { BTN_RF2, HID_KEY_O },
                { BTN_RF3, HID_KEY_P },
                { BTN_RF4, HID_KEY_Q },
                { BTN_RT4, HID_KEY_R },
                { BTN_RT3, HID_KEY_S },
                { BTN_RT5, HID_KEY_T },
                { BTN_RT1, HID_KEY_U },
                { BTN_RT2, HID_KEY_V },
            },
        },
    },
    .rgb_configs_count = 3,
    .rgb_configs = {
        /* Platform Fighter */
        RgbConfig {
            .button_colors_count = 20,
            .button_colors = {
                { BTN_LF1, 0xffffff },
                { BTN_LF2, 0xffffff },
                { BTN_LF3, 0xffffff },
                { BTN_LF4, 0xffffff },
                { BTN_LT1, 0xffffff },
                { BTN_LT2, 0xffffff },
                { BTN_RF1, 0xffffff },
                { BTN_RF2, 0xffffff },
                { BTN_RF3, 0xffffff },
                { BTN_RF4, 0xffffff },
                { BTN_RF5, 0xff0000 },
                { BTN_RF6, 0xffffff },
                { BTN_RF7, 0xff00ff },
                { BTN_RF8, 0xffffff },
                { BTN_RT1, 0x00ff00 },
                { BTN_RT2, 0xffc000 },
                { BTN_RT3, 0xffc000 },
                { BTN_RT4, 0xffc000 },
                { BTN_RT5, 0xffc000 },
                { BTN_MB1, 0xffffff },
            },
        },
        /* FGC */
        RgbConfig {
            .button_colors_count = 15,
            .button_colors = {
                { BTN_LF1, 0xffffff },
                { BTN_LF2, 0xffffff },
                { BTN_LF3, 0xffffff },
                { BTN_LT1, 0xffffff },
                { BTN_RF1, 0x00ff00 },
                { BTN_RF2, 0xff0000 },
                { BTN_RF3, 0xffffff },
                { BTN_RF4, 0xffffff },
                { BTN_RF5, 0x0000ff },
                { BTN_RF6, 0xffff00 },
                { BTN_RF7, 0xffffff },
                { BTN_RF8, 0xffffff },
                { BTN_RT1, 0xffffff },
            },
        },
        /* keyboard */
        RgbConfig {
            .button_colors_count = 20,
            .button_colors = {
                { BTN_LF1, 0x00ffff },
                { BTN_LF2, 0x00ffff },
                { BTN_LF3, 0x00ffff },
                { BTN_LF4, 0x00ffff },
                { BTN_LT1, 0x00ffff },
                { BTN_LT2, 0x00ffff },
                { BTN_RF1, 0x00ffff },
                { BTN_RF2, 0x00ffff },
                { BTN_RF3, 0x00ffff },
                { BTN_RF4, 0x00ffff },
                { BTN_RF5, 0x00ffff },
                { BTN_RF6, 0x00ffff },
                { BTN_RF7, 0x00ffff },
                { BTN_RF8, 0x00ffff },
                { BTN_RT1, 0x00ffff },
                { BTN_RT2, 0x00ffff },
                { BTN_RT3, 0x00ffff },
                { BTN_RT4, 0x00ffff },
                { BTN_RT5, 0x00ffff },
                { BTN_MB1, 0x00ffff },
            },
        },
    },
    .default_backend_config = 1,
    .default_usb_backend_config = 1,
    .rgb_brightness = 255,
};

// clang-format on

size_t init_secondary_backends_splittangl(
    CommunicationBackend **&backends,
    CommunicationBackend *&primary_backend,
    CommunicationBackendId backend_id,
    InputState &inputs,
    InputSource **input_sources,
    size_t input_source_count,
    Config &config,
    const Pinout &pinout
) {
    size_t backend_count = init_secondary_backends_default(
        backends,
        primary_backend,
        backend_id,
        inputs,
        input_sources,
        input_source_count,
        config,
        pinout
    );

    // Create new array containing all old backends but with length increased by 1 to make space for
    // NeoPixel backend.
    CommunicationBackend **new_backends = new CommunicationBackend *[backend_count + 1];
    for (size_t i = 0; i < backend_count; i++) {
        new_backends[i] = backends[i];
    }

    // Add new backend to array and increase backend count to reflect this.
    new_backends[backend_count++] = new NeoPixelBackend<LED_PIN, LED_COUNT>(
        inputs,
        input_sources,
        input_source_count,
        pixel_to_button_mappings,
        config.rgb_configs,
        config.rgb_configs_count,
        config.rgb_brightness
    );

    // Delete the old backends array and reassign it.
    delete[] backends;
    backends = new_backends;

    return backend_count;
}
