#include <furi.h>
#include <furi_hal.h>
#include <gui/gui.h>
#include <i2cTools_icons.h>
#define APP_NAME "I2C_Tools"

#define SCAN_MENU_TEXT "Scan"
#define SCAN_MENU_X 75
#define SCAN_MENU_Y 6

#define SNIFF_MENU_TEXT "Sniff"
#define SNIFF_MENU_X 75
#define SNIFF_MENU_Y 20

#define SEND_MENU_TEXT "Send"
#define SEND_MENU_X 75
#define SEND_MENU_Y 34

// Menu
typedef enum {
    MAIN_VIEW,
    SCAN_VIEW,
    SNIFF_VIEW,
    SEND_VIEW,

    /* Know menu Size*/
    MENU_SIZE
} i2cToolsViews;

typedef struct {
    i2cToolsViews current_view;
    i2cToolsViews menu_index;
} i2cMainView;

void draw_main_view(Canvas* canvas, i2cMainView* main_view);

i2cMainView* i2c_main_view_alloc();
void i2c_main_view_free(i2cMainView* main_view);