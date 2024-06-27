# Set any rules.mk overrides for your specific keymap here.
# See rules at https://docs.qmk.fm/#/config_options?id=the-rulesmk-file
AUDIO_ENABLE = no
CAPS_WORD_ENABLE = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no
DYNAMIC_TAPPING_TERM_ENABLE = yes
HOLD_ON_OTHER_KEY_PRESS = no
MOUSEKEY_ENABLE = yes
ORYX_ENABLE = yes
RGB_MATRIX_CUSTOM_KB = yes
SPACE_CADET_ENABLE = no
TAP_DANCE_ENABLE = yes

SRC = matrix.c

SRC += kobra.c
SRC += process_record.c
SRC += rgb_matrix_ledmaps.c
SRC += tap_dance.c
