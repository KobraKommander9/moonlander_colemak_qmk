#include "process_record.h"

static const char *git_commands[] = {
    "git init ",     "git clone ", "git config --global ", "git add ",
    "git diff ",     "git reset ", "git rebase ",          "git branch -b \"",
    "git checkout ", "git merge ", "git remote add ",      "git fetch ",
    "git pull ",     "git push ",  "git commit ",          "git status ",
    "git reflog ",
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case G_INIT ... G_LOG:
            if (record->event.pressed) {
                SEND_STRING(git_commands[keycode - G_INIT]);
                return false;
            }
            break;
    }
    return true;
}
