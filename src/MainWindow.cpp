#include "MainWindow.h"

namespace app {
    
    MainWindow::MainWindow() {
        set_title("Modern CPP GTK Quickstart");
        set_default_size(600, 400);
        set_position(Gtk::WindowPosition::WIN_POS_CENTER);

        import_tool_button.set_icon_name("gtk-open");
        import_tool_button.set_tooltip_text("Import certificates from site...");
        toolbar.add(import_tool_button);

        main_vbox.pack_start(toolbar, Gtk::PackOptions::PACK_SHRINK);
        main_vbox.pack_end(certificates_tree_view);

        add(main_vbox);
        show_all();
    }
}
